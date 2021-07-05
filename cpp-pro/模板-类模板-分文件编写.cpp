#include<iostream>
using namespace std;

//第一种解决方式，直接包含 源文件
//#include "personf.cpp"
//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名为.hpp文件
#include "personf.hpp"


//template<class T1, class T2>
//class Personf
//{
//public:
//	Personf(T1 name, T1 age);
//
//	void showPersonp() {
//
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1, class T2>
//Personf<T1, T2>::Personf(T1 name, T1 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Personf<T1, T2>::showPersonp() {
//	cout << "姓名:" << this->m_Name << endl;
//}


void test1635() {
	Personf<string, int> pf("jerry",19);
	pf.showPersonp();
}

int main1657() {

	test1635();

	system("pause");
	return 0;
}