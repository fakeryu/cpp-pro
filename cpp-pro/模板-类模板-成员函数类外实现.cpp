#include<iostream>
using namespace std;

template<class T1,class T2>
class Person34
{
public:
	Person34(T1 name,T2 age);
	 
	void showPerson();

	T1 m_Name;
	T2 m_Age;

};

//构造函数类外实现
template<class T1, class T2>
Person34<T1,T2>::Person34(T1 name,T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

//成员函数类外实现
template<class T1, class T2>
void Person34<T1, T2>::showPerson()
{
	cout << "just do it" << endl;
}

void test1625() {
	Person34<string, int> p("tom", 18);
	p.showPerson();
}

int main1635() {

	test1625();

	system("pause");
	return 0;
}