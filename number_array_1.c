#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int * one (int colume) {
    int * arr;
    arr=(int*)malloc(colume*sizeof(int));
    srand(time(NULL));   // Initialization, should only be called once.

    for(int i=0;i<colume;i++)
    {

        arr[i]=rand()%10;
    }
     
   
    return arr;
}   
