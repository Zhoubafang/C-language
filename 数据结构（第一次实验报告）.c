#include <stdio.h>
#include <stdlib.h>
#define Size 5
//顺序表定义
typedef struct Table {
	int* head; //数据地址
	int length; // 当前长度
	int size; //顺序表长度
}table;

//初始化顺序表
table initTable();
//添加元素
table addTable(table t, int elem, int add);
//删除元素
table delTable(table t, int add);
//查询指定数据的位置
int selectTable(table t, int elem);
//修改指定位置的数据
table amendTable(table t, int elem, int newElem);
//打印顺序表
void displayTable(table t);


int main() {
	int i, add;
	table t1 = initTable(); // 实例化顺序表t1
	for (i = 1; i <= Size; i++) {
		t1.head[i - 1] = i; //数据填充
		t1.length++;
	}
	printf("原顺序表：\n");
	displayTable(t1);
	printf("删除元素1:\n");
	t1 = delTable(t1, 1);
	displayTable(t1);
	printf("在第2的位置插入元素5:\n");
	t1 = addTable(t1, 5, 2);
	displayTable(t1);
	printf("查找元素3的位置:\n");
	add = selectTable(t1, 3);
	printf("%d\n", add);
	printf("将元素3改为6:\n");
	t1 = amendTable(t1, 3, 6);
	displayTable(t1);
	return 0;
}
table initTable() {
	table t;
	t.head = (int*)malloc(Size * sizeof(int)); // 开辟5个int类型数据地址
	if (!t.head) //初始化判断
	{
		printf("初始化失败");
		exit(0);
	}
	t.length = 0;
	t.size = Size;
	return t;
}
table addTable(table t, int elem, int add)
{
	int i;
	if (add > t.length + 1 || add < 1) {
		printf("插入位置有问题");
		return t;
	}
	if (t.length >= t.size) {
		t.head = (int*)realloc(t.head, (t.size + 1) * sizeof(int)); //在原有内存基础上再开辟内存
		if (!t.head) {
			printf("存储分配失败");
		}
		t.size += 1;
	}
	for (i = t.length - 1; i >= add - 1; i--) {
		t.head[i + 1] = t.head[i];
	}
	t.head[add - 1] = elem;
	t.length++;
	return t;
}
table delTable(table t, int add) {
	int i;
	//容错判断
	if (add > t.length || add < 1) {
		printf("被删除元素的位置有误");
		exit(0);
	}
	//删除数据的后续各元素前移一位
	for (i = add; i < t.length; i++) {
		t.head[i - 1] = t.head[i];
	}
	t.length--;
	return t;
}
int selectTable(table t, int elem) {
	int i;
	for (i = 0; i < t.length; i++) {
		if (t.head[i] == elem) {
			return i + 1;
		}
	}
	return -1;
}
table amendTable(table t, int elem, int newElem) {
	int add = selectTable(t, elem);
	t.head[add - 1] = newElem;
	return t;
}
void displayTable(table t) {
	int i;
	for (i = 0; i < t.length; i++) {
		printf("%d ",	t.head[i]);
	}
	printf("\n");
}