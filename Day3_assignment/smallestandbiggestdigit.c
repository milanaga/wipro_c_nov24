//program to find smallest and biggest digits in give number

#include<stdio.h>

int main(){
    int number = 0;
    int digit = 0;
    int smallest_digit = 9;
    int biggest_digit = 0;

    printf("enter the number: ");
    scanf("%d", & number);

    while(number != 0)
    {
        digit = number % 10;
    if (digit < smallest_digit)
    {
        smallest_digit = digit;
       
    }
    if(digit > biggest_digit)
    {
         biggest_digit = digit;
    }
    number = number / 10;
    }
printf("smallest_digit is %d", smallest_digit);
printf("Biggest_digit is %d", biggest_digit);

}



/*while(number == 0)
    {
        printf("Both smallest and biggest digit is 0");
    }*/