#include<stdio.h>
int main()
{
    int i,sum=0;
    int pratik[10];
    for(i=0;i<10;i++)
    {
        printf(" \n pratik[%d]=",i);
        scanf("%d",&pratik[i]);
    }
    for(i=0;i<10;i++)
    {
        printf(" \n pratik[%d]= %d \n ",i,pratik[i]);
    }
    for ( i=0;i<10;i++)
    {
    sum=sum + pratik[i];
    }
    printf("sum of all elements in arrays is %d \n",sum);
   int average= sum / 10;
   printf(" average is %d ",average);
    return 0;
}