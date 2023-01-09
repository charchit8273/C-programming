#include<stdio.h>
int main(){
    int i,j,r,c,sum=0;
    printf("enter no of rows in array=");
    scanf("%d",&r);
    printf("enter no of coloumns in array=");
    scanf("%d",&c);
    int x[r][c];
    float avg;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum=sum+x[i][j];
             printf("sum of all elements=%d\n",sum);
        }
    }
   
    return 0;
    }