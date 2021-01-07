// aim : to make a program using if-else if ladder
// date : 7 jan 2021
int main()
{
    /*write a program to find maximum out of three numbers*/
int first,second,third;
printf("Please enter first integer: \n");
scanf("%d",&first);
printf("Please enter second integer: \n");
scanf("%d",&second);
printf("Please enter third integer: \n");
scanf("%d",&third);
// i know it can be done in one line though
if (first>second)
    if (first>third)
        printf("First integer %d is the biggest",first);
    else if (first==third)
        printf("Both first and third are biggest");
    else
        printf("Third  integer %d is biggest ",third);
else if (second>first)
    if (second>third)
       printf("second integer %d is the biggest",second);
    else if (second==third)           
       printf("Both second and third are biggest \n");
    else 
         printf("Third  integer %d is biggest ",third);
       
else if (first==second)
    if (first>third)
        printf("Both first and second are biggest \n");
    else
        printf("Third is biggest \n");
                
}       