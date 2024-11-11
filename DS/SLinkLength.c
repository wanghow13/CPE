#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;
LinkList Create();
int GetLength(LinkList L);
int main(int argc, char const *argv[])
{   
    LinkList L=Create();
    printf("%d",GetLength(L));
    return 0;
}
LinkList Create(){
    LNode *head,*trail;
    head=(LinkList)malloc(sizeof(LNode));
    head->next=NULL;
    trail=head;
    while (1)
    {
        int value;
        scanf("%d",&value);
        if (value==-1)break;
        LinkList newNode=(LinkList)malloc(sizeof(LNode));
        newNode->data=value;
        newNode->next=NULL;
        trail->next=newNode;
        trail=newNode;
    }
    return head;
}
int GetLength(LinkList L){
    LinkList p=L;
    int length=0;
    while (p->next)
    {
        length++;
        p=p->next;
    }
    return length;
}
