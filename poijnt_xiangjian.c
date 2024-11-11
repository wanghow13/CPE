#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ac[]={0,1,2,3,4,5,6,7,8,9,};
	char *p=ac;
	char *p1=&ac[5];
	printf("p=  %p\n",p);
	printf("p+1=%p\n",p+1);//+1 b:char为1个字节
	printf("p1-p=%d\n",p1-p);
	int ai[]={0,1,2,3,4,5,6,7,8,9,};
	int *q=ai;
	int *q1=&ai[6 ];
	printf("q-q1=%d\n",q1-q);
	printf("q=  %p\n",q);
	printf("q+1=%p\n",q+1);//+4 b:int为4个字节
	printf("*(q+1)=%d\n",*(q+1));	
	return 0;
}    