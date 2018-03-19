// 9huiwen.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
//#include <math.h>
using namespace std;
int length(int x)
{
	int i=0;
	while(x!=0)
	{
		x=x/10;
		i++;
	}
	return i;
}
double pow(int a,int b)
{
	int re=1;
	for(int i=0;i<b;i++)
	{
		re=re*a;
	}
	return re;
}
bool isPalindrome(int x) {
	// Special cases:
	// As discussed above, when x < 0, x is not a palindrome.
	// Also if the last digit of the number is 0, in order to be a palindrome, 
	// the first digit of the number also needs to be 0.
	// Only 0 satisfy this property.
	if(x < 0 ) {
		return false;
	}

	int revertedNumber = 0;
	while(x > revertedNumber) {
		revertedNumber = revertedNumber * 10 + x % 10;
		x /= 10;
	}

	// When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
	// For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123, 
	// since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
	return x == revertedNumber || x == revertedNumber/10;
}





int _tmain(int argc, _TCHAR* argv[])
{
	//cout<<pow(10,length(1000021)-1)<<endl;
	if(isPalindrome(10))
		cout<<"is palindrome"<<endl;
	else
		cout<<"not "<<endl;
	return 0;
}

