#include"stdafx.h"
#include <iostream>
#include<cstdlib>
#include<map>				//���mapͷ�ļ�

using namespace std;

//p<int, string> map1;
void func3()
{
	map<int, string> map1;
	
	map1[1] = "hello";	
	map1[3] = "world";
		
	map <int, string>::iterator map_iter=map1.begin();  //����һ��������   

	int key = map_iter->first;             //ȡ��key
	string value = map_iter->second;       //ȡ��value


	cout << "����Ԫ��֮ǰ�ĳ��ȣ�" << map1.size() << endl;
	map1.insert(map<int, string>::value_type(2, "MyNameIsDongGuoZheng"));//����Ԫ��
	cout << "����Ԫ��֮��ĳ��ȣ�" << map1.size() << endl;

	string str = map1[2];                  //����keyȡ��value
	cout << "����ڶ��仰" << endl;
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i]  ;
	}
	cout << endl;

	map1.erase(3);                         //����keyɾ��value
	cout << "ɾ��������Ԫ��֮��ĳ��ȣ�" << map1.size() << endl;

	

	map1.clear();                      //�������Ԫ��
	cout << "�������Ԫ��֮��ĳ��ȣ�" << map1.size() << endl;


	map1.empty();                       //�жϿ�
	

}
