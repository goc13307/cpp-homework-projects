#include<stdio.h>

int main(){
	int p;
	scanf("%d",&p);
	if(p>=90){printf("A");}
	else if (p<90&&p>=80){printf ("B");}
	else if (p<80&&p>=70){printf ("C");}
	else if (p<70&&p>=60){printf ("D");}
	else {printf ("E");}
	return 0;
}
