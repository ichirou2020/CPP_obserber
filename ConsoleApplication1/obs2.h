/**
*	@file 	obs2.h
*	@brief 	オブザーバークラス見本2のヘッダ
*	@details オブザーバーパターンの見本で使うオブザーバークラス1のヘッダファイルです。
*/

#pragma once
#include "obs.h"

/// @brief オブザーバークラス見本2
/// @details オブザーバーパターンの見本で使うオブザーバークラス2です。
class obs2 :
    public obs
{
	void update() override;	// オブザーバークラス見本2のupdate関数
};

