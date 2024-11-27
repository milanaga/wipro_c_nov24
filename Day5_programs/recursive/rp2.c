#include <stdio.h>

int sumOfDigits(int number) {
    if (number == 0) { 
        return 0;
    }
    return (number % 10) + sumOfDigits(number / 10); 
}

int main() {
    int input_number;
    
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &input_number);

    printf("The sum of the digits is: %d\n", sumOfDigits(input_number));

    return 0;
}
