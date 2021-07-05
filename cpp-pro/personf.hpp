#pragma once
#include<iostream>
using namespace std;

template<class T1, class T2>
class Personf
{
public:
	Personf(T1 name, T2 age);

	void showPersonp();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Personf<T1, T2>::Personf(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void Personf<T1, T2>::showPersonp() {
	cout << "ÐÕÃû:" << this->m_Name << endl;
}