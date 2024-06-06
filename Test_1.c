#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;                                  // 用于计数总共有多少个满足条件的三位数
    printf("有1,2,3,4个数字，能组成互不相同的无重复数字的三位数分别是：\n");
    for (int i = 1; i <= 4; ++i) {                  // 第一个数字
        for (int j = 1; j <= 4; ++j) {              // 第二个数字
            for (int k = 1; k <= 4; ++k) {          // 第三个数字
                if (i != j && j != k && i != k) {   // 确保三个数字都不相同
                    printf("%d%d%d ", i, j, k);     // 输出当前满足条件的三位数
                    count++;                        // 增加计数
                    sum += 100*i+10*j+k;
                    // sum = sum + 100*i+10*j+k;
                }
            }
        }
    }
    printf("\n总共有 %d 个满足条件的三位数。\n", count); // 输出总数
    printf("\n满足条件的数字和为: %d.\n", sum); // print out the sum
    return 0;
}
//可以再计算一下满足条件的数字和为多少吗
