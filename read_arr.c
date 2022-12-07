#include<stdbool.h>
#include<stdlib.h>
#include"number_array_1.c"
/*now only works with one or two dimension*/
bool read(int * arr,int dimension,int colume,int row)
{
    if(dimension==1) 
    {
        for(int i =0;i<colume;i++)
        {
            printf("%d \n",arr[i]);
        }
    }
    else
    {
        /*every elements in first row,then second row*/
        /*first [] represents row*/
        /*for(int j=0;j<row;j++)
        {
            for(int i =0;i<colume;i++)
            {
                printf("%d",arr[j][i]);

            }
        }*/
    }
    return true;
}

/*for test void pointer*/
int main(void){
    int * arr=one(10);
    read(arr,1,10,0);
    return 0;
}