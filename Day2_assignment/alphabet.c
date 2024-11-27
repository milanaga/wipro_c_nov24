// CHECK IF A CHARACTER IS ALPHABET

#include <stdio.h>
#include <ctype.h>
int main()
 {
    char ch = 0;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) 
    {
        printf("'%c' is alphabet.\n", ch);
    } else {
        printf("'%c' is not alphabet.\n", ch);
    }
}	