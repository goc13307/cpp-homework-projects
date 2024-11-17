#include<stdio.h>

int main(){
	int h,n,i;
	double x=0.0,H; 
	scanf("%d %d",&h,&n);
	H=h;
	x += h;
	for(i=1;i<n;i++){
	    H *= 0.5;
		x += 2.0*H;
	}
	H *= 0.5;
	printf("%.1f %.1f",x,H);
	return 0;
}
