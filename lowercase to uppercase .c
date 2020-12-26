//aim: program to convert lowercase given by user to upper case
// Date: 15 dec 2020
// enrolment no: co-20-017
// name: balveer singh bhatia

void main()
{
char uppercase,lowercase;
int ascii;
printf("Enter a character value in lower case: \n");
scanf("%c",&lowercase);

ascii = lowercase - 32; // here as ascii is int so the lowercase's asciii value is counted 
uppercase = ascii;
printf("The value of %c in upper case is %c \n",lowercase,uppercase );
}
// here the logic is to first ask for a lower case value and then store its int value that is ascii in the 
// another variable here,ascii and then subtract 32 from int value and store its value in third variable
// here uppercase and then print its char value 
// all this can be done by even single variable
