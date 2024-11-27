// To find the nth prime number


#include <stdio.h>

int main() {
    int n, count = 0, num = 2, nthPrime;

    printf("Enter the value of n to find the nth prime number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (count < n) {
        int isPrime = 1; // Assume the number is prime

        // Check if the current number is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, not prime
                break;
            }
        }

        if (isPrime) {
            count++; // Increment the count of primes found
            if (count == n) {
                nthPrime = num; // Store the nth prime
            }
        }

        num++; // Check the next number
    }

    printf("The %dth prime number is %d.\n", n, nthPrime);

    return 0;
}
