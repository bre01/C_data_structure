#include<stdio.h>
int main(void){
	FILE * pfile;

	pfile=fopen("floyd.c","r");
	return putc(10,pfile);

}

