#include<stdio.h>
int main(){
	float x,y;
	scanf("%f",&x);
	if (x == 0){
		printf("f(0.0) = 0.0\n");
	}else {	y=1/x;	printf("f(%.1f) = %.1f\n",x,y);
	}
	return 0;
}
