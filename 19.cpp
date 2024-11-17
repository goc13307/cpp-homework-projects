#include<stdio.h>
#include<math.h>
int main(){
    int N,i;
    double ans=0.0;
    scanf ("%d",&N);
    for(i=1;i<=N;i++)
	{
        ans += sqrt(i);
    }
    printf("sum = %.2f",ans);
    return 0;
}
