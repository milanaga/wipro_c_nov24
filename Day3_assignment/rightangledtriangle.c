#include <stdio.h>

void printRightAngledTriangle(int height)
{
    for (int i = 1; i <= height; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*"); 
        }
        printf("\n"); 
    }
}

int main()
{
    int height;
    printf("Enter the height of the right-angled triangle: ");
    scanf("%d", &height);

    printRightAngledTriangle(height);

    return 0;
}
