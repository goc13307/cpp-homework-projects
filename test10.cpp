#include<stdio.h>
int main(){
	int l,u;
	scanf ("%d %d",&l,&u);
	if(l>u||l>100||l<0||u<0||u>100){
		printf("Invalid Value!\n");
		return 0;
	}else{
		printf("fahr celsius\n");
		for (float f=l;f<=u;f+=2){
		float c=5.0*(f-32.0)/9.0;
		printf ("%4d%6.1f\n",(int)f,c);}
		}
	return 0;
}
