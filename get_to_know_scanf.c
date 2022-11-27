#include<stdio.h>
/* scanf is a complex function that really brothered 
you for really really a while*/
/* and you have to solve it 
after that, you will feel released */

/* the most confusing thing I've learned about scanf 
(scan format) is that it leaves '\n' in the buffer 
so if i wanna use fgets or getchar after using scanf
I would probably add a extra addchar() in the new line 
which will cosume the '\n' char scanf leaves */
/* like scanf, printf also is short for "print format"
it accepts deciaml in it's format specifier while scanf doesn't
and I think it's the most defusing difference between them
*/
/*
scanf:
A format specifier for scanf follows this prototype:
%[*][width][length]specifier

printf:
A format specifier follows this prototype:
%[flags][width][.precision][length]specifier
*/
int main(void)
{
    /*double sum,v;
    while(scanf("%lf",&v)==1)
    {
        printf("%.2f\n",sum+=v);
    }*/

    int day,year,month;
    double hey;
    char c;
    char monthname[20];
    /*scanf("%lf",&hey);
    printf("%15.5lf\n",hey);*/
    int re;
    /*re=scanf("%d d%d d%d",&day,&year,&month);

    printf("%d\n",re);
    printf("%d %d %d\n",day,year,month);*/
    re=scanf("%d",&day);
    printf("%d\n results=%d\n",day,re);
    printf("%c",getchar());
    printf("%c\n",getchar());

   

   
    
    return 0;
    
}