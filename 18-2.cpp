#include<stdio.h>
int main(){
	int n;
	double ans;//用于存储结果 
	scanf("%d",&n);
	int i=1;//用于计算计数 
	double t;//用于存储未区分正负的计算中间结果 
	while (i<=n){
		t=(double)i/(2*i-1);
		if (i % 2 ==0){ans -= t;}//确定正负 
		else{ans += t;}
		i++;//计数器加1 
	}
	printf ("%.3f\n",ans);
	return 0; 
}
