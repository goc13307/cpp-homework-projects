#include <stdio.h>

int main() {
    int i,n;
    double sum,t;
    scanf("%d", &n);
    for (i=1.0;i<=n;i++)
	{
        double t=(double)i/(2*i-1);
        if (i % 2 == 0) { // 偶数项取负
            sum -= t;
        } else { // 奇数项取正
            sum += t;
        }
    }
    printf("%.3f\n", sum);
    return 0;
}

