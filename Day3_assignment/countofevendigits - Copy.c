//PROGRAM TO COUNT  EVEN DIGITS IN NUMBER

#include <stdio.h>

int main() {
    int num = 0;
    int count = 0;
    int digit =0;
    printf("Enter an integer: ");
    scanf("%d", &num);
        
        if (num < 0) {
            num = -num;
        }

        while (num > 0) {
            digit = num % 10; 
            if(digit%2 == 0){
                 count++;
            }
           num = num / 10;
        }
    
    printf("Number of even digits: %d\n", count);

}