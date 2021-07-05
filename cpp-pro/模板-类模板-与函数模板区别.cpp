#include<iostream>
using namespace std;

template<class NameType, class AgeType = int>
class Person {

public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1.类模板没有自动类型推导使用方式
void test011() {
	//Person p("sda", 66); //错误 无法用自动类型推导
	Person<string, int> p("asda", 77); //只能用显示指定类型

	p.showPerson();
}

//2.类模板在模板参数列表中可以有默认参数
void test022() {
	Person<string> p("asda2", 87); 

	p.showPerson();
}

void testdf() {

}

int main1549() {

	test011();

	test022();

	system("pause");
	return 0;
}