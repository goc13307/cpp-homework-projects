#include <stdio.h>
int main()
{
    int a,b,p,j,x,c;
    scanf("%d%d",&a,&b);
    p=a+b;j=a-b;x=a*b;c=a/b;
    printf("%d + %d = %d\n",a,b,p);
    printf("%d - %d = %d\n",a,b,j);
    printf("%d * %d = %d\n",a,b,x);
    printf("%d / %d = %d\n",a,b,c);
    return 0; 
}
