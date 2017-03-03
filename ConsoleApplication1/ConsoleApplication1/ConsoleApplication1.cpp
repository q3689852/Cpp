// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "KaPian.h"

using namespace std;
__int16 K_Data[6][15] =
{
	//  {1,2,3,4,5,6,7,8,9,10,11,12,13,x, d }

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
	string player1[18];
	string player2[18];
	string plarer3[18];
	 int i, j;
	int x = 0;
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
			
			all[x] = ddz.GetName();
			++x;
		}
	}
	
	cout << endl << "玩家1的牌" << endl << endl;
	for (int i = 0; i < 18; i++)
	{
		player1[i] = all[0 + 3 * i];
		cout << player1[i] << "\t";
		if (i % 6 >4)
		{
			cout << endl;
		}
	}
	cout << endl << endl << "玩家2的牌" << endl << endl;
	for (int i = 0; i < 18; i++)
	{
		player1[i] = all[1 + 3 * i];
		cout << player1[i] << "\t";
		if (i % 6 >4)
		{
			cout << endl;
		}
	}
	cout << endl << endl << "玩家3的牌" << endl << endl;
	for (int i = 0; i < 18; i++)
	{
		player1[i] = all[2 + 3 * i];
		cout << player1[i] << "\t";
		if (i % 6 >4)
		{
			cout << endl;
		}
	}




	//int a_p = 0;	//玩家1的数组下标
	//int b_p = 0;	//玩家2的数组下标
	//int c_p = 0;	//玩家3的数组下标
	//for (int i = 0; i< 54; i++)
	//{
	//	int who = i % 3;
	//	switch (who)
	//	{
	//	case 0:
	//	{
	//		player1[a_p] = all[i];
	//		++a_p;
	//	}
	//	break;
	//	case 1:
	//	{
	//		player2[b_p] = all[i];
	//		++a_p;
	//	}	
	//	break;
	//	case 2:
	//	{
	//		plarer3[c_p] = all[i];
	//		++a_p;
	//	}	
	//	break;
	//	}
	//}
	//
	//cout << player1[1] << endl;
	//cout << player1[2] << endl;
	//cout << player1[3] << endl;
	//
	return 0;
}

	
    

