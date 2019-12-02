#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType  array[N];//定长的数组
//	size_t size;
//}SeqList;
typedef struct SeqList
{
	int size;//有效数据的个数
	SLDataType *array;//指向空间的地址
	int capicity;//空间容量的大小
}SeqList;
void SeqListInit(SeqList *ps);
void SeqListDestory(SeqList *ps);
void SeqListPrint(SeqList *ps);
void CheckCapacity(SeqList* ps);
void SeqListJud(SeqList *ps);
void SeqListPushBack(SeqList *ps, SLDataType x);
