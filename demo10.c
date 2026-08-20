#include <stdio.h>
#define MAXSIZE 100
typedef struct SeqList{
	int data[MAXSIZE];
	int length;
}SeqList;
void initList(SeqList* L){
	L->length=0;
}
void insert(SeqList* L,int val){
	if(L->length>=MAXSIZE) return;
	L->data[L->length++]=val;
}
void bubbleSort(SeqList* L){
	int i,j;
	for(i=0;i<L->length;i++){
		for(j=0;j<L->length-i-1;j++){
			if(L->data[j]>L->data[j+1]){
				int t=L->data[j];
				L->data[j]=L->data[j+1];
				L->data[j+1]=t;
			}
		}
	}
}
void printSeq(SeqList* L){
	int i;
	for(i=0;i<L->length;i++){
		printf("%d ",L->data[i]);
		}
	}
int main()
{
	SeqList L;
	initList(&L);
	insert(&L,44);
	insert(&L,18);
	insert(&L,56);
	insert(&L,77);
	insert(&L,23);
	printf("≈≈–Ú«∞£∫");
	printSeq(&L);
	bubbleSort(&L);
	printf("\n≈≈–Ú∫Û£∫");
	printSeq(&L);
	return 0;
	
 } 
