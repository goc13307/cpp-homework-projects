#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a; // ���ڶ�̬�����ڴ��ָ��
    int n,i,t,sum=0,count=0;
    float average;
    scanf("%d", &n);
    
    //�ж������Ƿ�Ϊ0 
    if ( n ==0 ){
    	printf("average = 0.0 \n");
    	printf("count = 0");
    	return 0;
	} 
	
    // ���������������̬�����ڴ�
    a = (int *)malloc(n * sizeof(int));
    
    // ����ڴ�����Ƿ�ɹ�
    if (a == NULL) {
        return 1;
    }
    
    // �����������
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    //�������ۼ���ͼ��Ͳ���һ�����ɼ���ֵ 
    for (t = 0; t < n; t++){
    	sum += a[t];
	}
	average = (float)sum/(float)n;
	printf ("average = %.1f\n",average);
	
	//�����ɼ��ϸ��ߣ�������60�֣�
	for (t = 0; t < n; t++){
		if ( a[t] >= 60 ){
			count += 1;
		}
	} 
	printf("count = %d",count);
	
    // �ͷ��ڴ�
    free(a);

    return 0;
}

