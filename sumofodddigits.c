//FIND THE SUM OF ODD DIGITS

#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    int digit =0;
    printf("Enter an integer: ");
    scanf("%d", &num);
        
        if (num < 0) {
            num = -num;
        }

        while (num > 0) {
            digit = num % 10; 
            if(digit%2 != 0){
                 sum = sum + digit;
            }
           num = num / 10;
        }
    
    printf("Number of odd digits: %d\n", sum);

}