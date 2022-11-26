#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

/* in this file, I'm going to paratice the I/O
 in Unix environment provided by c*/
/* test the use of functions such as 
scanf,
gets,
getc,
fgets,
puts,
putc,
fputs*/

/*int get(char * string,FILE * pfile);

int 
get(char * string,FILE * pfile)
{  
    

}*/
int main(){
    char * fgets_str;
    char * gets_str;
    int a,b,c;
    char d;
    char *e;
    fgets_str=(char*)malloc(21*sizeof(char));
    gets_str=(char *)malloc(21*sizeof(char));
    fgets(fgets_str,20,stdin); 
    gets(gets_str);
    printf("fgets\n");
    printf("%s",fgets_str); 
    fputs(fgets_str,stdout);/*fgets will add \n to array while gets don't */
    puts(fgets_str);/* puts add a '\n' while fputs don't */
    printf("gets\n");
    printf("%s",gets_str); 
    fputs(gets_str,stdout);/*fgets will add \n to array while gets don't */
    puts(gets_str); 
    return 0;
    /*the output is:

    fgets_str
    warning: this program uses gets(), which is unsafe.
    gets_str
    fgets
    fgets_str
    fgets_str
    fgets_str

    gets
    gets_strgets_strgets_str

    */

}

char *
s_gets(char *st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin); //as said before fgets will add \n to char array

    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
        {
            *find='\0';
        }
        else
        {
            while(getchar()!='\n') 
            {
                continue;
            }
        }
    }
    return ret_val; 
}
