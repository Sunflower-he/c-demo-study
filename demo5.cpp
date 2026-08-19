#include <stdio.h>
struct student{
	char number[6];
	char name[10];
	int grade;
};
int main()
{
	int N;
	printf("请输入学生数量："); 
	scanf("%d",&N);
	struct student str[N];
	printf("请分别输入学生的学号-姓名-成绩：");
	for(int i=0;i<N;i++){
		scanf("%s%s%d",str[i].number,str[i].name,&str[i].grade);
	}
	float sum=0;
	float average=0;
	for(int i=0;i<N;i++){
		sum+=str[i].grade;
	}
	average=sum/N;
	printf("学生成绩平均数为："); 
	printf("%.2f\n",average);
	printf("不合格的学生信息如下："); 
	for(int i=0;i<N;i++){
		if(str[i].grade<average){
			printf("%s %s\n",str[i].number,str[i].name);
		}
	}
	return 0;
}
