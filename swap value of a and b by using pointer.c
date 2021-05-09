#include <stdio.h>
void swap(int *pa, int *pb)		 //&a将a的地址给了*pa   b,同样；int是指 指针指向对象的数据类型
{                                //*pa *pb对应&a &b pa可以更改任何形式ba ca等等
	int t;
	t = *pa; *pa = *pb; *pb = t; //指针地址实现交换 pb的地址给pa， pa和pb形式不变
}
int main(void)    
{
	int a = 3, b = 5;
	swap(&a, &b);				//取a b地址
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}