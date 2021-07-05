#include<iostream>
using namespace std;

//函数模板

//注意事项

//template<class T>//typename可以替换成class


//函数模板
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b) {
	T  temp = a;
	a = b;
	b = temp;
}

//1.自动类型推导，必须推导出一致的数据类型T才可以使用
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	//swapInt(a, b);
	//利用函数模板交换

	//两种方式使用
	//1.自动类型推导
	//mySwap(a, b);

	//2.显示指定类型
	//mySwap<int>(a, b);

	//mySwap<int>(a, c);//错误 推导不出一致的T类型


	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

}

//2.模板必须要确定出T的数据类型，才可以使用
template<class T>//typename可以替换成class
void func() {
	cout << "666" << endl;
}

void test02()
{
	func<int>(); //给出指定数据类型才可以使用
}

//两个整型交换函数
void swapInt(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//两个浮点型交换函数
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

int main1408(){

	test01();

	system("pause");
	return 0;
}