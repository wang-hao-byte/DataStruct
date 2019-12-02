#include"SeqList.h"
void SeqListInit(SeqList *ps)//��ʼ��˳���
{
	assert(ps);
	ps->array = NULL;
	ps->capicity = 0;
	ps->size = 0;
}
void SeqListDestory(SeqList *ps)
{
	assert(ps);
	free(ps->array);
	ps->capicity = 0;
	ps->size = 0;
}
void SeqListPrint(SeqList* ps)//˳���Ĵ�ӡ
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}
void CheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->capicity == ps->size)
	{
		int newcapicity = ps->capicity == 0 ? 4 : 2 * ps->capicity;
		//�ռ��������0����ʼ��Ϊ4������������2��
		ps->array = (int *)realloc(ps->array, newcapicity*sizeof(SeqList));
		//ע��relloc��ʹ�ã�����Ϊԭ���飬���ݺ�����Ĵ�С����СΪ�ֽ�����
		ps->capicity = newcapicity;
	}
}
void SeqListJud(SeqList *ps)
{
	if (ps->capicity == ps->size)
	{
		int newcapicity = ps->capicity == 0 ? 4 : 2 * ps->capicity;
		//�ռ��������0����ʼ��Ϊ4������������2��
		ps->array = (int *)realloc(ps->array, newcapicity*sizeof(SeqList));
		//ע��relloc��ʹ�ã�����Ϊԭ���飬���ݺ�����Ĵ�С����СΪ�ֽ�����
	}
}
//β�巨
void SeqListPushBack(SeqList *ps, SLDataType x)
{
	assert(ps);
	SeqListJud(ps);
	ps->array[ps->size] = x;
}