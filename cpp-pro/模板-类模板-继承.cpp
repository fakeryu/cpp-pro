#include<iostream>
using namespace std;

template<class T>
class Base {
	T m;
};

//class Son :public Base //���󣬱���Ҫ֪�������е�T���ͣ����ܼ̳и�����
class Son :public Base<int>
{
	int t;
};

void test1614() {
	Son s1;
}

//�����ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
	Son2() {
		cout << "T1����Ϊ��" << typeid(T1).name() << endl;
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