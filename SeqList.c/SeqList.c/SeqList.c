#include"SeqList.h"
void SeqListInit(SeqList *ps)//初始化顺序表
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
void SeqListPrint(SeqList* ps)//顺序表的打印
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
		//空间如果等于0，初始化为4，不等于则扩2倍
		ps->array = (int *)realloc(ps->array, newcapicity*sizeof(SeqList));
		//注意relloc的使用，参数为原数组，扩容后数组的大小（大小为字节数）
		ps->capicity = newcapicity;
	}
}
void SeqListJud(SeqList *ps)
{
	if (ps->capicity == ps->size)
	{
		int newcapicity = ps->capicity == 0 ? 4 : 2 * ps->capicity;
		//空间如果等于0，初始化为4，不等于则扩2倍
		ps->array = (int *)realloc(ps->array, newcapicity*sizeof(SeqList));
		//注意relloc的使用，参数为原数组，扩容后数组的大小（大小为字节数）
	}
}
//尾插法
void SeqListPushBack(SeqList *ps, SLDataType x)
{
	assert(ps);
	SeqListJud(ps);
	ps->array[ps->size] = x;
}