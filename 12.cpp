#include<stdio.h>
int main() 
{
	int N,n;
	double a,b,x,y,z;
	a=0.0;
	b=0.0;
	scanf ("%d",&n);//获得目标计算次数 
	N=n*3;//将获得的n转化为是否发生计算的判断数 
	for (x=1.0;x<N;x+=6.0)//初始化x=1，判断x是否小于等于N，执行x+6
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
