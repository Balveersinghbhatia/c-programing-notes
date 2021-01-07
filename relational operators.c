// aim: TO make a program using relational operator
// date: Jan 7 2021
// name: Balveer singh
// enrolment no: co-20-017
#include<stdio.h>
void main()
{ int a,b;
printf("Please enter two integers: \n");
scanf("%d %d",&a,&b);
/*if else using relation operator*/
if(a!=b) //not equal to operator
    printf("Both integers are not equal \n");
if (a>b) // bigger than operator
    printf("%d is bigger than %d \n",a,b);
else if (b>a) // less than operator
    printf("%d is bigger than %d \n",b,a);
else if (a==b) //equal to operator
    printf("both integers are equal \n");

}