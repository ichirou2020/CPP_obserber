/**
* @file ConsoleApplication1.cpp
 * @brief オブザーバーパターンのサンプルコード
 * @author マゼピン
 * @date 2025-12-27
 * @details オブザーバークラスの見本を作ってみた @n 
 */

#include "Subject.h"
#include "obs1.h"
#include "obs2.h"
#include "obs3.h"

int main()
{
	obs1 o1;
	obs2 o2;
	obs3 o3;

	Subject subject;
	subject.AddObserver(o1);
	subject.AddObserver(o2);
	subject.AddObserver(o3);
	subject.NotifyAll();
}

