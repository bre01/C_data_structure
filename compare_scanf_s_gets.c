#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int
main(void)
{
    char * string;
    printf("how many char in your string");
    int count;
    int time;
    /*printf("%d",scanf("%d",&count));
    string=malloc(count*sizeof(char));
    time=scanf("%s",string); //remember scanf("%s") only accept first string
    //which means if i want to get a line of sentence, i have to use s_gets or fgets (?mabye)
    some kind of stuff 
    printf("%d,%s",time,string);*/
    char str[20];
    fgets(str,20,stdin);
    printf("%s",str);
    
    return 0;
    
} 
