#include<stdio.h>
int main() 
{
	int x,N;
	scanf ("%d",&N);
	double s=0.0;
	for (x=1;x<=N;x++)
	{
		s+=1.0/x;
	}
	printf("sum = %.6f\n",s);
	return 0;
}
