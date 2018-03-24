// 20. Valid Parentheses.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isMatch(char a,char b)
{
	switch (a)
	{
		case '(':
			if (b==')') {return true;}
			else return false;
		case '{':
			if (b=='}') {return true;}
			else return false;
		case '[':
			if (b==']') {return true;}
			else return false;
		default:
			return false;
	}
}
bool isValid(string s)
{
	if (s.length()<2)
	{
		return false;
	}
	stack<char> st;
	st.push(s[0]);
	int i=1;
	while(i<s.length())
	{
		if (!st.empty())
		{
			if(isMatch(st.top(),s[i]))
				st.pop();
			else {st.push(s[i]);}
		}
		else {st.push(s[i]);}
		i++;
	}
	if (st.empty())
	{
		return true;
	}
	else return false;

}

int _tmain(int argc, _TCHAR* argv[])
{
	if (isValid("({)"))
	{
		cout<<"valid"<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}

	return 0;
}
//一开始的代码，只能完成相邻匹配
//bool isValid(string s)
//{
//	if (s.length()<2)
//	{
//		return false;
//	}
//	int i=0;int j=i+1;
//	while (j<s.length())
//	{
//		if (!isMatch(s[i],s[j]))
//		{
//			return false;
//		}
//		i+=2;j+=2;		
//	}
//	if (j==s.length()+1)
//	{
//		return true;
//	}
//	else return false;
//
//}