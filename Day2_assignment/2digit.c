//Check if a number is 2 digit number

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99) {
        printf("%d is a two-digit number.\n", num);
    } else if (num <= -10 && num >= -99) {
        printf("%d is a two-digit number.\n", num);
    } else {
        printf("%d is not a two-digit number.\n", num);
    }
}