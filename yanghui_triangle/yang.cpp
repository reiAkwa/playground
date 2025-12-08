#include "yang.h"
#include <cstdio>

void PrintBlank(int num)
{
    // 打印 num 个空格（注意是每行前导空格）
    for (int i = 0; i < num; i++)
        printf(" ");
}

void PrintCombine(int n)
{
    long long c = 1;  
    // 直接从 C(n-1,0) 开始打印
    // 第 n 行其实是 C(n-1,0) 到 C(n-1,n-1)

    for (int i = 0; i < n; i++)
    {
        // 打印当前组合数
        printf("%lld", c);

        // 计算下一个组合数 C(n-1, i+1)
        // c = c * (n-1-i) / (i+1)
        if (i < n-1)
        {
            c = c * (n - 1 - i) / (i + 1);
            printf(" "); // 数字之间的空格
        }
    }
}
