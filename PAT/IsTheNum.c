// #include <stdio.h>
// #include <math.h>

// int IsTheNumber ( const int N );

// int main()
// {
//     //int n1, n2, i, cnt;
//     int N;
//     scanf("%d",&N);
    // scanf("%d %d", &n1, &n2);
    // cnt = 0;
    // for ( i=n1; i<=n2; i++ ) {
    //     if ( IsTheNumber(i) )
    //         cnt++;
    // }
    // printf("cnt = %d\n", cnt);
    // 
//     printf("%d",IsTheNumber(N));
//     return 0;
// }

// int IsTheNumber ( const int N ){
//     int i,res;
//     res=0;
//     for(i=1;i<=N/2;i++){
//         if (pow(i,2)==N)
//         {
//             int b,s,g;
//             b=N%100;
//             s=N%10;
//             g=N%1;

//         }
//     }
//     return res;
// }
// 
// 
// 

#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N) {
    // 判断是否是完全平方数
    int sqrtN = (int)sqrt(N);  // 计算平方根
    if (sqrtN * sqrtN != N) {
        return 0;  // 不是完全平方数
    }

    // 判断是否有至少两位数字相同
    int digitCount[10] = {0};  // 数字出现次数的统计数组
    int num = N;

    while (num > 0) {
        int digit = num % 10;  // 提取最后一位数字
        digitCount[digit]++;   // 记录该数字的出现次数
        if (digitCount[digit] > 1) {
            return 1;  // 如果有数字出现次数超过1次，返回1
        }
        num /= 10;  // 去掉最后一位数字
    }

    return 0;  // 没有重复数字，不满足条件
}

int main() {
    int n1, n2, i, cnt = 0;
    
    // 读入范围
    scanf("%d %d", &n1, &n2);

    // 遍历范围内的所有数，检查是否满足条件
    for (i = n1; i <= n2; i++) {
        if (IsTheNumber(i)) {
            cnt++;
        }
    }

    // 输出结果
    printf("cnt = %d\n", cnt);

    return 0;
}
