#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER THE SIZE OF ARRAY=");
    scanf("%d",&n);
    int x[n],y[n],z[n],c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
       
    }
    int k=0,l=0;
    for(i=0;i<=n-1;i++)
    {
        if(x[i]%2==0)
      { y[k]=x[i];
        k++;
      }
        else
        { z[l]=x[i];
          l++;  
        }
        }
    for(i=0;i<k;i++)
    {
        printf("even array= %d\n",y[i]);
    }
    for(i=0;i<l;i++)
    {
        printf("odd array=%d\n",z[i]);
    }
    return 0;
    }