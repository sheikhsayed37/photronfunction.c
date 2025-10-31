#include <stdio.h>
int x=1000;

int sum()
{
    printf("sum -> %d",x); 
}




int main()
{
    printf("main -> %d\n",x);
    sum();
    return 0;
}