#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("enter array size=");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
	scanf("%d",&x[i]);
	}
	for(j=0;j<n;j++)
	{
	for(i=0;i<n-1;i++)
	{
		if(x[i]>x[i+1])
		{
			c=x[i];
			x[i]=x[i+1];
			x[i+1]=c;
		}
	}
	}
	printf("smallest element in the array=%d\n",x[0]);
    printf("largest element in the array=%d\n",x[n-1]);
    int d=x[0];
        x[0]=x[n-1];
        x[n-1]=d;
        printf("smallest element after swap=%d\n",x[0]);
        printf("largest value after swap=%d\n",x[n-1]);
        for(i=0;i<n;i++){
            printf("%d\n",x[i]);
        }
	
	return 0;
}