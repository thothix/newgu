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
#ifndef __RADIOGENREEDITOR_H__
#define __RADIOGENREEDITOR_H__

#include "DbRadios.h"

#include <wx/string.h>
#include <wx/checklst.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/dialog.h>

namespace Guayadeque {

// -------------------------------------------------------------------------------- //
class guRadioGenreEditor : public wxDialog
{
  private:
    guDbRadios *            m_Db;
    guListItems             m_AddedGenres;
    wxArrayString           m_RadioGenres;

  protected:
    wxCheckListBox*         m_CheckListBox;
    wxStaticText*           m_InputStaticText;
    wxTextCtrl*             m_InputTextCtrl;

  public:
    guRadioGenreEditor( wxWindow* parent, guDbRadios * db ); //
    ~guRadioGenreEditor();
    void GetGenres( wxArrayString &addedgenres, wxArrayInt &deletedgenres );

};

}

#endif
// -------------------------------------------------------------------------------- //
