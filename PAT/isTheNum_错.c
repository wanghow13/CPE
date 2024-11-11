#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N )
{   
   // int digit;
    int num=N;
    int sN=sqrt(N);
    if(sN*sN!=N) return 0;
    //else{
        int digitCount[10]={0};
        while(N>0){    
         /*"错误原因：N为const->死循环
                    对num进行/10，N未变"*/
           //int digit=N%10;
         /*"错误原因：int digitCount[10]={0};须在循环外定义，否则每次循环重复数计数归零"*/
           //int digit=N%10;

            int digit=num%10;
            digitCount[digit]++;
            if(digitCount[digit]>1){
                return 1;
            }
            //digit/=10;
            num/=10;
      //  }
    }
    return 0;
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
