#include <stdio.h>

void sum()   // void means no return type
{
int a,b;
scanf("%d %d",&a,&b);
int ans=a+b;
printf("%d",ans);
}

int main()
{

 sum();
 return 0;
}