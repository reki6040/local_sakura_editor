﻿/*!	@file
	@brief DebugMonitorLib用関数

*/
/*
	Copyright (C) 2008, kobake
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
#ifndef SAKURA_DEBUG3_8861EC84_D1B0_4285_939E_6FEC4712DB31_H_
#define SAKURA_DEBUG3_8861EC84_D1B0_4285_939E_6FEC4712DB31_H_
#pragma once

#ifdef USE_DEBUGMON
int DebugMonitor_Output(const wchar_t* szInstanceId, const wchar_t* szText);
LPCWSTR GetWindowsMessageName(UINT msg);
#endif
#endif /* SAKURA_DEBUG3_8861EC84_D1B0_4285_939E_6FEC4712DB31_H_ */
