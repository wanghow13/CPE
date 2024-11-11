/**
 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

	输入格式：
	每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10 
	100

	输出格式：
	在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

	输入样例：
	1234567890987654321123456789
	输出样例：
	yi san wu 
 // **/
// 																	 #include <stdio.h>

// 																	int main()
// 																	{
// 																	    int n;
// 																	    scanf("%d",&n);
// 																	    return 0;
// 																	}

// 																	showNumByPY(int n){
// 																	    for(n){
// 																	        int n[9]={1,2,3,4,5,6,7,8,9};
// 																	        int ins[]={3,}
// 																	        char c[9]={'yi','er'}
// 																	    }
// 																	}

#include <stdio.h>
#include <string.h>

void numberToPinyin(int num, char* pinyin) {
    switch (num) {
        case 0: strcpy(pinyin, "ling"); break;
        case 1: strcpy(pinyin, "yi"); break;
        case 2: strcpy(pinyin, "er"); break;
        case 3: strcpy(pinyin, "san"); break;
        case 4: strcpy(pinyin, "si"); break;
        case 5: strcpy(pinyin, "wu"); break;
        case 6: strcpy(pinyin, "liu"); break;
        case 7: strcpy(pinyin, "qi"); break;
        case 8: strcpy(pinyin, "ba"); break;
        case 9: strcpy(pinyin, "jiu"); break;
    }
}

int main() {
    char n[101];
    scanf("%s", n)

    int sum = 0;
    // 计算各位数字之和
    for (int i = 0; n[i] != '\0'; ++i) {
        sum += n[i] - '0';
    }

    // 将和转换为字符串
    char sumStr[10];
    sprintf(sumStr, "%d", sum);//将sum转化为字符串并存储到sumStr中
    
    // 输出每位数字的拼音
    for (int i = 0; sumStr[i] != '\0'; ++i) {
        char pinyin[5];
        numberToPinyin(sumStr[i] - '0', pinyin);
        printf("%s", pinyin);
        if (sumStr[i + 1] != '\0') {
            printf(" ");
        }
    }

    return 0;
}
