#include<iostream>
using namespace std;
#include "MyArray.hpp";

void printArray(MyArray <int>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test07() {
	MyArray <int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1容量：" << arr1.getCapacity() << endl;
	cout << "arr1大小：" << arr1.getSize() << endl;

	cout << "arr1输出：" << endl;
	printArray(arr1);

	MyArray <int>arr2=arr1;
	arr2.Pop_Back();
	cout << "arr2输出：" << endl;
	printArray(arr2);
}

//测试自定义数据类型
class Person {
public:
	Person() {

	};

	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonAray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名" << arr[i].m_Name << endl;
	}

}

void test45() {
	MyArray<Person> arr(10);
	Person p1("y1", 11);
	Person p2("y2", 21);
	Person p3("y3", 31);
	Person p4("y4", 41);
	Person p5("y5", 51);
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonAray(arr);

	cout << "arr容量：" << arr.getCapacity() << endl;
	cout << "arr大小：" << arr.getSize() << endl;
}

int main() {

	test07();

	//test45();

	system("pause");
	return 0;
}