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

//1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test011() {
	//Person p("sda", 66); //���� �޷����Զ������Ƶ�
	Person<string, int> p("asda", 77); //ֻ������ʾָ������

	p.showPerson();
}

//2.��ģ����ģ������б��п�����Ĭ�ϲ���
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