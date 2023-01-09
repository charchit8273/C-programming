#include<stdio.h>
int main()
{
    int n,i;
    printf("enter array size=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int t=x[0];
    for(i=0;i<n;i++){
        x[i]=x[i+1];
    }
        x[n-1]=t;

    
    printf("array after left rotation=\n");
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    return 0;

}