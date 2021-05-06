#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n, a[101];
    for (i = 1; i <= 100; i++)
        a[i] = i;           //给数组赋值1-100
        a[1] = 0;           //为非素数进行标记0；输出不为0的素数
    for (i = 2; i < sqrt(100); i++) //为除数划定范围
        for (j = i + 1; j <= 100; j++)
        {
            if (a[i] != 0 && a[j] != 0)//用数组中的每一个数(100个)依次与除数（小于33）相除并取余如果余恒为零，说明可被非素数整除
                if (a[j] % a[i] == 0)  //小于33：避免重复计算.  
                    a[j] = 0;         //a[j]表示一百以内的数且
        }
    printf("\n");
    for (i = 2, n = 0; i <= 100; i++)
    {
        if (a[i] != 0)
        {
            printf("%5d", a[i]);
            n++;
        }
        if (n == 5)
        {
            printf("\n");
            n = 0;
        }
    }
    printf("\n");
    return 0;
}