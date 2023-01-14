#include<stdio.h>
int main(){
    int r,c,i,j,sum=0;
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of coloumn=");
    scanf("%d",&c);
    int x[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&x[i][j]);
        }}
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d",x[i][j]);
            } printf("\n");
        }
        for(i=0;i<r;i++){
            
            for(j=0;j<c;j++){
            
            sum=sum+x[i][j];
            } printf("sum of %d row=%d\n",i+1,sum);
        
        }
       
    

    return 0;
}