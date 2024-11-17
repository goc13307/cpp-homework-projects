#include<stdio.h>
int main(){
	int a,b,c,d,sum;
	float ans;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum=a+b+c+d;
	ans=sum/4.0;
	printf ("Sum = %d; Average = %.1f",sum,ans);
	return 0;
}
