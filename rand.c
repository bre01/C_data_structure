#include<stdlib.h>
#include<stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    for(int i=0;i<10;i++){
    int n=rand()%10;
    printf("%d\n",n);

    }
    return 0;
}