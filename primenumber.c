// To check the number is prime number


#include<stdio.h>

int main(){
    int number = 0;
    int count = 0;
    int n;
    printf("enter the number to check whether it is a prime number: ");
    scanf("%d", & number);

for(int i = 1; i <= n; i++){
    if(number % i == 0){
        count ++;
    }
}
if ( count == 2){
    printf("%d is a prime number", number);
}
else{
    printf("%d is not a prime number", number);
}
}
