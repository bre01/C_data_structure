#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct node
{
    /* data */
    char name[10];
    struct node *next;
    
}Node;
typedef struct list
{
    /* data */
    int len;
    Node * begin;
    
}List;
List * create_list();
bool add_node(List * plist,char * name);
void printall(List * plist );
int main(void)
{
    List * plist;
    char name[10];
    plist=create_list();
    for (int i=0;i<5;i++)
    {
        printf("enter string \n");
        scanf("%s",name);
        add_node(plist,name);
    }
    printall(plist);
    return 0;
}
List * create_list()
{
    List *plist;
    plist=(List*)malloc(sizeof(List));
    plist->begin=NULL;
    plist->len=0;
    return plist;
}
bool add_node(List * plist,char * name)
{
    Node * pnode;
    Node *scan;
    Node * before;
    int count=0;
    before=(Node*)malloc(sizeof(Node));
    if((pnode=(Node*)malloc(sizeof(Node))))
    {
        pnode->next=NULL;
        strcpy(pnode->name,name);
    }
    else
    {
        return false;   
    }
    scan=plist->begin;
    while(scan->next!=NULL)
    {
        count+=1;
        before=scan;
        scan=scan->next;
    }
    if (count==0)
    {
        plist->begin=pnode;
    }
    else
    {
        before->next=pnode;
    }
    return true;
}
void printall(List * plist)
{
    Node * scan;
    scan=plist->begin;
    while(scan!=NULL){
        printf("%s\n",scan->name);
        scan=scan->next;
    }

}
