#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add ();
extern int a=2;
int main()
{
	
	char * string={"hello world"};
	printf("%s\n",string);
	printf("%c",*strchr(string,'w'));
	add();
	printf("%d",a);
	return 0;
}


	
