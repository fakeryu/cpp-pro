#include<iostream>
using namespace std;

//类模板中成员函数在调用时才去创建

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

	//类模板中的成员函数,并不是一开始就创建的，而是在按模板调用时再生成
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