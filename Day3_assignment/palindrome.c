//Cprogram to check the given number is palindrome or not 

#include <stdio.h>

int main() {
    int num;
    int reversedNum = 0;
    int remainder_digit, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num; 

    while (num != 0) {
        remainder_digit = num % 10;                
        reversedNum = reversedNum * 10 + remainder_digit; 
        num =num / 10;                           
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}
