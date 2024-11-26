#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d elements of type float:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%f ", arr[i]);
    }
    printf("\n");

    return 0;
}
