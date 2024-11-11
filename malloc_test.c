// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int number;
// 	int* a;
// 	int i;
// 	//printf("输入数量：\n");
// 	scanf("%d",&number);
// 	a=(int*)malloc(number*sizeof(int));
// 	for(i=0;i<number;i++){
// 		scanf("%d",&a[i]);
// 	}
// 	for(i=number-1;i>=0;i--){
// 		printf("%d\n",a[i]);
// 	}
// 	free(a);
// 	return 0;
// }

#include <stdio.h>
int main()
{
	/* code */
	char *s="Hello World";
	// s[0]='B';
	char *s2="Hello World";
	printf("s=%p",s);
	printf("s2=%p",s2);
	printf("Here!s[0]=%c\n",s[0]);
	
	return 0;
}