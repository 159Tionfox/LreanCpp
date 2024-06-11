//此处是用于学习示例，我将全部变成函数那么只需要把函数里的片段复制粘贴到main函数里即可
#include "Using.h"

void HelloWorld() {	//C++继承C的特点，所以在C++你也可以写C
	//C++输出
	std::cout << "HelloWorld" << std::endl;
	//C输出
	printf("HelloWorld");
}

void Variable() {	//数据类型 变量名，变量名不能为数据类型或其他cpp已有关键字	此内容运行将没有任何东西
	//整数类型
	short sint;
	int iNumber;
	long lint;
	long long llint;

	//浮点类型
	float f;
	double d;

	//布尔
	bool b;

	//字符与字符串
	char c;
	wchar_t wct;
	std::string str;

	//自动(必须有值)
	auto autov = 3;
}