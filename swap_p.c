#include <stdio.h>
void swap(int *pa,int *pb);
int main()
{
	int a=0;
	int b=9;
	swap(&a,&b);
	printf("a=%d \nb=%d\n",a,b);
	return 0;
}
void swap(int *pa,int *pb)
{
	int t=*pa;
	*pa =*pb;
	*pb=t;
}