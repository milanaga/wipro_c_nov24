//Check if an alphabet is upper case

#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("'%c' is an uppercase letter.\n", ch);
    } else {
        printf("'%c' is not an uppercase letter.\n", ch);
    }
}