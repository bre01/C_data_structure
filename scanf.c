#include<stdio.h>

int main(){

    int val;
    char str[20];
    scanf("%d", &val);
    getchar();
    fgets(str,19,stdin);
    fputs(str,stdout);
    printf("%d\n", val);

    return 0;
}
