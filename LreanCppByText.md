# 注释

```CPP
//单行注释，双斜杠后面都是注释，给人看的
/*
多行注释
可以换行，也可以写在代码里面(不建议)
*/
```







# 基础Cmd程序

```cpp
#include <iostream>

using namespace std;

int main(){
    
   	//你的其他代码
    
    system("pause");
	return 0;	//新标可不写
}
```







# 变量

```cpp
//数据类型 变量名 = 值			变量是给一个内存空间起一个名称，方便操控
shot sint = 1;
```

| 数据类型  | 解释       | 数据类型 | 解释       |
| --------- | ---------- | -------- | ---------- |
| short     | 短整型     | int      | 整形       |
| long long | 长整型     | bool     | 布尔       |
| float     | 单精度浮点 | double   | 双精度浮点 |
| char      | 字符       | string   | 字符串     |
| auto      | 自动类型   | wchar_t  | 宽字符型   |







# 常量

```cpp
//常量不可被修改，除非自己修改
#define Day 7	//定义Day的值为7

const int week = 4;	//const 数据类型 变量名;
```







# 转义字符

```cpp
//在字符或字符串里使用
```

| 转义字符 | 解释     | 转义字符 | 解释     |
| -------- | -------- | -------- | -------- |
| \a       | 警报     | \b       | 退格     |
| \f       | 换页     | \n       | 换行     |
| \r       | 回车     | \t       | 水平制表 |
| \v       | 垂直制表 | \ [符号] | 符号     |







# 输入输出

```cpp
//输入
string Str;
std::cin>>Str;

//输出
#define Day 7

//main函数里...
std::cout<<Day<<endl;
```







# 运算符

| 算术运算符     | 解释     | 算术运算符     | 解释     |
| -------------- | -------- | -------------- | -------- |
| +              | 加/正号  | ++             | 加一     |
| -              | 减/负号  | --             | 减一     |
| *              | 乘       | /              | 除       |
| %              | 模       |                |          |
|                |          |                |          |
| **逻辑运算符** | **解释** | **逻辑运算符** | **解释** |
| !              | 非       | &&             | 与       |
| \|\|           | 或       |                |          |
|                |          |                |          |
| **其他运算符** | **解释** | **其他运算符** | **解释** |
| =              | 赋值     | >              | 大于     |
| <              | 小于     | >=             | 大于等于 |
| <=             | 小于等于 | ==             | 等于     |
| !=             | 不等于   |                |          |







# 程序流程结构

```cpp
if(true/false/*逻辑如1 > 5*，为假走假/){
	//真
}else{
	//假
}
```

```cpp
switch(变量名){
    case 值A:
        //变量名=值A，执行此处
        break;
    case 值B:
        //变量名=值B，执行此处
        break;
    default:
        //变量名不等于上面的任何值，执行此次
        break;
}
```

```cpp
for(int i = 0;i<10;i++){
	//循环10次
}
```

```cpp
while(true/false){
	//如果为真一直循环，建议使用if+break，以免造成无限循环导致卡机
}
```

```cpp
do{
	//先执行一次，后循环。
}while(true/false)
```



TipsA:

continue	跳过

goto		跳转（无条件，不常用）



TipsB:

```cpp
//三目运算符
int a,b;
a = 10,b = 20;
a > b ? cout<<"a\n" : cout<<"b\n";
```







# 数组

```cpp
int arr[] = {1,2,3,4,5};	//定义数组A，已知值
int arr[255];	//定义数组B，已知数量
```

```cpp
//嵌套数组（高纬数组）
int arrs[][] = {
    {1,2,3},
    {2,3,5}
};
```







# 函数

```cpp
数据类型 函数名(传入的值A,传入的值B,传入...)		//也可以不传，作为纯函数
{
    //你的代码
}
```

```cpp
//默认值参数
int fun(int a, int b = 20){
    return a+b;
}
//若不传入b，只传入a，那么b就等于20
```

```cpp
//占位参数
void fun(int a,int);//函数里只能使用 a 

//main函数里...
fun(10,10);	//需要传入2个int类型，第二个int类型用不到但必须传入数值
```

```cpp
//const 修饰函数	如需修改请在变量前面加上 mutable
void showPerson() const
{
	age = 18;
}
```







# 指针

```cpp
int cont = 1;	//定义一个内存空间名为cont,值为1
int *p = &cont;	//定义一个相同类型的指针，指向cont的内存地址。
```

```cpp
//空指针，野指针
int * p = NULL;

int *p = (int *)0x1110;	//野指针，指向非法内存空间
```



```cpp
//const 修饰指针
const int *p = &a;	//可以改指向，不可改值
p = &b;

int * const p = &a;	//不可改指向，可以改值
p = 100;

const int * const p = &a;	//都不可以修改
```



```cpp
//函数中的指针	-函数调用后交换
void swapA(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = *temp;
}

int main(){
    
    int a,b;
    a = 10,b=20;
    swapA(&a,&b);
    
    return 0;
}
```







# 结构体与枚举

```cpp
//自定义数据类型
struct Person{
	std::string Name;
	int age;
	long long Id;
}p1;	//此处p1是在定义结构体时，直接创建变量名。否则需要在使用上面新增 Person p1;
```

```cpp
//使用A
p1.Name = "ace";

//使用B
p1 = {"acee",18,114514};
```



```cpp
//自定义枚举
enum Color{
	Wirte,
    Red,
    Blue
};
```

```cpp
//使用
Color::Red
```







# 类与对象

```cpp
class Person{
    private:
    	//私有
    public:
    	//公有
    	Person();	//类初始化时首先执行的操作
    	~Person();	//类被删除时执行的操作
    protected:
    	//保护，子可以访问父
};

//main函数里...
Person p1;
p1.类里函数
```

```cpp
//拷贝-将一个类全部拷贝到另一个类里，在类内
Person(const Person &p){
    //代码
}

//main函数里...
Person p1;
Person p2(p1);	//吧p1里面的东西拷贝到p2里
```

```cpp
//初始化对象，在类里
Person(int a, std::string name):m_age(10),m_name("ace"){
    
}
```

```cpp
//静态

/*
共享一份数据
类内声明，类外初始化
*/
class Person{
    static int m_Age;
};

int Person::m_Age = 114514;

//静态函数，只能访问静态成员变量
```

```cpp
//this 指针，在类中
class Person{
	public:
    	Person(int age){
            this->age = age;
        }
    
    int age;
};
```

```cpp
//常对象	如需修改请在变量前面加上 mutable
const Person p;
p.age = 100	//错误
```

```cpp
//友元	让一个函数或类访问另一个类中的私有
//全局函数做友元
#include <iostream>

class Ace {
	friend void PrintPriNumber(Ace* a);
public:
	Ace() {
		PriNumber = 111;
	}


private:
	int PriNumber;
};

void PrintPriNumber(Ace *a) {
	std::cout << a->PriNumber;
}

int main()
{
	Ace a;
	PrintPriNumber(&a);
	return 0;
}

//类做友元
#include <iostream>

class Ace {
	friend class Person;
public:
	Ace() {
		PriNumber = 111;
	}

private:
	int PriNumber;
};

class Person {
public:
	Person() {
		a = new Ace;
	}

	void visit() {
		std::cout << a->PriNumber;
	};

	Ace* a;
};

int main()
{
	Person p;
	p.visit();
	return 0;
}

//成员函数做友元

```







# 内存模型

代码区：由操作系统管理，存放函数体的二进制代码

全局区：存放全局变量和静态变量以及常量

栈区：编译器自动分配释放，存放函数的参数值，局部变量等

堆区：由程序员分配释放，最终由操作系统回收

```cpp
//堆区开辟内存
int *a = new int();

//释放
delete a;
```

