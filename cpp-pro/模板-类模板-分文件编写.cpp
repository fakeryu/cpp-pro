#include<iostream>
using namespace std;

//��һ�ֽ����ʽ��ֱ�Ӱ��� Դ�ļ�
//#include "personf.cpp"
//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺��Ϊ.hpp�ļ�
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
//	cout << "����:" << this->m_Name << endl;
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