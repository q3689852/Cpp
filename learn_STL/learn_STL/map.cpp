#include"stdafx.h"
#include <iostream>
#include<cstdlib>
#include<map>				//添加map头文件

using namespace std;

//p<int, string> map1;
void func3()
{
	map<int, string> map1;
	
	map1[1] = "hello";	
	map1[3] = "world";
		
	map <int, string>::iterator map_iter=map1.begin();  //声明一个迭代器   

	int key = map_iter->first;             //取得key
	string value = map_iter->second;       //取得value


	cout << "插入元素之前的长度：" << map1.size() << endl;
	map1.insert(map<int, string>::value_type(2, "MyNameIsDongGuoZheng"));//插入元素
	cout << "插入元素之后的长度：" << map1.size() << endl;

	string str = map1[2];                  //根据key取得value
	cout << "输出第二句话" << endl;
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i]  ;
	}
	cout << endl;

	map1.erase(3);                         //根据key删除value
	cout << "删除第三个元素之后的长度：" << map1.size() << endl;

	

	map1.clear();                      //清空所有元素
	cout << "清空所有元素之后的长度：" << map1.size() << endl;


	map1.empty();                       //判断空
	

}
