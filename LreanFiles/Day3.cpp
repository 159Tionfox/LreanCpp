//常量与变量及其赋值
#include <iostream>

int main() {

	//常量其值不可改变
	const int CInt = 157;	//定义一个整型常量CInt，并赋值为157
	int i = 10;	//定义一个整型变量i，并赋值为10

	CInt = 5;	//错误，会有红色波浪线	(导致程序不能运行)

	i = 5;	//成功
}