#include<stdio.h>
int main(){
	int n;
	double ans;//���ڴ洢��� 
	scanf("%d",&n);
	int i=1;//���ڼ������ 
	double t;//���ڴ洢δ���������ļ����м��� 
	while (i<=n){
		t=(double)i/(2*i-1);
		if (i % 2 ==0){ans -= t;}//ȷ������ 
		else{ans += t;}
		i++;//��������1 
	}
	printf ("%.3f\n",ans);
	return 0; 
}
