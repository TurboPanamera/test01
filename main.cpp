#include<stdio.h>
#include"TB_Login.h"
#include"TB_Node.h"
#include"TBG_GameInterface.h"

int main()
{
	NODE_T* userhead = (NODE_T*)malloc(sizeof(NODE_T));//初始化用户链表头
	memset(userhead, 0x0, sizeof(NODE_T));
	InitUser(userhead);
	LoginUI(userhead);
	//GameInterfaceUI(userhead);

	return 0;
}
