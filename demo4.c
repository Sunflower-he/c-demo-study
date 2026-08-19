#include <stdio.h>
int main()
{
	int n,i,j;
	printf("请输入n的值：");
	scanf("%d",&n);
	int a[11];
	printf("请输入数组中的数：");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("升序排序后的数组为：");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	int x;
	printf("\n请输入要插入的数：");
	scanf("%d",&x);
	int pos=n;
	for(i=0;i<n;i++){
		if(x<a[i]){
			pos=i;
			break;
		}
	}
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	printf("插入成功的数组为：");
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
