// Aim practical 14: formatted option
// date: 10 dec 2020
// enrolment no: co-20-017
// name: balveer singh
// formated option are used in C to beautify the output 
void main()
{
    int a=22;
    float b=33;
printf("Value of a= %15d \n ",a);
// when we format %d by any value it writes it away by given value
printf("value of a=%d without formatting options \n",a);
printf("Value of b=%.3f \n",b);
printf("Value of b=%f without formatting options \n",b);
}