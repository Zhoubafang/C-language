#include <stdio.h>
#include <string.h> //预处理指令 
struct candidate
{
	char name[20];
	int count;
}leader[3] = { "zhangsan",0,"lisi",0,"wangwu",0 }; //结构体数组 (每个元素包含name count两个参数) 
void main()
{
	char candidatename[20];
	int i, j;
	for (i = 0; i < 7; i++)
	{
		printf("第%d个选民开始投票：\n", i + 1);
		scanf_s("%s", candidatename); //输入被选人名字 
		for (j = 0; j < 3; j++)
		{
			if (strcmp(candidatename, leader[j].name) == 0)
			{
				leader[j].count++;
			}//根据投票寻找对应候选人 
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("投票结果\n"); 
		printf("%s：%d\n", leader[i].name, leader[i].count);
    }

	return 0;
}
