#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
	{
		int data;
		struct LNode* next;	
	}LNode,*LinkList;
LinkList Create();
void Traverse(LinkList L);
int main(int argc, char const *argv[])
{
	LinkList L=Create();
	Traverse(L);
	return 0;
}
LinkList Create(){
	// LNode* head,*trail;
	LinkList head,trail;
	head=(LinkList)malloc(sizeof(LNode));
	head->next=NULL;//头指针初始化
	trail=head;//用于保存链表的尾指针
	int value;
	while(1){
		scanf("%d",&value);
		if(value==-1)break;
		LinkList newNode=(LinkList)malloc(sizeof(LNode));
		newNode->data=value;
		newNode->next=NULL;
		trail->next=newNode;//将新节点添加到链表
		trail=newNode;//更新尾节点
	}
	return head;
}
void Traverse ( LinkList L ){
	LinkList p=L->next;//跳过头节点
	while(p->next)
	{
		printf("%d %#x \n",p->data,p);
		p=p->next;
	}
	printf("\n");
}