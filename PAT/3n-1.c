#include <stdio.h>

int getStep(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",getStep(num));
}
int getStep(int num){
    if(num==1) return 1;
    int cnt=0;
    while(num!=1){
        if(num%2==0){
            num/=2;
            cnt++; }
        else{
            //num=3*num+1;
            num=(3*num+1)/2;
            cnt++;
        }
        
    }return cnt;
}