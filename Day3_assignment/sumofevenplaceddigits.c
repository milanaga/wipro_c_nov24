//PROGRAM to find sum of even placed DIGITS IN NUMBER

#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    int digit =0;
    int position = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
        
        if (num < 0) {
            num = -num;
        }

        while (num > 0) {
            digit = num % 10; 
            if(position %2 == 0){
                 sum = sum + digit;
                   
            }
           num = num / 10;
         position++;
        }
    
    printf("sum of even placed digits: %d\n", sum);

}