#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType  array[N];//����������
//	size_t size;
//}SeqList;
typedef struct SeqList
{
	int size;//��Ч���ݵĸ���
	SLDataType *array;//ָ��ռ�ĵ�ַ
	int capicity;//�ռ������Ĵ�С
}SeqList;
void SeqListInit(SeqList *ps);
void SeqListDestory(SeqList *ps);
void SeqListPrint(SeqList *ps);
void CheckCapacity(SeqList* ps);
void SeqListJud(SeqList *ps);
void SeqListPushBack(SeqList *ps, SLDataType x);
