#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLTdataType;
typedef struct SlistNode
{
	SLTdataType data;
	struct SlistNode *next;
}SlistNode;
void SlistPrint(SlistNode *Plist);
SlistNode* SlistBuyNode(SLTdataType x);
void SlistPushBack(SlistNode **pPlist, SLTdataType x);//β��
void SlistPushFront(SlistNode **pPlist, SLTdataType x); //ͷ��
void SlistPopBack(SlistNode **pPlist);//βɾ
void SlistFind(SlistNode *pPlist, SLTdataType x);
void SlistRevise(SlistNode *pPlist, SLTdataType x);