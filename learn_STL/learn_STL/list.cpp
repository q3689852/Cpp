#include"stdafx.h"
#include <iostream>
#include<list>				//添加list头文件

using namespace std;
void func2() 
{
	list<int> lst1;          //创建空list
	
	lst1.push_back(2); 
	lst1.push_back(6);
	lst1.push_back(8);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(9);
	lst1.push_back(0);
	lst1.push_front(0);   //在头部添加一个0

	cout << "链表的元素个数：" << lst1.size() << endl;

	cout << "展示：";
	for (list<int>::iterator iter = lst1.begin(); iter != lst1.end(); iter++)
	{
		cout << *iter << "  ";
	}
	cout << endl;

	// bool isEmpty1 = lst1.empty();			//判断lst1是否为空

	//  0  2  6  8  9  9  9  9  9  0

	lst1.erase(lst1.begin());			//删除第一个元素

	list<int>::iterator iter= lst1.begin();   
	iter++;
	lst1.insert(iter, 4);      //插入一个元素
	lst1.remove(9);         //删除全部的9
	//lst1.reverse();                  //反转
	//lst1.sort();                       //排序
	//lst1.unique();                         //删除相邻重复元素
	cout << "展示：";
	for (list<int>::iterator iter = lst1.begin(); iter != lst1.end(); iter++)
	{
		cout << *iter << "   ";
	}

	cout << endl;
}
