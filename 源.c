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
enum color {
	red=4,blue,grey,black,green
}; 
const int MAX = 3;
const int MIN = 0;
enum color dd;
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
    int i;

    int ss[] = { 100,200,300 };
    int* p;
    p = ss;
    for (i = 0; i < MAX; i++)
    {
        printf("ss�ĵ�ַ%p\n", ss);
        printf("ss��ֵ%d\n", *p);
        p++;
    }
    return 0;












}
