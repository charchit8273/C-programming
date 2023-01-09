#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
            }
    int c=0,d=0,e=0;
    for(i=0;i<n;i++){
        if(x[i]>0)
        c++;
        else if(x[i]<0)
        d++;
        else if(x[i]=0)
        e++;
    }
    printf("number of positive element=%d\n",c);
    printf("number of negative element=%d\n",d);
    printf("number of zero element=%d\n",e);

    return 0;
}