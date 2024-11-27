#include <stdio.h>
#include<stdlib.h>

int main( int argcount, char* args[])
{
 double input_num1 = atof(args[1]);
 double input_num2 = atof(args[2]);

 printf("Before swapping numbers are %.2f and %.2f\n", input_num1, input_num2);

double swapNumbers(double input_num1, double input_num2);
double temp = 0;
temp = input_num1;
input_num1 = input_num2;
input_num2 = temp;

printf("After swapping numbers are %.2f and %.2f\n", input_num1, input_num2);
return 0;
}
