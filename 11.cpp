#include<stdio.h>
int main() 
{
	int x,N,n;
	scanf ("%d",&n);
	N=n*2+1;//����õ�nת��Ϊ�Ƿ������ж��� 
	double s=0.0;
	for (x=1;x<N;x+=2)//��ʼ��x=1���ж�x�Ƿ�С�ڵ���N��ִ��x+2�����м������ 
	{
	s+=1.0/x;
	}
	printf("sum = %.6f\n",s);
	return 0;
}
