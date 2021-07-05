#include<iostream>
using namespace std;

//1.普通函数调用可以发生隐式类型转换
//2.函数模板 用自动类型推到，不可以发生隐式类型转换
//3.函数模板 用显示指定类型，可以发生

//普通函数
int myAdd01(int a,int b) {
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a,T b) {
	return a + b;
}

void testDif() {
	int a = 10;
	int b = 20;
	char c = 'c'; // c的ascII -99,a-97
	cout << "a+c=" << myAdd01(a, c) << endl;

	//自动类型推导
	myAdd02(a, b);
	cout << "a+b=" << myAdd02(a, b) << endl;

	//显示指定类型
	cout << "a+c=" << myAdd02<int>(a, c) << endl;
}

int main1432() {

	testDif();

	system("pause");
	return 0;
}