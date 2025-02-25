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
const unsigned char guImage_player_normal_pause[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x22,
  0x08, 0x06, 0x00, 0x00, 0x00, 0x3a, 0x47, 0x0b, 0xc2, 0x00, 0x00, 0x00,
  0x04, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x08, 0x64,
  0x88, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x16,
  0x69, 0x00, 0x00, 0x16, 0x69, 0x01, 0x6d, 0x04, 0xee, 0xee, 0x00, 0x00,
  0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61,
  0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2e, 0x69, 0x6e, 0x6b, 0x73, 0x63,
  0x61, 0x70, 0x65, 0x2e, 0x6f, 0x72, 0x67, 0x9b, 0xee, 0x3c, 0x1a, 0x00,
  0x00, 0x06, 0xa7, 0x49, 0x44, 0x41, 0x54, 0x58, 0x85, 0xbd, 0x98, 0x6b,
  0x6c, 0x13, 0x57, 0x16, 0xc7, 0xcf, 0x9d, 0xa4, 0xb1, 0x63, 0x4f, 0x68,
  0x62, 0xe3, 0xd8, 0x43, 0xec, 0xc4, 0x4d, 0x96, 0x52, 0x15, 0x95, 0xb6,
  0x0b, 0x24, 0x82, 0x38, 0x43, 0xf8, 0x80, 0x63, 0x40, 0x31, 0x34, 0x8d,
  0xca, 0xae, 0x50, 0x40, 0xa8, 0x4a, 0x43, 0xb0, 0x05, 0x08, 0x1c, 0x29,
  0x5e, 0xa1, 0x3e, 0x56, 0x91, 0x62, 0x11, 0x2f, 0xb0, 0x4b, 0x82, 0x93,
  0x7c, 0x40, 0x02, 0x84, 0x5a, 0x2a, 0x48, 0xc0, 0xac, 0x44, 0x4c, 0xf9,
  0x90, 0x78, 0x6d, 0x22, 0xb5, 0xd9, 0xd2, 0xc7, 0x6a, 0x29, 0xa4, 0xb8,
  0x4e, 0xdd, 0xf8, 0x1d, 0x3b, 0x0f, 0xdb, 0xf1, 0x38, 0x2e, 0xb7, 0x1f,
  0x1a, 0x47, 0x53, 0x2f, 0xdb, 0x98, 0x3e, 0xfc, 0x97, 0xe6, 0xc3, 0x9c,
  0x7b, 0xce, 0x9c, 0xdf, 0x9d, 0x99, 0x3b, 0x73, 0xee, 0x41, 0xf0, 0x14,
  0xc2, 0x18, 0xe7, 0x01, 0x80, 0x10, 0x00, 0x0a, 0x63, 0xb1, 0x18, 0x69,
  0xb5, 0x5a, 0xa5, 0x53, 0x53, 0x53, 0x2b, 0x00, 0x00, 0x84, 0x42, 0xe1,
  0x2c, 0x4d, 0xd3, 0xdf, 0xf1, 0x78, 0xbc, 0x39, 0x00, 0x98, 0x01, 0x80,
  0x29, 0x84, 0x50, 0x22, 0xd3, 0x6b, 0xe7, 0x66, 0x08, 0x50, 0x08, 0x00,
  0xb2, 0xee, 0xee, 0xee, 0x6a, 0x9b, 0xcd, 0x56, 0xeb, 0xf3, 0xf9, 0x5e,
  0x89, 0x46, 0xa3, 0xe5, 0x8f, 0x1f, 0x3f, 0x7e, 0x86, 0xed, 0x47, 0x10,
  0xc4, 0x02, 0x9f, 0xcf, 0x77, 0x88, 0xc5, 0xe2, 0xcf, 0x14, 0x0a, 0xc5,
  0x30, 0xc6, 0xd8, 0x0e, 0x00, 0x2e, 0x84, 0xd0, 0xf4, 0x72, 0x39, 0xd0,
  0x32, 0x00, 0xf9, 0x00, 0xb0, 0xba, 0xb3, 0xb3, 0x53, 0x69, 0xb1, 0x58,
  0xde, 0x8a, 0x44, 0x22, 0xab, 0x79, 0x3c, 0xde, 0x37, 0x14, 0x45, 0x8d,
  0xc9, 0xe5, 0xf2, 0xaf, 0x4a, 0x4b, 0x4b, 0x3d, 0xab, 0x56, 0xad, 0x9a,
  0x05, 0x00, 0x70, 0xbb, 0xdd, 0x2b, 0x26, 0x26, 0x26, 0x56, 0x39, 0x9d,
  0xce, 0x17, 0xbc, 0x5e, 0xef, 0xc6, 0x58, 0x2c, 0x56, 0x46, 0x92, 0xe4,
  0x43, 0x95, 0x4a, 0xd5, 0xdf, 0xde, 0xde, 0x7e, 0x1b, 0x00, 0xbe, 0x46,
  0x08, 0xcd, 0x3f, 0x35, 0x08, 0xc6, 0x58, 0x3c, 0x38, 0x38, 0xb8, 0xf5,
  0xdc, 0xb9, 0x73, 0xc7, 0xc3, 0xe1, 0xf0, 0x06, 0x91, 0x48, 0x64, 0x6f,
  0x68, 0x68, 0xb8, 0xd0, 0xdc, 0xdc, 0x3c, 0xbe, 0xdc, 0xec, 0x00, 0x00,
  0xfa, 0xfb, 0xfb, 0x9f, 0x1f, 0x18, 0x18, 0xd8, 0x1f, 0x0c, 0x06, 0x37,
  0x0b, 0x04, 0x82, 0x31, 0x8d, 0x46, 0x63, 0xdc, 0xb5, 0x6b, 0xd7, 0x30,
  0x42, 0xc8, 0x97, 0x31, 0x08, 0xc6, 0xb8, 0xb4, 0xab, 0xab, 0xeb, 0xf5,
  0x6b, 0xd7, 0xae, 0xbd, 0xcb, 0xe1, 0x70, 0xfc, 0x0d, 0x0d, 0x0d, 0x7f,
  0x3f, 0x72, 0xe4, 0xc8, 0x7f, 0x32, 0x01, 0x48, 0xd7, 0xa9, 0x53, 0xa7,
  0xd6, 0x99, 0xcd, 0xe6, 0xc3, 0xf1, 0x78, 0x5c, 0xd4, 0xd8, 0xd8, 0xf8,
  0x8e, 0x4e, 0xa7, 0x33, 0x23, 0x84, 0x1c, 0xcb, 0x82, 0x60, 0x8c, 0xe5,
  0x47, 0x8f, 0x1e, 0x6d, 0xb1, 0xdb, 0xed, 0x3a, 0xb1, 0x58, 0x6c, 0x33,
  0x99, 0x4c, 0x06, 0x99, 0x4c, 0xc6, 0xfc, 0x12, 0x88, 0x94, 0x5c, 0x2e,
  0x17, 0xa7, 0xa5, 0xa5, 0x45, 0x1f, 0x08, 0x04, 0xaa, 0x15, 0x0a, 0x45,
  0xd7, 0xe9, 0xd3, 0xa7, 0xfb, 0x11, 0x42, 0x4e, 0xb6, 0x0f, 0x91, 0x06,
  0x21, 0x36, 0x18, 0x0c, 0xaf, 0xd9, 0xed, 0x76, 0x5d, 0x45, 0x45, 0xc5,
  0xb5, 0xeb, 0xd7, 0xaf, 0xff, 0xf5, 0xd7, 0x42, 0x00, 0x00, 0xc8, 0x64,
  0x32, 0xc6, 0x6c, 0x36, 0xbf, 0x57, 0x5e, 0x5e, 0x3e, 0x60, 0xb3, 0xd9,
  0xda, 0x8c, 0x46, 0xe3, 0x6e, 0x8c, 0xb1, 0xf8, 0x89, 0xce, 0x18, 0xe3,
  0xfc, 0x81, 0x81, 0x81, 0x3f, 0x55, 0x55, 0x55, 0xcd, 0x6c, 0xdf, 0xbe,
  0x7d, 0x64, 0x61, 0x61, 0x61, 0x2b, 0xc6, 0xb8, 0x36, 0x75, 0x98, 0x4c,
  0xa6, 0x16, 0x9a, 0xa6, 0xc7, 0x2b, 0x2b, 0x2b, 0x23, 0x6a, 0xb5, 0x7a,
  0xc8, 0xed, 0x76, 0xd7, 0xb1, 0xc7, 0x31, 0xc6, 0xb5, 0x6e, 0xb7, 0xbb,
  0xae, 0xbe, 0xbe, 0xde, 0x52, 0x59, 0x59, 0x19, 0xa1, 0x69, 0xfa, 0xa1,
  0xc9, 0x64, 0x6a, 0x61, 0x8f, 0xcf, 0xcf, 0xcf, 0x6f, 0x55, 0xa9, 0x54,
  0xff, 0xaa, 0xaa, 0xaa, 0x9a, 0x36, 0x9b, 0xcd, 0x6f, 0x2c, 0x2e, 0x06,
  0x00, 0x60, 0x3d, 0x1a, 0x8c, 0xf1, 0xba, 0x6d, 0xdb, 0xb6, 0x9d, 0x67,
  0x18, 0x46, 0x70, 0xf1, 0xe2, 0xc5, 0x43, 0x72, 0xb9, 0x3c, 0x9e, 0x1a,
  0x4b, 0x26, 0x93, 0x68, 0xcb, 0x96, 0x2d, 0xef, 0x33, 0x0c, 0xb3, 0x34,
  0x8b, 0xb5, 0x6b, 0xd7, 0x9e, 0xbf, 0x70, 0xe1, 0xc2, 0x25, 0xf6, 0x64,
  0x9a, 0x9a, 0x9a, 0xf6, 0xdd, 0xbf, 0x7f, 0xff, 0x40, 0xea, 0x9c, 0xc3,
  0xe1, 0x78, 0x46, 0x46, 0x46, 0xf6, 0xe6, 0xe6, 0xe6, 0xe2, 0x94, 0xed,
  0xd1, 0xa3, 0x47, 0xf9, 0x07, 0x0e, 0x1c, 0x30, 0x71, 0xb9, 0x5c, 0xff,
  0xed, 0xdb, 0xb7, 0xdf, 0x44, 0x08, 0x7d, 0x09, 0xb0, 0xf8, 0x68, 0x30,
  0xc6, 0x85, 0x1d, 0x1d, 0x1d, 0x75, 0xe1, 0x70, 0x78, 0xfd, 0x8e, 0x1d,
  0x3b, 0x7a, 0xd8, 0x10, 0x00, 0x00, 0xa3, 0xa3, 0xa3, 0x02, 0x36, 0x04,
  0x00, 0x80, 0xd7, 0xeb, 0x5d, 0x9b, 0x7e, 0x57, 0xfd, 0x7e, 0xff, 0x8b,
  0xec, 0x73, 0x86, 0x61, 0xa8, 0xd1, 0xd1, 0x51, 0x01, 0xdb, 0x56, 0x51,
  0x51, 0x31, 0xaf, 0x54, 0x2a, 0x7b, 0x42, 0xa1, 0xd0, 0x46, 0x83, 0xc1,
  0xa0, 0xc4, 0x18, 0x3f, 0xbb, 0x04, 0x02, 0x00, 0xb2, 0x3b, 0x77, 0xee,
  0x34, 0x0b, 0x04, 0x82, 0xb1, 0xf6, 0xf6, 0xf6, 0x7f, 0xa7, 0x27, 0x60,
  0x18, 0x26, 0x27, 0xdd, 0x86, 0x31, 0xce, 0xc8, 0xf6, 0xa4, 0xd8, 0x13,
  0x27, 0x4e, 0x7c, 0x52, 0x54, 0x54, 0xf4, 0xa9, 0xc5, 0x62, 0x69, 0x06,
  0x80, 0x52, 0x00, 0x00, 0x02, 0x63, 0x9c, 0x77, 0xf6, 0xec, 0x59, 0x45,
  0x24, 0x12, 0x59, 0xad, 0x52, 0xa9, 0x2e, 0xa5, 0x07, 0xfd, 0x5e, 0xaa,
  0xab, 0xab, 0xbb, 0x34, 0x37, 0x37, 0xb7, 0xa6, 0xb7, 0xb7, 0x77, 0x33,
  0xc6, 0x38, 0x8f, 0x00, 0x00, 0xa1, 0xcd, 0x66, 0xab, 0xe5, 0x70, 0x38,
  0xbe, 0xc3, 0x87, 0x0f, 0x7f, 0x99, 0x2d, 0x10, 0xad, 0x56, 0xfb, 0x79,
  0x5e, 0x5e, 0x5e, 0x60, 0x78, 0x78, 0xb8, 0x16, 0x00, 0x04, 0x04, 0x00,
  0x14, 0xfa, 0x7c, 0xbe, 0x57, 0x45, 0x22, 0xd1, 0x18, 0xfb, 0xa5, 0xfa,
  0xbd, 0xc5, 0xe5, 0x72, 0xb1, 0x48, 0x24, 0x1a, 0xf3, 0x7a, 0xbd, 0xaf,
  0x00, 0x40, 0x21, 0x11, 0x8b, 0xc5, 0xc8, 0x68, 0x34, 0x5a, 0x26, 0x95,
  0x4a, 0x1f, 0x64, 0x0b, 0x22, 0x25, 0x8a, 0xa2, 0x1e, 0x44, 0xa3, 0xd1,
  0xf2, 0x58, 0x2c, 0x56, 0x40, 0x58, 0xad, 0x56, 0x29, 0xc6, 0x38, 0x4f,
  0x2a, 0x95, 0xba, 0xb3, 0x0d, 0x52, 0x56, 0x56, 0x36, 0x89, 0x31, 0xce,
  0xb3, 0xd9, 0x6c, 0x25, 0x44, 0xaa, 0x9e, 0x28, 0x2c, 0x2c, 0x8c, 0x64,
  0x1b, 0x24, 0x95, 0xd3, 0xef, 0xf7, 0xaf, 0x20, 0x96, 0x73, 0xce, 0x96,
  0x08, 0xa1, 0x50, 0x38, 0x0b, 0x00, 0x30, 0x3d, 0x3d, 0x4d, 0x66, 0x3b,
  0x79, 0x28, 0x14, 0x22, 0x01, 0x00, 0x8a, 0x8b, 0x8b, 0x67, 0x09, 0x9a,
  0xa6, 0xbf, 0x43, 0x08, 0x25, 0x5c, 0x2e, 0x57, 0x49, 0xb6, 0x41, 0x5c,
  0x2e, 0x97, 0x14, 0x21, 0x94, 0x50, 0x28, 0x14, 0x93, 0x04, 0x8f, 0xc7,
  0x9b, 0xe3, 0xf3, 0xf9, 0xce, 0xc9, 0xc9, 0xc9, 0x35, 0xd9, 0x06, 0xf1,
  0x78, 0x3c, 0x6b, 0xf8, 0x7c, 0xbe, 0x83, 0xc7, 0xe3, 0xcd, 0x11, 0x00,
  0x30, 0x23, 0x91, 0x48, 0xee, 0x05, 0x02, 0x81, 0xf5, 0xc9, 0x64, 0xf2,
  0x67, 0x4b, 0xc7, 0xdf, 0x52, 0xf1, 0x78, 0x1c, 0x05, 0x02, 0x81, 0xf5,
  0x14, 0x45, 0xdd, 0x03, 0x80, 0x69, 0x02, 0x00, 0xa6, 0x14, 0x0a, 0xc5,
  0x30, 0xc3, 0x30, 0xe2, 0x33, 0x67, 0xce, 0xbc, 0x94, 0x2d, 0x90, 0xee,
  0xee, 0xee, 0x97, 0x13, 0x89, 0x84, 0x88, 0xa6, 0xe9, 0x61, 0x00, 0x08,
  0x11, 0x08, 0xa1, 0x84, 0x56, 0xab, 0xb5, 0x93, 0x24, 0x39, 0x6e, 0xb1,
  0x58, 0x9a, 0xb2, 0x05, 0x62, 0xb1, 0x58, 0x9a, 0x0a, 0x0a, 0x0a, 0x1e,
  0xb4, 0xb6, 0xb6, 0xde, 0x45, 0x08, 0x25, 0x52, 0xcb, 0xd7, 0xb5, 0x73,
  0xe7, 0x4e, 0x53, 0x38, 0x1c, 0xde, 0xd0, 0xd9, 0xd9, 0xb9, 0x21, 0x3d,
  0x88, 0xc3, 0xe1, 0x7c, 0x9f, 0x6e, 0x43, 0x08, 0x65, 0x64, 0x7b, 0x52,
  0x6c, 0x47, 0x47, 0x47, 0x55, 0x38, 0x1c, 0xfe, 0xa3, 0x52, 0xa9, 0xec,
  0x07, 0x00, 0x17, 0xc0, 0x62, 0x19, 0x80, 0x10, 0x9a, 0x6e, 0x6b, 0x6b,
  0xbb, 0x53, 0x54, 0x54, 0x34, 0x76, 0xeb, 0xd6, 0x2d, 0x8d, 0xd3, 0xe9,
  0xe4, 0xb2, 0x03, 0x37, 0x6d, 0xda, 0x14, 0xe2, 0x72, 0xb9, 0x5e, 0xb6,
  0x8d, 0xa2, 0xa8, 0xff, 0x29, 0xa6, 0x25, 0x12, 0xc9, 0x7f, 0xd3, 0x20,
  0x3c, 0x35, 0x35, 0x35, 0x53, 0x6c, 0x9b, 0xc3, 0xe1, 0xe0, 0x59, 0x2c,
  0x96, 0x56, 0xa1, 0x50, 0xf8, 0xb1, 0x5e, 0xaf, 0xff, 0x08, 0x21, 0x34,
  0xb3, 0x04, 0xb2, 0xa8, 0xaf, 0xb5, 0x5a, 0xad, 0x31, 0x91, 0x48, 0x08,
  0x34, 0x1a, 0xcd, 0x5f, 0xd8, 0x2f, 0x6e, 0x6e, 0x6e, 0x2e, 0xde, 0xb7,
  0x6f, 0xdf, 0x3b, 0x24, 0x49, 0x8e, 0xe7, 0xe4, 0xe4, 0x44, 0x4b, 0x4a,
  0x4a, 0x6e, 0x9d, 0x3c, 0x79, 0xf2, 0xc3, 0x74, 0x10, 0x83, 0xc1, 0x70,
  0xa5, 0xa4, 0xa4, 0x64, 0x28, 0x27, 0x27, 0x27, 0x4a, 0x92, 0xe4, 0xc3,
  0xfd, 0xfb, 0xf7, 0xbf, 0xcb, 0x1e, 0x8f, 0xc7, 0xe3, 0x48, 0xa3, 0xd1,
  0xe8, 0x17, 0x16, 0x16, 0x9e, 0xd5, 0x68, 0x34, 0x46, 0x00, 0x58, 0xda,
  0x9a, 0xfc, 0x64, 0x95, 0x60, 0x8c, 0xc5, 0x46, 0xa3, 0xf1, 0xcf, 0x57,
  0xae, 0x5c, 0xe9, 0x2a, 0x2f, 0x2f, 0x1f, 0xb8, 0x7c, 0xf9, 0x72, 0xef,
  0x6f, 0xf5, 0x47, 0x4e, 0x26, 0x93, 0x68, 0xef, 0xde, 0xbd, 0xad, 0x0e,
  0x87, 0xe3, 0xb5, 0x3d, 0x7b, 0xf6, 0x1c, 0xd7, 0xe9, 0x74, 0x1f, 0x20,
  0x84, 0xfc, 0x4b, 0x93, 0x65, 0x3b, 0x23, 0x84, 0x7c, 0x18, 0xe3, 0xeb,
  0x1e, 0x8f, 0xa7, 0xd8, 0x6a, 0xb5, 0xb6, 0xa9, 0xd5, 0xea, 0xe2, 0xbe,
  0xbe, 0xbe, 0x5f, 0xbd, 0x9d, 0x70, 0x3a, 0x9d, 0xdc, 0x43, 0x87, 0x0e,
  0xe9, 0x83, 0xc1, 0xe0, 0xe6, 0x9a, 0x9a, 0x9a, 0x93, 0x3a, 0x9d, 0xee,
  0x06, 0x1b, 0x02, 0xe0, 0x67, 0x36, 0x58, 0x46, 0xa3, 0xb1, 0xe1, 0xea,
  0xd5, 0xab, 0xef, 0x71, 0xb9, 0xdc, 0x80, 0x5a, 0xad, 0xfe, 0xc7, 0xb1,
  0x63, 0xc7, 0xbe, 0xf8, 0x25, 0x10, 0x46, 0xa3, 0x71, 0xdd, 0xcd, 0x9b,
  0x37, 0x8f, 0x30, 0x0c, 0x23, 0x6c, 0x6c, 0x6c, 0x7c, 0x5b, 0xa7, 0xd3,
  0xfd, 0x33, 0xa3, 0x0d, 0x16, 0x0b, 0x46, 0x7c, 0xe3, 0xc6, 0x8d, 0xda,
  0x9e, 0x9e, 0x9e, 0xe3, 0xa1, 0x50, 0x68, 0xe3, 0xca, 0x95, 0x2b, 0xef,
  0xee, 0xde, 0xbd, 0xfb, 0xe2, 0xc1, 0x83, 0x07, 0x33, 0xaa, 0x5b, 0xfa,
  0xfa, 0xfa, 0x5e, 0x18, 0x1c, 0x1c, 0x6c, 0x0a, 0x06, 0x83, 0x9b, 0x85,
  0x42, 0xe1, 0xc7, 0x5a, 0xad, 0xf6, 0x6f, 0xf5, 0xf5, 0xf5, 0xc3, 0xe9,
  0x77, 0x62, 0x59, 0x90, 0x45, 0x98, 0x7c, 0x00, 0xf8, 0x83, 0xc1, 0x60,
  0x50, 0x0e, 0x0d, 0x0d, 0xbd, 0x15, 0x89, 0x44, 0x9e, 0xcf, 0xcf, 0xcf,
  0xff, 0x96, 0xa2, 0xa8, 0x4f, 0x4a, 0x4b, 0x4b, 0xef, 0xcb, 0xe5, 0x72,
  0x0f, 0x45, 0x51, 0xb3, 0x00, 0x00, 0x1e, 0x8f, 0x67, 0x85, 0xd3, 0xe9,
  0xa4, 0x26, 0x26, 0x26, 0x5e, 0xf4, 0x7a, 0xbd, 0x95, 0xf3, 0xf3, 0xf3,
  0xd2, 0x82, 0x82, 0x82, 0x07, 0x4a, 0xa5, 0xb2, 0x5f, 0xaf, 0xd7, 0x7f,
  0x04, 0x00, 0xe3, 0x08, 0xa1, 0xf8, 0xff, 0xcb, 0x95, 0xd1, 0x27, 0x7d,
  0xb1, 0xe4, 0x97, 0xf5, 0xf6, 0xf6, 0x56, 0x8f, 0x8c, 0x8c, 0x6c, 0xf1,
  0x7a, 0xbd, 0xaf, 0x46, 0x22, 0x91, 0xe7, 0x30, 0xc6, 0x9c, 0x9f, 0x5c,
  0x0c, 0x21, 0x86, 0x24, 0x49, 0x87, 0x44, 0x22, 0xb9, 0x47, 0xd3, 0xf4,
  0x48, 0x6b, 0x6b, 0xeb, 0x5d, 0xf8, 0xb1, 0x2d, 0x31, 0xb3, 0x5c, 0x8e,
  0xa7, 0xfa, 0xb7, 0x2c, 0x36, 0x6a, 0x04, 0xf0, 0x63, 0xa3, 0xa6, 0xc0,
  0x6e, 0xb7, 0x4b, 0x03, 0x81, 0x00, 0x09, 0x00, 0x20, 0x12, 0x89, 0x22,
  0xd5, 0xd5, 0xd5, 0xa9, 0x46, 0xcd, 0x34, 0x00, 0x84, 0x9e, 0xa6, 0x51,
  0xf3, 0x03, 0xfe, 0x94, 0x03, 0x60, 0x36, 0x96, 0x08, 0xd4, 0x00, 0x00,
  0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};
