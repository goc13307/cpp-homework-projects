#include <stdio.h>
int i,j,c;
paixu(int a[],int n){
	for (i=0;i<n-1;i++){
		for (j=0;j<=n-1-1;j++){
			if(a[j]>a[j+1]){
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
}

int main (){
	int a[4];
	int n,i,j,t;
	n=4;
	for (t=0;t<4;t++){
		scanf("%d",&a[t]);
		}
	paixu(a,n);
	printf("%d=>%d=>%d=>%d",a[0],a[1],a[2],a[3]);
	return 0;
}
