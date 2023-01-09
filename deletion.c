#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of an array=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int pos;
    printf("enter position of element you want to delete=");
    scanf("%d",&pos);
    if(pos>n){
        printf("deletion is not possible");
    }
    else
    {
        for(i=pos-1;i<n-1;i++){
            x[i]=x[i+1];
        }
    
    printf("array after deletion=");
    for(i=0;i<n-1;i++){
        printf("%d\n",x[i]);
    }
    }
    return 0;
    }