// 566. Reshape the Matrix.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	int row=nums.size()-1;int col=nums[0].size()-1;
	int totalNum=row*col;
	if (totalNum!=r*c)
	{
		return nums;
	}
	vector<vector<int>> res;
	for (int i=0;i<totalNum;i++)
	{
		res[i/c][i%c]=nums[i/col][i%col];
	}
	return res;

}
int _tmain(int argc, _TCHAR* argv[])
{
	vector<vector<int>> nums;

	return 0;
}

