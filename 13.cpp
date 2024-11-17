#include<stdio.h>
#include<math.h>
int main() 
{
	long n,x,ans=0;
	scanf ("%d",&n);
	for (x=0;x<=n;x++)
	{
		ans=pow (3,x);
		printf("pow(3,%d) = %d\n",x,ans);
	}
	return 0;
}
