/*
   Copyright (C) 2008-2023 J.Rios <anonbeat@gmail.com>
   Copyright (C) 2024-2025 Tiago T Barrionuevo <thothix@protonmail.com>

   This file is part of Guayadeque Music Player.

   Guayadeque is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Guayadeque is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Guayadeque. If not, see <https://www.gnu.org/licenses/>.
*/
#include "Yahoo.h"

#include "CoverEdit.h"
#include "Utils.h"

#include <wx/arrimpl.cpp>
#include <wx/statline.h>
#include <wx/html/htmlpars.h>

namespace Guayadeque {

#define YAHOO_IMAGES_SEARCH_URL    wxT( "http://images.search.yahoo.com/search/images?&p=%s" )

// -------------------------------------------------------------------------------- //
guYahooCoverFetcher::guYahooCoverFetcher( guFetchCoverLinksThread * mainthread, guArrayStringArray * coverlinks,
                                    const wxChar * artist, const wxChar * album ) :
    guCoverFetcher( mainthread, coverlinks, artist, album )
{
}

// -------------------------------------------------------------------------------- //
void guYahooCoverFetcher::ExtractImageInfo( const wxString &content )
{
    //guLogMessage( wxT( "ExtractImageInfo: '%s'" ), content.c_str() );
    wxArrayString CurImageInfo;
    wxString ImgUrl = ExtractString( content, wxT( "&imgurl=" ), wxT( "&" ) );
    ImgUrl.Replace( wxT( "%2F" ), wxT( "/" ) );
    CurImageInfo.Add( ImgUrl );
    wxString ImgInfo = ExtractString( content, wxT( "&w=" ), wxT( "&" ) );
    if( !ImgInfo.IsEmpty() )
        ImgInfo += wxT( " x " ) + ExtractString( content, wxT( "&h=" ), wxT( "&" ) );
    CurImageInfo.Add( ImgInfo );
    m_CoverLinks->Add( CurImageInfo );
}

// -------------------------------------------------------------------------------- //
int guYahooCoverFetcher::ExtractImagesInfo( wxString &content, int count )
{
    int ImageIndex = 0;
    while( !m_MainThread->TestDestroy() )
    {
        int FindPos = content.Find( wxT( "<li class=\"ld" ) );
        if( FindPos == wxNOT_FOUND )
            break;

        content = content.Mid( FindPos );

        FindPos = content.Find( wxT( "</li>" ) );
        if( FindPos == wxNOT_FOUND )
            break;

        ExtractImageInfo( content.Mid( 0, FindPos + 5 ) );
        ImageIndex++;
        if( ImageIndex > count )
            break;

        content = content.Mid( FindPos + 4 );
        if( content.IsEmpty() )
            break;
    }

    return 0;
}

// -------------------------------------------------------------------------------- //
int guYahooCoverFetcher::AddCoverLinks( int pagenum )
{
    wxString SearchString = wxString::Format( wxT( "\"%s\" \"%s\"" ), m_Artist.c_str(), m_Album.c_str() );
    //guLogMessage( wxT( "URL: %u %s" ), m_CurrentPage, m_SearchString.c_str() );
    wxString SearchUrl = wxString::Format( YAHOO_IMAGES_SEARCH_URL, guURLEncode( SearchString ).c_str() );
    //guLogMessage( wxT( "URL: %u %s" ), pagenum, SearchUrl.c_str() );
    if( !m_MainThread->TestDestroy() )
    {
        //printf( "Buffer:\n%s\n", Buffer );
        wxString Content = GetUrlContent( SearchUrl );
        if( Content.Length() )
        {
            if( !m_MainThread->TestDestroy() )
            {
                //guLogMessage( wxT( "Google:====>>>>\n%s\n<<<<====" ), Content.c_str() );
                return ExtractImagesInfo( Content, 32 );
            }
        }
        else
        {
            guLogError( wxT( "Could not get the remote data from connection" ) );
        }
    }
    return 0;
}

}

// -------------------------------------------------------------------------------- //
