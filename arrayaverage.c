#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float average;
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
    average=sum/n;
    printf("average=%.2f",average);

    return 0;
}