#include<iostream>
using namespace std;

//ʵ��ͨ�ö��������������
//���� �Ӵ�С ���㷨 ��ѡ������ ���ԣ�chart���顢int����

//��������ģ��
template<class T>
void mySwap(T& a, T& b) {
	T temp= a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T> 
void mySort(T arr[],int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max]<arr[j])
			{
				max = j; //�ҳ����ֵ�±�
			}
		}
		if (max != i)
		{
		/*	int temp = arr[max];
			arr[max] = arr[i];
			arr[i] = arr[max]; */
			mySwap(arr[max], arr[i]);
		}

	}
}

template<class T>
void printArray(T arr[],int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void testSort() {
	//����char����
	char charArr[] = "abdcfe";
	int len = sizeof(charArr) / sizeof(char);
	mySort(charArr, len);
	printArray(charArr, len);

	//����int����
	int arr[] = { 7,4,3,8,1 };
	int num = sizeof(arr) / sizeof(int);
	mySort(arr, num);
	printArray(arr, num);
}

int main1409() {

	testSort();

	system("pause");
	return 0;
}