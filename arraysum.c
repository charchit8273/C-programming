#include<stdio.h>
int main()
{
    int n,i,sum=0;
    
     printf("enter array size=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        printf("value of element entered=%d\n",x[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
   }
    printf("sum=%d\n",sum);
    

    return 0;
}