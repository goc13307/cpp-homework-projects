#include <stdio.h>
#include <math.h>

double d,r,t,s,i,o,a,b,c;

double juli(double x1,double y1,double x2,double y2)
{
	d=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
	r=sqrt(d);
	return r;
}

double mianji(double a,double b,double c)
{
	s=0.5*(a+b+c);
	t=s*(s-a)*(s-b)*(s-c);
	i=sqrt(t);
	return i;
}

int main()
{
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a=juli(x1,y1,x2,y2);b=juli(x1,y1,x3,y3);c=juli(x2,y2,x3,y3);
	if(a+b>c&&a+c>b&&b+c>a){
		o=a+b+c;s=mianji(a,b,c);
		printf("L = %.2f, A = %.2f\n",o,s);
	}else {printf("Impossible\n");}
	return 0;
}
