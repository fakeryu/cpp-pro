#include<iostream>
using namespace std;

//��ͨ����
void myPrint(int a, int b) {
	cout << "��ͨ����" << endl;
}

//����ģ��
template<class T>
void myPrint(T a, T b) {
	cout << "����ģ��" << endl;
}

template<class T>
void myPrint(T a, T b,T c) {
	cout << "����ģ��-��������" << endl;
}

void testRule() {
	int a = 10;
	int b = 10;
	int c = 100;
	//myPrint(a, b);

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	//myPrint<>(a, b);

	//myPrint(a, b, c); //��������

	//�������ģ�� ���� ����ƥ�� ���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);

}

int main1454() {

	testRule();

	system("pause");
	return 0;
}