#include<iostream>
using namespace std;

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ�� ����ʾָ�����ͣ����Է���

//��ͨ����
int myAdd01(int a,int b) {
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a,T b) {
	return a + b;
}

void testDif() {
	int a = 10;
	int b = 20;
	char c = 'c'; // c��ascII -99,a-97
	cout << "a+c=" << myAdd01(a, c) << endl;

	//�Զ������Ƶ�
	myAdd02(a, b);
	cout << "a+b=" << myAdd02(a, b) << endl;

	//��ʾָ������
	cout << "a+c=" << myAdd02<int>(a, c) << endl;
}

int main1432() {

	testDif();

	system("pause");
	return 0;
}