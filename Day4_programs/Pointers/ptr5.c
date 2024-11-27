#include<stdio.h>
int main(){
int num1 = 50;
int num2 = &num1;
printf("%d %d %d %d\n", num1-1, num1, num1+1,num1+2);  // 49, 50, 51, 52
printf("%d %d %d %d \n", num2-1, num2, num2+1, num2+2); // 199, 200, 201, 202.....why bcoz even though num 2 is getting address value as input but the data type is int it can't store address so it will covert into number 
}