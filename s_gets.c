// my own implementation of a better way to get string from stdin
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * s_gets(char *st  ,int n );

int main(void){
    int n;
    char str[20];
    char * m;
    printf("how many characters your string contain:\n");
    scanf("%d",&n);
    if (getchar()=='\n')printf("i got it solved, the god damn scanf!! let's be happy\n");
    printf("enter the string you wanne me to repeat\n");
    while((m=s_gets(str,n))!=NULL && str[0]!='\0')
    {   
        fputs(str,stdout);
    }
    return 0; 
}
char *
s_gets(char *st,int n)
/*this functions reads string from stdin and stores it in first parameter (st) 
and returns it  
if it false it will return NULL 
also, after read string from stdin 
it searchs for '\n' character literal and replaces it with '\0'
(replace "new line" with "end of string")

(when will there be '\n' in the st? if the string input by stdin is not longer than the limit of fgets()
then there will be '\n', otherwise, there will be no '\n' in st which means there is '\n' left in buffer
and we need to clean the ramainder in the line and enter to next line)

after that 
it clean the stuff left in the buffer of this line
*/

{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin); //as said before fgets will add \n to char array
/* It stops when either (n-1) characters are read, 
the newline character is read, or the end-of-file is reached,
On success, the function returns the same str parameter */
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
        {
            *find='\0';
        }/*make the '\n' stored in array(string in this case) '\0' */
        else
        {
            while(getchar()!='\n') 
            {
                continue;
            }/* clear the line lost that can't  be read by fgets func */
        }
    }
    return ret_val; 
}
