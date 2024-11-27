#include<stdio.h>
 int main()
 {
 float num = 5.5f;
 printf("value of num = %f\n",num);
 printf("address of num = %p %u\n", &num, &num);    //%p gives hexadecimal value but %u gives decimal both are same 
 printf("value at address of num  = %f\n", *(&num));
 }