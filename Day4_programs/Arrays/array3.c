#include <stdio.h>

int main() {
    int n, target, frequency = 0;

    printf("Enter the size of the array (N): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of type int:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }

    printf("The frequency of %d is: %d\n", target, frequency);

    return 0;
}
