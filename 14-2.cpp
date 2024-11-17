#include <stdio.h>
int n,i,m;
double fact(int n){
	if (n==0||n==1) return 1.0;
	double ans=1.0;
	for (i=2;i<=n;i++){
		ans *= i;
	}
	return ans;
}
double C(int m,int n){
	return fact(n)/(fact(n-m)*fact(m));
}
int main(){
	scanf ("%d %d",&m,&n);
	double r;
	r= C(m,n);
	printf ("result = %.0f\n",r);
	return 0;
}
