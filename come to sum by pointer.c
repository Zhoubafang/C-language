#include <stdio.h>

int main(void)
{
	int i, n;
	int c[9] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d", sum(c, 9)); //实参传递中包含着数组信息(告诉计算机该数组名字、有多少元素)给调用函数，让调用函数做进一步处理
	return 0;
}
int sum(int *c, int n)       //通过指向数组中 第一个元素 指向sum(b, )
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += c[i];
	}						//易错：下括号的位置不允许在return(sum)之下
		return(sum);
	
}