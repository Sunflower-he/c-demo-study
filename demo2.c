#include <stdio.h>
int main()
{
	int score;
	printf("请输入学生成绩：");
	scanf("%d",&score);
	if(score>=90) printf("等级：A");
	else if(score>=80) printf("等级：B");
	else if(score>=70) printf("等级：C");
	else if(score>=60) printf("等级：D");
	else printf("等级：不合格");
	return 0 ;
}
