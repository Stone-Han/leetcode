// 13roman.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;

int roman(char c)
{
	int val=0;
	switch (c)
	{
	case 'I':
		val=1;
		break;
	case 'V':
		val=5;
		break;
	case 'X':
		val=10;
		break;
	case 'L':
		val=50;
		break;
	case 'C':
		val=100;
		break;
	case 'D':
		val=500;
		break;
	case 'M':
		val=1000;
		break;
	default:
		val=0;
	}
	return val;
}
int romanToInt(string s) {
	int i=0;
	int val=0;

	while (i+1<s.length())
	{
		int current=roman(s[i]);
		int next=roman(s[i+1]);
		
		if (current<next)
		{
			val-=current;
		}
		else
		{
			val+=current;
		}
		i++;
	}
	val+=roman(s[i]);

	return val;

}

int _tmain(int argc, _TCHAR* argv[])
{


	cout<<romanToInt("DC")<<endl;
	return 0;
}

