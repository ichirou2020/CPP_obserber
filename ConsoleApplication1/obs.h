/**
*	@file obs.h
*	@brief オブザーバークラス見本のベースクラス
*	@details オブザーバーパターンの見本で使うオブザーバークラスのベースクラスです。
*/


#pragma once

/// <summary>
/// オブザーバークラス見本のベースクラス
/// </summary>
class obs
{
public :
	virtual void update() = 0;	//< 仮想関数update
};

