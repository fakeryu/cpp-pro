#include<iostream>
using namespace std;
//通过全局函数 打印Peresonp信息

//让编译器提前知道Personp类的存在
template<class T1, class T2>
class Personp;

//类外实现
template<class T1, class T2>
void printPerson2(Personp<T1, T2> p) {
	cout << "类外实现姓名：" << p.m_Name << endl;
}

template<class T1,class T2>
class Personp {
	//全局函数 类内实现
	friend void printPerson(Personp<T1,T2> p) {
		cout << "类内实现姓名：" << p.m_Name << endl;
	}
	//全局函数 类外实现
	//加空模板参数列表
	//如果全局函数 是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Personp<T1, T2> p);


public:
	Personp(T1 name,T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



//1全局函数类内实现
void test17() {
	Personp<string, int>p("Tom", 22);
	printPerson(p);
}

//2全局函数类外实现
void test18() {
	Personp<string, int>p("Tom22", 32);
	printPerson2(p);
}

int mainmbyy() {

	test17();

	test18();

	system("pause");
	return 0;
}