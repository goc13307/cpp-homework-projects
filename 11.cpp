#include<stdio.h>
int main() 
{
	int x,N,n;
	scanf ("%d",&n);
	N=n*2+1;//将获得的n转化为是否计算的判断数 
	double s=0.0;
	for (x=1;x<N;x+=2)//初始化x=1，判断x是否小于等于N，执行x+2，运行计算代码 
	{
	s+=1.0/x;
	}
	printf("sum = %.6f\n",s);
	return 0;
}
