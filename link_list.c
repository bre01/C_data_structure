#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct node{
    char name[10];
    struct node * next;
}Node;
typedef struct list
{

    int len;
    Node * begin;
    Node  * end;
}List;

List * create_list();
bool add_node(List *,char *);
void printall(List *);

int
main()
{
    List * plist;
    char name[10];
    plist=create_list();
    for(int i=0;i<5;i++)
    {
        printf("enter string");
        scanf("%s",name);
        add_node(plist,name);
    }
    printall(plist);
    return 0;
}

List *
create_list()
{
    List * plist;
    plist=(List *)malloc(sizeof(List));
    plist->begin=NULL;
    plist->end=NULL;
    plist->len=0;
    return plist;
}
bool
add_node(List* plist,char * name)
{
    Node * pnode;
    if((pnode=(Node*)malloc(sizeof(Node))))
    {
        pnode->next=NULL;
        strcpy(pnode->name,name);
    }
    else
    {
        return false;
    }
    if (plist->begin==NULL){
        plist->begin=pnode;
        plist->end=pnode;
    }
    else
    {
        plist->end->next=pnode;
       plist->end=pnode;

    }
    return true;
}

void
printall(List * plist)
{
    Node * scan;
    scan=plist->begin;

    while(scan!=NULL)
    {
       printf("%s",scan->name);
       scan=scan->next;
    }

    
}
