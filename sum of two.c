// program to add two numbers by external function
#include<stdio.h>
int pratikpopat(a,b)
{
    int sum=a+b;
    printf("the sum of two number %d and %d is %d \n",a,b,sum);
}

int main()
{
  int x,y;
  printf("enter two integers :");
  scanf("%d",&x);
  scanf("%d",&y);
    pratikpopat(x,y);
    return 0;
}