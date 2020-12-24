// aim: to write a program using bitwise operator
// name: balveer singh
// enrolment no: CO-20-017
// date: 24 dec 2020
void main()
{
    int a,b;
    printf("Enter two integers: \n"); 
    scanf("%d%d",&a,&b);
    int c= a&b;
    printf("bitwise and on a and b is %d \n",c); 
    c= a | b ;
    printf("bitwise OR on a and b is %d \n",c);
    c= ~a;
    printf("bitwise complement/ unary on a is %d \n",c);
    c= a ^ b;
    printf("bitwise Exclusive OR on a and b is %d \n",c);
    c = a << 2;
    printf("bitwise shift left on a by 2 is %d \n",c);
    c = a >> 2;
    printf("bitwise shift reft on a by 2 is %d \n",c);

}
// for knowing what is happening you should have the knowledge of bitwise operators
// For char the value is 8 bit 
// For int the value is 