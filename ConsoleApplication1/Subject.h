/**
 * @file Subject.h
 * @brief Subjectクラスの定義
 * @author マゼピン
 * @date 2025-12-27
 *
 * このファイルでは、ObserverパターンにおけるSubjectクラスを定義しています。
 * Subjectクラスは、複数のObserverオブジェクトを管理し、状態の変化を通知します。
 */

#pragma once

#include <vector>

class obs; // 前方宣言でobsクラスを使用可能にする

/// @brief Subjectクラス
class Subject
{
public:
	void AddObserver(obs& o);	// オブザーバーを追加する関数
	void NotifyAll();			//	すべてのオブザーバーに通知する関数

private:
	std::vector<obs*> observers_;	//!< オブザーバーのリストを保存する変数
};

