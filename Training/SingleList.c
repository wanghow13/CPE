#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node{
	int Data;
	PtrToNode Next;
};
typedef PtrToNode List;

int FactorialSum(List L);
int Factorial(int n);
int main()
{
	/* code */
	int N,i;
	List L,p;
	scanf("%d",&N);
	L=NULL;
	for (i = 0; i < N; i++)
	{
		p=(List)malloc(sizeof(struct Node));
		scanf("%d",&p->Data);//
		p->Next=L;
		L=p;
	}
	printf("%d\n",FactorialSum(L) );
	return 0;
}

int FactorialSum(List L){
	int Sum=1;
	int *s=Sum;
	/**
	 *while(L->Next!=NULL){
		*s+= Factorial(L->Data);
		L=L->Next;
	}
	**/
	for (int)
	return Sum;
}
int Factorial(int n){
	int i=1;
	int jSum=1;
	if(n==0||n==1) return 1;
	if(n>1)
		while(i<=n){
			jSum*=i;
			i++;
		}
		return jSum;
}