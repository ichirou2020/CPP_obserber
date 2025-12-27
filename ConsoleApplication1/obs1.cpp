/**
*	@file 	obs1.cpp
*	@brief 	オブザーバークラス見本1の実装
*	@details オブザーバーパターンの見本で使うオブザーバークラス2の実装ファイルです。
*/

#include <iostream>
#include "obs1.h"

/// @brief オブザーバークラス見本1のupdate関数
void obs1::update()
{
	std::cout << "obs1 update" << std::endl;
}
