//CHECK IF A NUMBER IS PERFECT SQUARE

#include <stdio.h>
#include <math.h>

int main() {
int num = 0;
int squareroot= 0;
printf("Enter the number \n");
scanf("%d", &num);
squareroot = sqrt(num); 
    if (squareroot * squareroot == num)
	{
        printf("%d is a perfect square.\n", num);
    } else 
	{
        printf("%d is not a perfect square.\n", num);
    }
	}