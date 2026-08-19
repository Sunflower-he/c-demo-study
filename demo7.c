#include <stdio.h>
#include <stdlib.h>
struct Student{
	int num;
	char  name[20];
	struct Student *next;
};
int main()
{
	struct Student *s1=(struct Student*)malloc(sizeof(struct Student));
	struct Student *s2=(struct Student*)malloc(sizeof(struct Student));
	if(s1==NULL||s2==NULL){
		printf("内存分配失败\n");
		return 1;
	}
	s1->num=101;
	s1->name[0]='Z';
	s1->name[1]='h';
	s1->name[2]='a';
	s1->name[3]='n';
	s1->name[4]='g';
	s1->name[5]='\0';
	s1->next=s2;
	s2->num=102;
	s2->name[0]='L';
	s2->name[1]='i';
	s2->name[2]='\0';
	s2->next=NULL;
	printf("学号：%d，姓名：%s\n",s1->num,s1->name);
	printf("学号：%d，姓名：%s\n",s2->num,s2->name);
	free(s1);
	free(s2);
	return 0;
}
