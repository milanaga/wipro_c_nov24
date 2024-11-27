// Check if an alphabet is lower case

#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (islower(ch)) {
        printf("'%c' is an lowercase letter.\n", ch);
    } else {
        printf("'%c' is not an lowercase letter.\n", ch);
    }
}