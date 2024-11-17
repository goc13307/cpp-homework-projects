#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a; // 用于动态分配内存的指针
    int n,i,t,sum=0,count=0;
    float average;
    scanf("%d", &n);
    
    //判断输入是否为0 
    if ( n ==0 ){
    	printf("average = 0.0 \n");
    	printf("count = 0");
    	return 0;
	} 
	
    // 根据输入的数量动态分配内存
    a = (int *)malloc(n * sizeof(int));
    
    // 检查内存分配是否成功
    if (a == NULL) {
        return 1;
    }
    
    // 逐个输入数据
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    //遍历并累加以图求和并进一步求解成绩均值 
    for (t = 0; t < n; t++){
    	sum += a[t];
	}
	average = (float)sum/(float)n;
	printf ("average = %.1f\n",average);
	
	//计数成绩合格者（不低于60分）
	for (t = 0; t < n; t++){
		if ( a[t] >= 60 ){
			count += 1;
		}
	} 
	printf("count = %d",count);
	
    // 释放内存
    free(a);

    return 0;
}

