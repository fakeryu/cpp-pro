#include<iostream>
using namespace std;

template<class T1,class T2>
class Person {
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << this->m_Name << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1.指定传入类型
void printPerson1(Person<string, int>& p) {
	p.showPerson();
}

void test0001() {
	Person<string, int> p("y1", 11);
	printPerson1(p);
}

//2.参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
	p.showPerson();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void test0002() {
	Person<string, int> p("y2", 21);
	printPerson2(p);
}

//3.整个类型模板化
template<class T>
void printPerson3(T& p) {
	p.showPerson();
	cout << "T的类型为：" << typeid(T).name() << endl;
}

void test0003() {
	Person<string, int> p("y3", 31);
	printPerson3(p);
}

int main1613() {

	test0003();

	system("pause");
	return 0;
}