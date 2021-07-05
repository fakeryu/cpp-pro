#include<iostream>
using namespace std;

template<class T>
class Base {
	T m;
};

//class Son :public Base //错误，必须要知道父类中的T类型，才能继承给子类
class Son :public Base<int>
{
	int t;
};

void test1614() {
	Son s1;
}

//想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2() {
		cout << "T1类型为：" << typeid(T1).name() << endl;
	}
	T1 obj;
};

void test16142() {
	Son2<int, char> s2;
}

int main1625() {

	test1614();

	test16142();

	system("pause");
	return 0;
}