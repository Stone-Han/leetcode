// 21. Merge Two Sorted Lists.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (l1==NULL){return l2;}
	else if(l2==NULL) return l1;     //1

	ListNode *r=NULL;   //2
	if (l1->val<l2->val) {r=l1;l1=l1->next;}    //3
	else {r=l2;l2=l2->next;}

	ListNode* head=r;

	while (l1 && l2)    //4
	{
		if (l1->val<l2->val)
		{
			r->next=l1;
			r=r->next;  l1=l1->next;	
		}
		else
		{
			r->next=l2; 
			r=r->next; l2=l2->next;
		}
	}

	if(l1) r->next=l1;
	else r->next=l2;

	return head;



}


struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL){}
};

int _tmain(int argc, _TCHAR* argv[])
{
	ListNode *l1;

	
	return 0;
}

