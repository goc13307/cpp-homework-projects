#include<stdio.h>
int i;
int fact(int n){
	if (n==0||n==1) return 1;
	int ans=1;
	for (i=2;i<=n;i++)
	{
		ans *= i;
	}
	return ans;
}
int main(){
    int N,l,t=0;
    scanf ("%d",&N);
    for(l=1;l<=N;l++)
	{
        t += fact(l);
    }
    printf("%d",t);
    return 0;
}
