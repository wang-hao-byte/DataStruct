#include"Dlist.h"
ListNode* ListCreat()
{
	ListNode* head;
	head->next = head;
	head->prev = head;
	return head;
}
void ListDestory(ListNode* phead)
{
	free(phead);
}
void ListPrint(ListNode* phead)
{
	while (phead->next != phead && phead->prev != phead)
	{
		printf("%d ", phead->x);
	}
}
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->next = newNode;
	newNode->prev = newNode;
	newNode->x = x;
	return newNode;
}
void ListPushBack(ListNode* phead, LTDataType x)
{
	ListNode* newNode = BuyListNode(x);
	newNode->prev = phead->prev;
	newNode->next = phead;
}
void ListPushBack(ListNode* phead)
{
	if (phead->next != phead && phead->prev != phead)
	{
		return phead;
	}
	else
	{
		ListNode* TmpNode = phead->next->next;
		free(phead->next);
		TmpNode->next = phead;
	}
}