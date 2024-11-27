#include<stdio.h>
int mian(){
int num1 = 50;
int *num2= num1;
printf("%d %d %d %d\n", num1-1, num1, num1+1,num1+2);  // 49, 50, 51, 52
printf("%d %d %d %d \n", num2-1, num2, num2+1, num2+2);  // 46, 50, 54, 58......why bcoz *num2 can only store address so it is converting number into address so it's taking 4 bytes.
}