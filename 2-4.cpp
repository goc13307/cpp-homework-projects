#include<stdio.h>

int main(){
	int i,y;
	scanf("%d",&y);
	if(y<=2000||y>2100){
		printf("Invalid year!");
	}else if(y<2004&&y>2000){
		printf("None");
	}else {for(i=2000;i<=y;i++)
	{
		if(i%4==0&&i%100!=0&&i%400!=0)
		{
			printf ("%d\n",i);
		}
	}
	}
	return 0;
}
