#include"stdafx.h"
#include <iostream>
#include<list>				//���listͷ�ļ�

using namespace std;
void func2() 
{
	list<int> lst1;          //������list
	
	lst1.push_back(2); 
	lst1.push_back(6);
	lst1.push_back(8);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(0);
	lst1.push_front(0);   //��ͷ�����һ��0

	cout << "�����Ԫ�ظ�����" << lst1.size() << endl;

	cout << "չʾ��";
	for (list<int>::iterator iter = lst1.begin(); iter != lst1.end(); iter++)
	{
		cout << *iter << "  ";
	}
	cout << endl;

	// bool isEmpty1 = lst1.empty();			//�ж�lst1�Ƿ�Ϊ��

	//  0  2  6  8  9  9  9  9  9  0

	lst1.erase(lst1.begin());			//ɾ����һ��Ԫ��

	list<int>::iterator iter= lst1.begin();   
	iter++;
	lst1.insert(iter, 4);      //����һ��Ԫ��
	lst1.remove(9);         //ɾ��ȫ����9
	//lst1.reverse();                  //��ת
	//lst1.sort();                       //����
	//lst1.unique();                         //ɾ�������ظ�Ԫ��
	cout << "չʾ��";
	for (list<int>::iterator iter = lst1.begin(); iter != lst1.end(); iter++)
	{
		cout << *iter << "   ";
	}

	cout << endl;
}
