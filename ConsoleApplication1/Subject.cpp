/**
* @file Subject.cpp
* @brief Subjectクラスのメンバ関数の実装
*/

#include "obs.h"
#include "Subject.h"

/// @brief オブザーバーを追加する関数
/// @param o 追加するオブザーバーの参照
void Subject::AddObserver(obs& o)
{
	// オブザーバーのリストにオブザーバーのアドレスを追加
	observers_.push_back(&o);
}

/// @brief すべてのオブザーバーに通知する関数
void Subject::NotifyAll()
{
	for (auto& o : observers_)
	{
		o->update();	// 各オブザーバーのupdate関数を呼び出す
	}
}