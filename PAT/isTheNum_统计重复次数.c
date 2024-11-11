
/*

while (num > 0) {
        int digit = num % 10;  // 提取最后一位数字
        digitCount[digit]++;   // 记录该数字的出现次数
        if (digitCount[digit] > 1) {
            return 1;  // 如果有数字出现次数超过1次，返回1
        }
        num /= 10;  // 去掉最后一位数字
    }

 */