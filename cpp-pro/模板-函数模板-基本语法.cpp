#include<iostream>
using namespace std;

//����ģ��

//ע������

//template<class T>//typename�����滻��class


//����ģ��
template<typename T> //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T& a, T& b) {
	T  temp = a;
	a = b;
	b = temp;
}

//1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	//swapInt(a, b);
	//���ú���ģ�彻��

	//���ַ�ʽʹ��
	//1.�Զ������Ƶ�
	//mySwap(a, b);

	//2.��ʾָ������
	//mySwap<int>(a, b);

	//mySwap<int>(a, c);//���� �Ƶ�����һ�µ�T����


	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

}

//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>//typename�����滻��class
void func() {
	cout << "666" << endl;
}

void test02()
{
	func<int>(); //����ָ���������Ͳſ���ʹ��
}

//�������ͽ�������
void swapInt(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//���������ͽ�������
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

int main1408(){

	test01();

	system("pause");
	return 0;
}