#include<iostream>
using namespace std;

//ģ�岢�������ܣ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ�� ����ʵ��

//�Ա����������Ƿ���Ⱥ���
class Person
{
public:
	Person(string name,int age) {
		this->m_Age = age;
		this->m_Name = name;
	};
	~Person() {
	
	};

	string m_Name;
	int m_Age;

};


template<class T>
bool myCompare(T &a,T &b) {
	if (a==b)
	{
		return true;
	}
	return false;
}

//���þ��廯Person�İ汾ʵ�ִ��룬
template<> bool myCompare(Person& p1, Person& p2) {
	if (p1.m_Name==p2.m_Name&&p1.m_Age==p2.m_Age)
	{
		return true;
	}
	return false;
}

void testJu() {
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "equal" << endl;
	}
	else {
		cout << "unequal" << endl;
	}
}

void testJu2() {
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "equal" << endl;
	}
	else {
		cout << "unequal" << endl;
	}
}

int main1514() {

	//testJu();
	testJu2();

	system("pause");
	return 0;
}