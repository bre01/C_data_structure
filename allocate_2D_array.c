#include<stdio.h>
#include<stdlib.h>
#define M 5
#define N 5
int main(void){

int (*arr)[5] = malloc(sizeof(int[2][4]));
//arr is pointer to int[M].use like arr[0][M-1]
    for (int i=0;i<5;i++)

    {
        for(int j=0;j<5;j++)
        {
            printf("%d",arr[i][i]);
        }
        putc('\n',stdout);
    }
    return 0;


}