#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
     }
     int a;
     printf("enter element to insert=");
     scanf("%d",&a);
     int pos;
     printf("enter position at which you want to insert element=");
     scanf("%d",&pos);
     n++;
     for(i=n;i>=pos;i--){
        x[i]=x[i-1];
         }
         x[pos-1]=a;
     printf("array after insertion=\n");
     for(i=0;i<n;i++){
        printf("%d\n",x[i]);
     }
         
    return 0;
}