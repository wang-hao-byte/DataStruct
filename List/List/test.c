#include"List.h"
void TestSlist()
{
	SlistNode *Plist = NULL;
	SlistPushBack(&Plist, 1);
	SlistPrint(Plist);
	SlistPopBack(&Plist);
}
int main()
{
	TestSlist();
	return 0;
}