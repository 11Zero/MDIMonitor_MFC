/*=======================================================
  FILE: WinGslDll.inl
	VER: 1.4.01, July 09, 2004, by Csaba F. Kiss, kiss@in.tum.de

  DSC: Macro definition used in dynamic linking for proper import/export declarations.
						
	GNU Stuff:
					This program is free software; you can redistribute it and/or modify
					it under the terms of the GNU General Public License as published by
					the Free Software Foundation; either version 2 of the License, or (at
					your option) any later version.

					This program is distributed in the hope that it will be useful, but
					WITHOUT ANY WARRANTY; without even the implied warranty of
					MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
					General Public License for more details.

					You should have received a copy of the GNU General Public License
					along with this program; if not, write to the Free Software
					Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

=======================================================*/
#ifdef GSL_DLL
	#ifdef DLL_EXPORT
			#define WINGSLDLL_API __declspec(dllexport)
	#else
		#define WINGSLDLL_API __declspec(dllimport)
	#endif
#else
	#define WINGSLDLL_API
#endif
