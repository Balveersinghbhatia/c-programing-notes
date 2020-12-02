//program to swap value of two variables using third variable
int main()
{
    int first,second;
    printf("enter two integers: \n");
    scanf("%d%d",&first,&second);
    
    swapping(first,second);
return 0;
}
// external program to do the swap values 
int swapping(a,b)
{ int c;
    
    printf("values before swapping : first = %d and second = %d \n",a,b);
    c = a;
    a = b;
    b = c ;
printf("values after swapping : first = %d and second = %d \n",a,b);
}
/*#include <stdio.h>

 

int main()
{
    int a , b  , temp ;
    printf("enter value of a and b") ;
    scanf("%d %d" , &a, &b); 
    
    temp = a; 
    a = b;  
    b= temp ;
    
    
    printf("New value of a is %d and b is %d" , a ,b); 
    return 0;
}*/
