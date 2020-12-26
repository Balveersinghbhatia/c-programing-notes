// date: 22 dec
// name : balveer singh
// roll no: co-20-017
// aim: to increase and decrease value of variable

void main()
{
    int a=10 , b= 1;
    printf("The value of a and b before increment is %d and %d respectively \n",a,b);
    // now incrementing a and assigning that value to b
    b = ++a;
    printf("The value of a and b after increment by 1 is %d and %d respectively \n",a,b);
    printf("we also assigned increased value of a to b so a and b are same \n");
    // now decrementing a and assigning that value to b
    b = --a;
    printf("The value of a and b after decrement by 1 is %d and %d respectively \n",a,b);
}