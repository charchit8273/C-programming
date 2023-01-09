#include<stdio.h>
void add(){
int x,y,sum;
printf("Enter the First number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
sum=x+y;
printf("sum:%d\n",sum);
}
void multiply(){
int x,y,mult;
printf("Enter the First number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
mult=x*y;
printf("Multiply:%d\n",mult);
}
void divide(){
int x,y,div;
printf("Enter the First number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
div=x/y;
printf("divide:%d\n",div);
}
void subtract(){
int x,y,sub;
printf("Enter the First number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
sub=x-y;
printf("divide:%d\n",sub);
}
void main(){
    int o;
    printf("CHOOSE the NUMBER:\nADD:1\nSUBTRACT:2\nMULTIPLY:3\nDIVIDE:4\n");
    scanf("%d",&o);
    switch(o)
    {case 1:
    add();
    break;
    case 2:
    subtract();
    break;
    case 3:
    multiply();
    break;
    case 4:
    divide();
    break;
    default :
    printf("INVALID!");
}
}



