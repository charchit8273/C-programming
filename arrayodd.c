#include<stdio.h>
int main(){
    int n,i;
    printf("ENTER THE SIZE OF ARRAY=");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        printf("value of element entered=%d\n",x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]%2!=0){
            printf("%d\n",x[i]);
        }
    }
    return 0;
}