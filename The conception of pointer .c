#include <stdio.h>
int main(void)
{
	int a = 10;
	int  *pa = &a; //ָ��paָ��a,��Ϊ������a�ĵ�ַ ָ������ĳ�ʼ��������ֵ����*ָ���� = ��ʼ���ĵ�ַ��
	printf("*pa:%d\n", *pa);// ָ��paͨ��%d���a��ֵ

	printf("pa:%x\n", pa);   //paͨ��ʮ�����������ַ

	printf("a:%d\n", a);     //ֻ�����a��ֵ��10��

	printf("&a:%x\n", &a); //&aͨ��%x�����ַ

	printf("&pa:%x\n", &pa);//pa����ֻ�洢��ַ�����pa���ڵ�ַ
	return 0;
}