#include <stdio.h>
void reverse(int p[], int n);     //定义是a[]不是*a[]
int main(void)
{
	int i, a[10], n;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	reverse(a, n);
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return 0;
}/*
void reverse(int p[], int n)
{
	int i, j, t;
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		t = p[i]; p[i] = p[j]; p[j] = t;
	}
} */
void reverse(int *p, int n)
{
	int *pj, t;             //*p指向整个数组   *p指向数组第一个元素实现指向整个数组a[i] 数组在计算机看来就是指针，计算机认为指针（数组）以指向首元素的方式指向整个数组
	for(pj = p+n-1;p<pj;p++,pj--)   //pj：第一个元素(p) + 总元素个数(n) - 1 = 尾元素  在22行中*p通过指向数组中第一个元素来达到指向整个数组的效果，思考：p+n中的p的具体值以及数组中存在10000个元素的处理方式？
	{                               //p++,pj--实质加减一个步长，步长以p,pj的类型决定是int or char 来决定减少或增加4个字节或者一个字节
	    t = *p; *p = *pj; *pj = t;  //每经历一次p++pj--循环就意味着p和pj所代表的数字不一样 对本次循环中*p和*pj所代表的数字进行对调
	}
}
