#include<stdio.h>
int main() 
{
	int N,n;
	double a,b,x,y,z;
	a=0.0;
	b=0.0;
	scanf ("%d",&n);//���Ŀ�������� 
	N=n*3;//����õ�nת��Ϊ�Ƿ���������ж��� 
	for (x=1.0;x<N;x+=6.0)//��ʼ��x=1���ж�x�Ƿ�С�ڵ���N��ִ��x+6
	{	
	a+=1.0/x;
	}
	if (N>1)
	{
	for (y=4.0;y<N;y+=6.0)
	{
	b+=1.0/y;
	}
	}
	z=a-b;
	printf("sum = %.3f\n",z);
	return 0;
}
