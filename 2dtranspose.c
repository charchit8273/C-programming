#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("enter the number of rows=");
    scanf("%d",&r);
    printf("enter the number of coloumn=");
    scanf("%d",&c);
    int x[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    printf("transpose of an array \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",x[j][i]);
        }
        printf("\n");
    }
    return 0;
}