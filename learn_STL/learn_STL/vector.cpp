#include"stdafx.h"
#include <iostream>
#include<vector>				//添加vector头文件
using namespace std;

void func1()
{
	vector<int>vec2;				//声明一个int型向量，名字叫vec1
	vec2.push_back(1);				//存入数据
	vec2.push_back(3);
	vec2.push_back(3);
	vec2.push_back(5);
	vec2.push_back(7);
	vec2.push_back(9);

	vector<int>vec1(vec2);


	cout << "向量里元素的个数：" << vec1.size() << endl << "他们分别是：";


	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i] << "   ";
	}

	cout << endl;

	bool isNull = vec1.empty();      //判断vec1是否为空

	if (isNull)
	{
		cout << "vec1是空的" << endl;
	}
	else {
		cout << "vec1不是空的" << endl;
	}

	vec1.insert(vec1.end(), 0);  //在尾端插入0

	//1 	3	3	 5		7		9		 0
	
	vec1.erase(vec1.begin()+1, vec1.begin() + 2);   //删除第1到2之间的元素

	vector<int>::iterator iter = vec1.begin();		//声明一个迭代器并指向其第一个元素

	cout << "整理后的向量容器：" ;

	for (iter = vec1.begin(); iter != vec1.end(); iter++)
	{
		cout << *iter << "  "; //遍历输出
	}


	cout << endl;
	cout << "容器能存储数据的个数：" << vec1.capacity() << endl;
	cout << "容器目前存在的元素数：" << vec1.size() << endl;
	
}