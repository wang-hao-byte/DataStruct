#include"SeqList.h"
int main()
{
	SeqList s;
	SeqListInit(&s);
	SeqListDestory(&s);
	SeqListPrint(&s);
	CheckCapacity(&s);
	SLDataType x = 10;
	SeqListPushBack(&s, x);
	return 0;
}
