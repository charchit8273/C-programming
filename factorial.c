#include<stdio.h>
long int fact(int x)
{
    if(x>=1)
    {
        return x*fact(x-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
     int a,x;
    printf("enter any no=");
    scanf("%d",&a);
    x=fact(a);
    printf("factorial=%ld",x);
}