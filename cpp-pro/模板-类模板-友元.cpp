#include<iostream>
using namespace std;
//ͨ��ȫ�ֺ��� ��ӡPeresonp��Ϣ

//�ñ�������ǰ֪��Personp��Ĵ���
template<class T1, class T2>
class Personp;

//����ʵ��
template<class T1, class T2>
void printPerson2(Personp<T1, T2> p) {
	cout << "����ʵ��������" << p.m_Name << endl;
}

template<class T1,class T2>
class Personp {
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(Personp<T1,T2> p) {
		cout << "����ʵ��������" << p.m_Name << endl;
	}
	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Personp<T1, T2> p);


public:
	Personp(T1 name,T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



//1ȫ�ֺ�������ʵ��
void test17() {
	Personp<string, int>p("Tom", 22);
	printPerson(p);
}

//2ȫ�ֺ�������ʵ��
void test18() {
	Personp<string, int>p("Tom22", 32);
	printPerson2(p);
}

int mainmbyy() {

	test17();

	test18();

	system("pause");
	return 0;
}