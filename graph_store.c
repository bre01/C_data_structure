// a way to store graph is adjacency matrix
//the row number is starting point
//the colume number is destination

//yet another is adjacency list
//the parameter form of 2D array is very special 
//and there is a saying that pointer to pointer is not the same with 2d array


#include<stdbool.h>
#include<stdio.h>
#define size 5

bool generate_matrix(int [][size],int);
bool generate_list();

int 
main (void)
{
    int matrix[size][size];
    if(generate_matrix(matrix,size))
    {
       
        return 0;
    }
    return -1; 
}
bool generate_matrix(int mat[][size],int siz)
{
    //int (*ma)[siz]=malloc(sizeof(int[siz][siz]));

    for(int c=0;c<siz;c++)
    {
        for (int d=0;d<siz;d++)
        {
            mat[c][d]=c+d;
        }

    }
    for (int e=0;e<siz;e++)
    {
        for (int f=0;f<siz;f++)
        {
            printf("%d",mat[f][e]);
        }
    }
    return 0;
}