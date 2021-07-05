#include<iostream>
using namespace std;

//普通函数
void myPrint(int a, int b) {
	cout << "普通函数" << endl;
}

//函数模板
template<class T>
void myPrint(T a, T b) {
	cout << "函数模板" << endl;
}

template<class T>
void myPrint(T a, T b,T c) {
	cout << "函数模板-函数重载" << endl;
}

void testRule() {
	int a = 10;
	int b = 10;
	int c = 100;
	//myPrint(a, b);

	//通过空模板参数列表，强制调用函数模板
	//myPrint<>(a, b);

	//myPrint(a, b, c); //发生重载

	//如果函数模板 产生 更好匹配 优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);

}

int main1454() {

	testRule();

	system("pause");
	return 0;
}