#include <stdio.h>
int main(void)
{
	int a = 10;
	int  *pa = &a; //指针pa指向a,因为它连着a的地址 指针变量的初始化（即赋值）：*指针名 = 初始化的地址名
	printf("*pa:%d\n", *pa);// 指针pa通过%d输出a的值

	printf("pa:%x\n", pa);   //pa通过十六进制输出地址

	printf("a:%d\n", a);     //只是输出a的值（10）

	printf("&a:%x\n", &a); //&a通过%x输出地址

	printf("&pa:%x\n", &pa);//pa本身只存储地址，输出pa所在地址
	return 0;
}