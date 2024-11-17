#include<stdio.h>
int main() 
{
	int m,n,x,y;
	double a=0.0,b=0.0,z;//初始化计算中值 
	scanf ("%d %d",&m,&n);//获得目标数 
	for (x=m;x<=n;x+=1)//初始化x=m，判断x是否小于等于N，执行x+6
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
