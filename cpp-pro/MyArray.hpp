//自己的通用的数组类
#pragma once
#include<iostream>;
using namespace std;

template<class T>
class MyArray
{
public:
	//有参构造 参数 容器
	MyArray(int capacity) {
		cout << "有参构造" << endl;
		this->m_Size = 0;
		this->m_Capacity = capacity;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝函数
	MyArray(const MyArray& arr) {
		cout << "拷贝函数" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//浅拷贝
		//this->pAddress = arr.pAddress;

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//如果有数据 需要将数据拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	// 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr) // 返回MyArray& 使得可以使用 a=b=c 连等操作
	{
		cout << "operator=函数" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//利用下标的方式访问数组中元素 arr[0] = 100;
	 T& operator[](int index) {
		return this->pAddress[index];
	 }


	//尾插法
	void Push_Back(const T& val) {
		if (this->m_Capacity==this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void Pop_Back() {
		//让用户访问不到最后一个元素，即为尾删
		if (this->m_Size>=1)
		{
			this->m_Size--;
		}
	}

	//获取数组容量
	int getCapacity() {
		return this->m_Capacity;
	}

	//获取数组大小
	int getSize() {
		return this->m_Size;
	}

	//析构
	~MyArray() {
		cout << "~MyArray函数" << endl;
		if (this->pAddress !=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	//数组 
	T* pAddress;//指针指向堆区开辟的真实数组

	//容量
	int m_Capacity;

	//大小 
	int m_Size;
};