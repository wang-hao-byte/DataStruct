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
void SlistPushBack(SlistNode **pPlist, SLTdataType x);//Î²²å
void SlistPushFront(SlistNode **pPlist, SLTdataType x); //Í·²å
void SlistPopBack(SlistNode **pPlist);//Î²É¾
void SlistFind(SlistNode *pPlist, SLTdataType x);
void SlistRevise(SlistNode *pPlist, SLTdataType x);