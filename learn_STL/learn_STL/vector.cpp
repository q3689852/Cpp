#include"stdafx.h"
#include <iostream>
#include<vector>				//���vectorͷ�ļ�
using namespace std;

void func1()
{
	vector<int>vec2;				//����һ��int�����������ֽ�vec1
	vec2.push_back(1);				//��������
	vec2.push_back(3);
	vec2.push_back(3);
	vec2.push_back(5);
	vec2.push_back(7);
	vec2.push_back(9);

	vector<int>vec1(vec2);


	cout << "������Ԫ�صĸ�����" << vec1.size() << endl << "���Ƿֱ��ǣ�";


	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i] << "   ";
	}

	cout << endl;

	bool isNull = vec1.empty();      //�ж�vec1�Ƿ�Ϊ��

	if (isNull)
	{
		cout << "vec1�ǿյ�" << endl;
	}
	else {
		cout << "vec1���ǿյ�" << endl;
	}

	vec1.insert(vec1.end(), 0);  //��β�˲���0

	//1 	3	3	 5		7		9		 0
	
	vec1.erase(vec1.begin()+1, vec1.begin() + 2);   //ɾ����1��2֮���Ԫ��

	vector<int>::iterator iter = vec1.begin();		//����һ����������ָ�����һ��Ԫ��

	cout << "����������������" ;

	for (iter = vec1.begin(); iter != vec1.end(); iter++)
	{
		cout << *iter << "  "; //�������
	}


	cout << endl;
	cout << "�����ܴ洢���ݵĸ�����" << vec1.capacity() << endl;
	cout << "����Ŀǰ���ڵ�Ԫ������" << vec1.size() << endl;
	
}