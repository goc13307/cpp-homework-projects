#include<stdio.h>
#include<math.h>
int main(){
	float x,y;
	scanf("%f",&x);
	if (x>50.0) {
	y=(50.0*0.53)+((x-50.0)*(0.53+0.05));
	printf("cost = %.2f\n",y);
	}else if (x>0) {y=x*0.53;
	printf("cost = %.2f\n",y);
	}else if (x==0) {printf ("cost = 0.00");
	}else printf("Invalid Value!\n");
	return 0;
}
