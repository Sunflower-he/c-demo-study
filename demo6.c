#include <stdio.h>
int main()
{
	int n;
	printf("请输入n的值：");
	scanf("%d",&n);
	int a[n];
	int *p=a;
	int i;
	printf("请输入数组中的数：");
	for(i=0;i<n;i++){
		scanf("%d",(p+i)); 
	}
	for(i=0;i<4;i++){//指针修改每个元素翻倍 
		*(p+i)*=2;
	}
	printf("翻倍后：");
	for(i=0;i<4;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}
