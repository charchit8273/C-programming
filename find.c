#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int a,f=0,c=0;
    printf("element to be found=");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(x[i]==a)
        {
            c= i;
            f=1;
            break;
        }
    
    }
    if(f){
        printf("Element found at index=%d ",c);
        
    }
    else {
    printf("Not found");

    return 0;
    }