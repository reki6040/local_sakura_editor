﻿/*!	@file
	
	@brief GREP support library
	
	@author wakura
	@date 2008/04/28
*/
/*
	Copyright (C) 2008, wakura
	Copyright (C) 2018-2022, Sakura Editor Organization

	This software is provided 'as-is', without any express or implied
	warranty. In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose, 
	including commercial applications, and to alter it and redistribute it 
	freely, subject to the following restrictions:

		1. The origin of this software must not be misrepresented;
		   you must not claim that you wrote the original software.
		   If you use this software in a product, an acknowledgment
		   in the product documentation would be appreciated but is
		   not required.

		2. Altered source versions must be plainly marked as such, 
		   and must not be misrepresented as being the original software.

		3. This notice may not be removed or altered from any source
		   distribution.
*/
#ifndef SAKURA_CGREPENUMFILES_0C041F0A_3D17_475F_BA25_26D30E055E9D_H_
#define SAKURA_CGREPENUMFILES_0C041F0A_3D17_475F_BA25_26D30E055E9D_H_
#pragma once

#include "CGrepEnumFileBase.h"

class CGrepEnumFiles : public CGrepEnumFileBase {
private:

public:
	CGrepEnumFiles(){
	}

	virtual ~CGrepEnumFiles(){
	}

	BOOL IsValid( WIN32_FIND_DATA& w32fd, LPCWSTR pFile = NULL ) override {
		if( ! ( w32fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) ){
			if( CGrepEnumFileBase::IsValid( w32fd, pFile ) ){
				return TRUE;
			}
		}
		return FALSE;
	}
};
#endif /* SAKURA_CGREPENUMFILES_0C041F0A_3D17_475F_BA25_26D30E055E9D_H_ */
