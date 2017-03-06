// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "KaPian.h"

using namespace std;
__int16 K_Data[6][15] =
{
	//  {1,2,3,4,5,6,7,8,9,10,11,12,13,x, d } m0


	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//hei
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//hong
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//mei
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//fang
	{ 0,0,0,0,0,0,0,0,0,0 ,0 ,0 ,0 ,14,0 },	//x
	{ 0,0,0,0,0,0,0,0,0,0 ,0 ,0 ,0 ,0 ,15 },	//d
};
string TypeToString[] = { "HeiTao","HongTao","MeiHua","FangPian","XiaoWang","DaWang" };
string ValueToString[] = { "Jian","Er","San","Si","Wu","Liu","Qi","Ba","Jiu","Shi","ShiYi","ShiEr","ShiSan","XiaoW","DaW" };


int main()
{
	KaPian ddz;
	string all[54];
	string player1[18] , player2[18] , player3[18];

	int x = 0;							//  all������±�

	for (int i = 0; i < 6; i++)   
	{
		for (int j = 0; j < 15; j++)
		{
			if (K_Data[i][j] == 0)
			continue;
			K_Type a = static_cast<K_Type>(i);
			K_Value b = static_cast<K_Value>(j);
			ddz.SetType(a);
			ddz.SetValue(b);
			all[x] = ddz.GetName();					//��all������
			++x;
		}
	}
	 
	//ȫ������
	/*for (int i = 0; i < 54; i++)
	cout << all[i] << endl;*/

	
	



	//����
	int a_p = 0;					//player1�����±�
	int b_p = 0;					//player2�����±�
	int c_p = 0;					//player3�����±�
		for (int i = 0; i< 54; i++)
		{	
			int who = i % 3;
			switch (who)
			{	
				case 0:
				{player1[a_p] = all[i];++a_p;}break;
				case 1:
				{player2[b_p] = all[i];++b_p;}	break;
				case 2:
				{player3[c_p] = all[i];++c_p;}	break;
			}
		}
	
		//չʾ

		show(player1,18,"һ");
		show(player2,18,"��");
		show(player3,18,"��");

		//����
		string HEI[13];
		string HONG[13];
		string MEI[13];
		string FANG[13];
		string GUI[2];
		for (int i = 0; i < 13; i++)
		{
		HEI[i]=all[i];
		}
		
		for (int i = 0; i < 13; i++)
		{
			HONG[i] = all[ i+13];
		}
		
		for (int i = 0; i < 13; i++)
		{
			MEI[i] = all[i + 26];
		}
		
		for (int i = 0; i < 13; i++)
		{
			FANG[i] = all[i + 39];
		}
		
		show(HEI, 13, "����");
		show(HONG, 13, "����");
		show(MEI, 13, "÷��");
		show(FANG, 13, "÷��");
		cout << all[53] << endl;
//	show(GUI, 2, "��");



	/*	for (int i = 0; i < 26; i++)
		{
		HONG[i]=all[26 + i];
		}
		for (int i = 0; i < 39; i++)
		{
		MEI[i] = all[39 + i];
		}
		for (int i = 0; i < 52; i++)
		{
		FANG[i] = all[52 + i];
		}*/
		//	
		//	show(HONG, "����");
		//	show(MEI , "÷��");
		//	show(MEI, "��Ƭ");
		//show(FANG , "A");


			return 0;
}

	
    

