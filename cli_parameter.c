#include<stdio.h>
int main(int agrc,char * agrv[]){
    printf("%d,",agrc);
    int c=1;
    printf("file name is %s",agrv[0]);
    while(agrv[c]!=NULL){
        printf("%s\n",agrv[c]);
        c++;
        
    }
    return 0;
}