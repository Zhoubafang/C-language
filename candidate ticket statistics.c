#include <stdio.h>
#include <string.h> //Ԥ����ָ�� 
struct candidate
{
	char name[20];
	int count;
}leader[3] = { "zhangsan",0,"lisi",0,"wangwu",0 }; //�ṹ������ (ÿ��Ԫ�ذ���name count��������) 
void main()
{
	char candidatename[20];
	int i, j;
	for (i = 0; i < 7; i++)
	{
		printf("��%d��ѡ��ʼͶƱ��\n", i + 1);
		scanf_s("%s", candidatename); //���뱻ѡ������ 
		for (j = 0; j < 3; j++)
		{
			if (strcmp(candidatename, leader[j].name) == 0)
			{
				leader[j].count++;
			}//����ͶƱѰ�Ҷ�Ӧ��ѡ�� 
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("ͶƱ���\n"); 
		printf("%s��%d\n", leader[i].name, leader[i].count);
    }

	return 0;
}
