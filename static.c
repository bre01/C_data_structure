#include<stdio.h>
#include<stdlib.h>
void foo() {
static int c = 0;
  printf("%d,", c);
  c ++;
}
int main(){
foo(); 
foo(); 
foo();
foo();
return 0;
}
