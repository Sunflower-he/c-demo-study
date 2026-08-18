#include <stdio.h>
#define N 10
int main()
{
	int a[N];
	int i,j;
	printf("请输入数组中的10个数字：");
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<N;i++){
		for(j=0;j<N-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("升序排序后的数组为：");
	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
