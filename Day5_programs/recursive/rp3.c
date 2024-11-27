#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) { 
        return 1;
    }
    if (n == 2) { 
        return 2;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series of %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
