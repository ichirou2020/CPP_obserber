/**
*	@file 	obs1.h
*	@brief 	オブザーバークラス見本1のヘッダ
*	@details オブザーバーパターンの見本で使うオブザーバークラス1のヘッダファイルです。
*/

#pragma once

#include "obs.h"

/// @brief オブザーバークラス見本1
/// @details オブザーバーパターンの見本で使うオブザーバークラス1です。
class obs1 : public obs
{
public:
	void update() override;	// オブザーバークラス見本1のupdate関数
};

