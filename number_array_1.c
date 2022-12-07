#include <stdio.h>
#include <stdlib.h>
#undef RAND_MAX
#define RAND_MAX 100

int * one (int colume) {
    #include <time.h>
    #include <stdlib.h>
    int arr[colume];
    srand(time(NULL));   // Initialization, should only be called once.
    for(int i=0;i<colume;i++)
    {

        arr[i]=rand()%10;
    }
     
   
    return arr;
}   
