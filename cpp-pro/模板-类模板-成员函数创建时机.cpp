#include<iostream>
using namespace std;

//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person1 {

public:

	void showPerson1() {
		cout << "showPerson1"<< endl;
	}

};

class Person2 {

public:

	void showPerson2() {
		cout << "showPerson2" << endl;
	}

};

template<class T>
class MyClass {
public:

	T obj;

	//��ģ���еĳ�Ա����,������һ��ʼ�ʹ����ģ������ڰ�ģ�����ʱ������
	void func1() {
		obj.showPerson1();
	}

	void func2() {
		obj.showPerson2();
	}
};

void test0123() {
	MyClass<Person1> m;
	m.func1();
	//m.func2();
}

int main1557() {

	test0123();

	system("pause");
	return 0;
}