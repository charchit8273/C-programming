#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter rows of array=");
    scanf("%d",&r);
    printf("enter coloumn of array=");
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
    return 0;
}