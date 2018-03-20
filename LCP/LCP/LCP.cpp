// LCP.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

	if(strs.size()==0||strs[0]=="") return "";
	int index=0;
	for (int j=0;j<strs[0].length();j++)
	{
		int i=1;
		for(;i<strs.size()&&strs[i].size()>j;i++)
		{
			if (strs[0][j]!=strs[i][j])
			{
				return strs[0].substr(0,index);
			}

		}
		if(i==strs.size())index++;

	}
	return strs[0].substr(0,index);
}





int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> strs;
	//strs.push_back("long");
	//strs.push_back("lonely");
	//strs.push_back("longest");
	cout<<longestCommonPrefix(strs)<<endl;
	return 0;
}

