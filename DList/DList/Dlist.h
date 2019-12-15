#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType x;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;
ListNode* ListCreat();
void ListPrint(ListNode* phead);
ListNode* BuyListNode(LTDataType x);
void ListPushBack(ListNode* phead, LTDataType x);
void ListPushBack(ListNode* phead);
void ListPushBack(ListNode* phead);