#include <stdio.h>

int factorial(int k)
{									  //���磺��3��
	if (k == 1)	return 1;
	else return k * factorial(k - 1); //��k-1=2��ֵ�ش���int factorial(int k)���������еĴ��룩 k-1��ֵ�Ե����з���ֵ�����
}
int main(void)
{
	int k;
	scanf_s("%ld", &k);
	printf("%ld", factorial(k));
	return 0;
}
