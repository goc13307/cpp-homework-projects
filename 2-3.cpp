#include <stdio.h>
#include <ctype.h>

int main(){
	int letter=0,blank=0,digit=0,other=0,i;
	char ch;
	for (i=0;i<10;i++){
	ch =getchar();
	if (isalpha(ch)){letter++;
	}else if(isspace(ch)){blank++;
	}else if(isdigit(ch)){digit++;
	}else {other++;}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
	return 0;
}
