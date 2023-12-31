﻿/*! @file */
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
#ifndef SAKURA_CSOUNDSET_2EB52973_40E4_438F_A670_6FFA850251E6_H_
#define SAKURA_CSOUNDSET_2EB52973_40E4_438F_A670_6FFA850251E6_H_
#pragma once

class CSoundSet{
public:
	CSoundSet() : m_nMuteCount(0) { }
	void NeedlessToSaveBeep(); //上書き不要ビープ音
	void MuteOn(){ m_nMuteCount++; }
	void MuteOff(){ m_nMuteCount--; }
private:
	int	m_nMuteCount;
};
#endif /* SAKURA_CSOUNDSET_2EB52973_40E4_438F_A670_6FFA850251E6_H_ */
