//#include <stdio.h>
//enum DAY
//{
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//}day;
//int main()
//{
//	enum color {
//		red = 1, blue, black, white, green
//	};
//	//enum color myc2;
//
//
//	//printf("%s",red);
//
	//for (day = MON; day <= SUN; day++)
	//{
	//	printf("aaaaaaa%d\n", day);

 //  }
 //   enum day
 //   {
 //       saturday,
 //       sunday,
 //       monday,
 //       tuesday,
 //       wednesday,
 //       thursday,
 //       friday
 //   } workday;

 //   int a = 1;
 //   enum day weekend;
 //   weekend = (enum day)a;  //����ת��
 //   //weekend = a; //����
 //   printf("weekend:%d", weekend);
 //   return 0;
//}
//#include <stdio.h>

//enum DAY
//{
//    MON = 1, TUE, WED, THU, FRI, SAT, SUN
//} day;
//int main()
//{
//    // ����ö��Ԫ��
//    for (day = MON; day <= SUN; day++) {
//        printf("ö��Ԫ�أ�%d \n", day);
//    }
//}
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

//enum color {
//	red=4,blue,grey,black,green
//}; 
//const int MAX = 3;
//const int MIN = 0;
//enum color dd;
//void sb(int* se)
//{
//    *se = time();
//
//}
int main()
{
    /*printf("��������ϲ������ɫ");
	scanf_s("%d", &dd);
	switch(dd)
    {
    case red:
        printf("��ϲ������ɫ�Ǻ�ɫ");
        break;
    case green:
        printf("��ϲ������ɫ����ɫ");
        break;
    case blue:
        printf("��ϲ������ɫ����ɫ");
        break;
    default:
        printf("��û��ѡ����ϲ������ɫ");
    }

    return 0;*/
    //int a=11;
    //int* p;
    //char* s;
    //int sq;
    //p = &a;
    //s =11;
    //printf("a��ָ��Ϊ%p\n", p);
    //printf("a��ָ��Ϊ%p\n", s);
    //int  var = 20;   /* ʵ�ʱ��������� */
    //int* ip;        /* ָ����������� */

    //ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */

    //printf("var �����ĵ�ַ: %p\n", &var);

    ///* ��ָ������д洢�ĵ�ַ */
    //printf("ip �����洢�ĵ�ַ: %p\n", ip);

    ///* ʹ��ָ�����ֵ */
    //printf("*ip ������ֵ: %d\n", *ip);
    //int* ptr = NULL;

    //printf("ptr �ĵ�ַ�� %p\n", ptr);

    //return 0;
   /* int i=10;
    int* p;
    int** p2;
    p = &i;
    p2 = &p;
    printf("i��ֵΪ%d\n", i);
    printf("*pΪ%d\n",* p);
    printf("i�ĵ�ַΪ%p\n", p);
    printf("p�ĵ�ַΪ%p\n", p2);
    printf("i��ֵΪ%d", **p2);
    */
   
   /*
    int f = 7;
    sb(&f);*/
    /*int i;
    int  j;
    int x;
    for (i = 0; i < 6; i++)
    {
        
		for (int j = 0; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (x = 1; x < i*2;x++)
        {
            printf("*");
        }
        printf("\n");
    }return 0;*/

   		//char ss[10]="woshijrydsb";
   		//char se[10]="jrswoshidsb";
   		//strcpy(ss,se);
   		//printf("%d",ss) ;



        FILE* fp = NULL;

        fp = fopen("D:/tmp/test.txt", "w+");
        fprintf(fp, "This is testing for fprintf...\n");
        fputs("This is testing for fputs...\n", fp);
        fclose(fp);
    
    



}
