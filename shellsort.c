#include<stdio.h>

void shellsort(int * arr,int n)
{
    //n=length of array
    int temp;
    for(int gap=n/2;gap>0;gap/=2)//dived向下取整
    {
        for(int i=gap;i<n;++i)
        {
            temp=arr[i];
            int j;
            for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap) 
            {
                arr[j]=arr[j-gap];
                
            }
            arr[j]=temp;
        }
    }
}

int main()
{
    int arr[] = {12, 5, 34, 7, 54, 2, 3};
    int size=sizeof(arr);
    int len=size/sizeof(arr[0]);
    shellsort(arr,len);
    for(int count=0;count<len;count++)
    {
        printf("%d\n",arr[count]);
    }
    return 0;
}
