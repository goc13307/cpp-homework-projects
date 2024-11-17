#include<stdio.h>
int main(){
	int l,u;
	scanf ("%d %d",&l,&u);
	if(l>u||l>100||l<0||u<0||u>100){
		printf("Invalid Value!\n");
	}else{
		printf("fahr celsius\n");
		for (float f=l;f<=u;f++){
		float c=5.0*(f-32)/9.0;
		printf ("%4.0f%6.1f\n",f,c);}
		}
	return 0;
}
