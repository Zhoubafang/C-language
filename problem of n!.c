#include <stdio.h>

int factorial(int k)
{									  //以求3！为例
	if (k == 1)	return 1;
	else return k * factorial(k - 1); //将k-1=2的值回代入int factorial(int k)（第三行中的代码） k-1的值对第三行反馈值的情况，并加以判断是否k=1
}
int main(void)
{
	int k;
	scanf_s("%ld", &k);
	printf("%ld", factorial(k));
	return 0;
}
