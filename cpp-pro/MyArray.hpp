//�Լ���ͨ�õ�������
#pragma once
#include<iostream>;
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι��� ���� ����
	MyArray(int capacity) {
		cout << "�вι���" << endl;
		this->m_Size = 0;
		this->m_Capacity = capacity;
		this->pAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr) {
		cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//ǳ����
		//this->pAddress = arr.pAddress;

		//���
		this->pAddress = new T[arr.m_Capacity];
		//��������� ��Ҫ�����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	// ��ֹǳ��������
	MyArray& operator=(const MyArray& arr) // ����MyArray& ʹ�ÿ���ʹ�� a=b=c ���Ȳ���
	{
		cout << "operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
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

	//�����±�ķ�ʽ����������Ԫ�� arr[0] = 100;
	 T& operator[](int index) {
		return this->pAddress[index];
	 }


	//β�巨
	void Push_Back(const T& val) {
		if (this->m_Capacity==this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void Pop_Back() {
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ
		if (this->m_Size>=1)
		{
			this->m_Size--;
		}
	}

	//��ȡ��������
	int getCapacity() {
		return this->m_Capacity;
	}

	//��ȡ�����С
	int getSize() {
		return this->m_Size;
	}

	//����
	~MyArray() {
		cout << "~MyArray����" << endl;
		if (this->pAddress !=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	//���� 
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	//����
	int m_Capacity;

	//��С 
	int m_Size;
};