#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define len 20
char * 
s_gets(char *,int,FILE*);

int 
main(void)
{
    char string[len];
    char * w;
    while(s_gets(string,len,stdin) != NULL &&string[0]!='\0'){

    puts(string);
    }
    return 0;
}
char *
s_gets(char * des,int limit,FILE * source)
{
    char * find,* ret_val;
    ret_val=fgets(des,limit,source);
    if (ret_val) 
    {
        find=strchr(des,'\n');

        if(find)
        {
            *find='\0';
        }
 
    }
    else 
    {
        while(getchar()!='\n')
        {
            continue;
        }
    }
    return ret_val;
    
    
    
}