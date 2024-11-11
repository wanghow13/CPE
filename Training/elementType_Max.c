#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Max( ElementType S[], int N )
{
    ElementType Max;
    for(int i=0;i<N;i++){
        if(S[i]>Max){
            Max=S[i];
        }
    }
    return Max;
}