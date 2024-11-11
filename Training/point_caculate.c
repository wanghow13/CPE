#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ac[]={0,1,2,3,4,5,6,7,8,9,};
	char *p=ac;
	printf("p=  %p\n",p);
	printf("p+1=%p\n",p+1);//+1 b:char为1个字节
	// *p->ac[0];
	// *(p+1)->ac[0];
	printf("*p    =%d\n",*p);
	printf("*(p+1)=%d\n",*(p+1));	
	int ai[]={0,1,2,3,4,5,6,7,8,9,};
	int *q=ai;
	printf("q=  %p\n",q);
	printf("q+1=%p\n",q+1);//+4 b:int为4个字节
	printf("*(q+1)=%d\n",*(q+1));	
	return 0;
}    