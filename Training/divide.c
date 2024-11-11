#include <stdio.h>
/**
	@return 如果除法成功返回1；否则返回0；	
**/
int divide(double a,int b,double *result);
int main(int argc, char const *argv[])
{
	double a=5.0;
	int b=2;
	double c;
	if(divide(a,b,&c)){
		printf("%f/%d=%f\n",a,b,c );
	}
	return 0;
}
int divide(double a,int b,double *result){
	int ret=1;
	if(b==0)ret=0;
	else{
		*result=a/b;
	}
	return ret;
}