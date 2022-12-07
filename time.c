
// C program to demonstrate
// example of time() function.
#include <stdio.h>
#include <time.h>
#include<unistd.h>
 
int main ()
{
    double seconds;
    time_t a=time(NULL);
    sleep(10);
    printf("%ld,%ld\n \n",time(&a),time(NULL));
    seconds = time(NULL);
    printf("Seconds since January 1, 1970 = %f\n", seconds/(126227808/4));
    printf("%p",__DARWIN_NULL); 
    return(0);
}