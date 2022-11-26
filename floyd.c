//two way to store a graph
//use a Adjacency Matrix or Adjacency List 
#include<stdio.h>
int main (void){
    int graph[5][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            graph[j][i]=j;
        }
    }
    for (int i=0;i<10;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%d//",graph[j][i]);
        }
    }
    printf("hello world and word %c \n",getchar());
    return 0;
}
