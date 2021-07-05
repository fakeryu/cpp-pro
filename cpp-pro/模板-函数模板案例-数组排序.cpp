#include<iostream>
using namespace std;

//实现通用对数组进行排序函数
//规则： 从大到小 ，算法 ：选择排序， 测试：chart数组、int数组

//交换函数模板
template<class T>
void mySwap(T& a, T& b) {
	T temp= a;
	a = b;
	b = temp;
}

//函数模板
template<typename T> 
void mySort(T arr[],int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max]<arr[j])
			{
				max = j; //找出最大值下标
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
	//测试char数组
	char charArr[] = "abdcfe";
	int len = sizeof(charArr) / sizeof(char);
	mySort(charArr, len);
	printArray(charArr, len);

	//测试int数组
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