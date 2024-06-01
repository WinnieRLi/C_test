#include <stdio.h>

int main() {
    int count = 0;                                  // 用于计数总共有多少个满足条件的三位数
    printf("有1,2,3,4个数字，能组成互不相同的无重复数字的三位数分别是：\n");
    for (int i = 1; i <= 4; ++i) {                  // 第一个数字
        for (int j = 1; j <= 4; ++j) {              // 第二个数字
            for (int k = 1; k <= 4; ++k) {          // 第三个数字
                if (i != j && j != k && i != k) {   // 确保三个数字都不相同
                    printf("%d%d%d ", i, j, k);     // 输出当前满足条件的三位数
                    count++;                        // 增加计数
                }
            }
        }
    }
    printf("\n总共有 %d 个满足条件的三位数。\n", count); // 输出总数
    return 0;
}
