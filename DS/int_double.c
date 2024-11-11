#include <stdio.h>
int main(){
    double m;
    int temp;
    int cm;
   int inch;
    double foot;
    scanf("%d",&cm);
    m=cm/100;
    foot=m/0.3046;
    temp=foot;
    inch=(foot-temp)*12;
    printf("%d %d",temp,inch);
    return 0;
}