#include<stdio.h>
int main() 
{
	int m,n,x,y;
	double a=0.0,b=0.0,z;//��ʼ��������ֵ 
	scanf ("%d %d",&m,&n);//���Ŀ���� 
	for (x=m;x<=n;x+=1)//��ʼ��x=m���ж�x�Ƿ�С�ڵ���N��ִ��x+6
	{	
	a+=1.0/x;
	}
	for (y=m;y<=n;y+=1)
	{
	b+=y*y;
	}
	z=a+b;
	printf("sum = %.6f\n",z);
	return 0;
}
