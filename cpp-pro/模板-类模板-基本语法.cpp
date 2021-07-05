#include<iostream>
using namespace std;

template<class NameType,class AgeType>
class Person {

public:
	Person(NameType name,AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void testBas() {
	Person<string, int> p1("ken", 99);
	p1.showPerson();
	
}

int main1537() {

	testBas();

	system("pause");
	return 0;
}