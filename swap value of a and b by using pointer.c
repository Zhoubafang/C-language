#include <stdio.h>
void swap(int *pa, int *pb)		 //&a��a�ĵ�ַ����*pa   b,ͬ����int��ָ ָ��ָ��������������
{                                //*pa *pb��Ӧ&a &b pa���Ը����κ���ʽba ca�ȵ�
	int t;
	t = *pa; *pa = *pb; *pb = t; //ָ���ַʵ�ֽ��� pb�ĵ�ַ��pa�� pa��pb��ʽ����
}
int main(void)    
{
	int a = 3, b = 5;
	swap(&a, &b);				//ȡa b��ַ
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}