#include <stdio.h>
int main(){
	int a,b;
	scanf ("%d %d",&a,&b);
	float v,t;
	v=((float)a-(float)b)/(float)b;
	t=100*v;
	if (a<=b){
		printf("OK\n");
	}else if (v>=0.5){
		printf("Exceed %.0f%%. License Revoked",t);
	}else if (v<0.5&&v>0.1){
		printf("Exceed %.0f%%. Ticket 200",t);
	}else{
		printf("OK\n");
	};
	
	return 0;
}
