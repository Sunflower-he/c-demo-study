#include <stdio.h>
#include <stdlib.h>
typedef struct Node{//链表节点结构体 
	int num;
	struct Node *next;
}Node;
Node* create(int val){//创建新节点 
	Node* p=(Node*)malloc(sizeof(Node));
    p->num=val;
    p->next=NULL;
    return p;
}
void printLink(Node* head){//遍历打印整条链表 
	Node* cur=head;
	while(cur!=NULL){
		printf("%d ",cur->num);
		cur=cur->next;
	}
}
int main()
{
	Node* h=create(100);//节点一 
	h->next=create(200);
	h->next->next=create(300);
	h->next->next->next=create(450);
	printf("链表输出：");
	printLink(h);
	Node* temp;
	while(h!=NULL){
		temp=h;
		h=h->next;
		free(temp);
	}
	return 0;
}
