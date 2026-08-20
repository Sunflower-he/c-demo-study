#include <stdio.h>
#define MAXSIZE 100
typedef struct SeqList{//定义顺序表结构体 
	int data[MAXSIZE];
	int length;
}SeqList;
void initList(SeqList *L){ //顺序表初始化 
	L->length=0;
}
void insertTail(SeqList *L,int val){//尾部插入元素 
	if(L->length>=MAXSIZE){
		printf("顺序表已满\n");
		return;
	}
	L->data[L->length]=val;
	L->length++;
}
void printSeq(SeqList *L){//打印顺序表 
    int i;
	for(i=0;i<L->length;i++){
		printf("%d ",L->data[i]);
	}
}
int main()
{
	SeqList L;//创建一个顺序表变量 
	initList(&L);//顺序表初始化 
	insertTail(&L,12);
	insertTail(&L,34);
	insertTail(&L,56);
	printf("顺序表内容：");
	printSeq(&L);//打印顺序表 
	return 0;
}
