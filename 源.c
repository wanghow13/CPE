#include <stdio.h>

int main()
{
    int price = 0;

    printf("�������Ԫ����");
    scanf_s("%d", &price);

    int change = 100 - price;

    printf("%d\n", change);
   kk();

    return 0;
}
extern int kk()
{
    int a;
    int b;

   
    scanf_s("%d %d",&a,&b);
    if(a>b)
    {
        printf("�������д����%d",a);

    }
    else
    {
        printf("�������д����%d",b);

    }


} 
