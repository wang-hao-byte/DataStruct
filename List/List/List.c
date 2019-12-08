#include"List.h"
void SlistPrint(SlistNode *Plist)
{
	while (Plist->next)
	{
		printf("%d->", Plist->data);
		Plist = Plist->next;
	}
	printf("NULL\n");
}
SlistNode* SlistBuyNode(SLTdataType x)
{
	SlistNode * SlistnewNode = NULL;
	SlistnewNode = (SlistNode*)malloc(sizeof(SlistNode));
	SlistnewNode->data = x;
	SlistnewNode->next = NULL;
	return SlistnewNode;
}
void SlistPushBack(SlistNode **pPlist, SLTdataType x)//β��
{
	SlistNode *SlistnewNode = SlistBuyNode(x);
	SlistNode *tail = *pPlist;
	if (*pPlist == NULL)
	{
		*pPlist = SlistnewNode;
	}
	while (tail)
	{
		tail->next;
	}
	tail->next = SlistnewNode;
}
void SlistPushFront(SlistNode **pPlist, SLTdataType x)//ͷ��
{
	SlistNode * SlistnewNode = SlistBuyNode(x);
	if (*pPlist == NULL)
	{
		SlistnewNode = *pPlist;
	}
	else
	{
		SlistnewNode->next = *pPlist;
	}
}
void SlistPopBack(SlistNode *pPlist)//βɾ
{
	//1  0  more
	if (pPlist == NULL)
	{
		return NULL;
	}
	else if (pPlist->next == NULL)
	{
		free(pPlist);
	}
	else if (pPlist->next != NULL)
	{
		SlistNode *tail = pPlist;
		while (tail->next)
		{
			tail = tail->next;
		}
		free(tail);
	}
}
void SlistPopfront(SlistNode *pPlist)//ͷɾ
{
	if (pPlist == NULL || pPlist->next == NULL)
	{
		free(pPlist);
	}
	else
	{
		SlistNode *front = pPlist->next;
		free(pPlist);
	}
}
void SlistFind(SlistNode *pPlist, SLTdataType x)
{
	//��������
}
void SlistRevise(SlistNode *pPlist, SLTdataType x)
{
	//�ҵ��滻
}
