#include <stdio.h>

int main(void)
{
	int i, n;
	int c[9] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d", sum(c, 9)); //ʵ�δ����а�����������Ϣ(���߼�������������֡��ж���Ԫ��)�����ú������õ��ú�������һ������
	return 0;
}
int sum(int *c, int n)       //ͨ��ָ�������� ��һ��Ԫ�� ָ��sum(b, )
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += c[i];
	}						//�״������ŵ�λ�ò�������return(sum)֮��
		return(sum);
	
}