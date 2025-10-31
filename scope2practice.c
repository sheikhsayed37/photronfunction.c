#include <stdio.h>


int sum()
{
    int y=199;
    printf("sum -> %d",y); 
}


int main()
{
    int y=200;

    printf("main -> %d\n",y);
     sum();                        
    return 0;
}