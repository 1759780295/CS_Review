#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rand_X(int x)
{
	return rand()%x;
}

void main()
{
	srand((double)time(0));//ʹ��ϵͳʱ����Ϊ�������
	int x;
	int j;
	for(x=0;x<10;x++)
		printf("%d\n",(double)rand_X(1));//���100�ڵ������
	system("pause");

}

