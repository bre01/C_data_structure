#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct node{
	char name[10];
	struct node * next;
}Node;

Node  * pnode;
typedef struct list{
	Node * first;
	int len;
}List;

Node *create_list(){
	Node * plist;
	plist=NULL;
	
	return plist;
}
Node *  addnode(Node *plist,char * name){
	Node * pnode;
	Node * scan;
	int count=0;
	pnode=(Node*)malloc(sizeof(Node));
	scan=(Node*)malloc(sizeof(Node));
	strcpy(pnode->name,name);
	pnode->next=NULL;

	scan=plist->begin;
	while (scan!=NULL) {
		scan=scan->next;
	}
	plist=pnode;
	
	return plist;
}
void printall(List * plist){
	Node * scan;
	scan=plist->first;
	while (scan!=NULL){

		puts(scan->name);
		scan=scan->next;
	}
}	
int main(void){
	List * plist;
		plist=create_list();
	for( int i =0;i<5;i++){
		char name[10];
		scanf("%s",name);
		plist=addnode(plist,name);
		
	}
	printall(plist);
	return 0;

}



		




