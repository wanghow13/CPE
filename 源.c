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
enum color dd;
int main()
{
    printf("��������ϲ������ɫ");
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

    return 0;
}
