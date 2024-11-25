// CHECK IF A CHARCTER IS ALPHANUMERIC


#include <stdio.h>
#include <ctype.h>
int main()
 {
    char ch = 0;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalnum(ch)) 
    {
        printf("'%c' is alphanumeric.\n", ch);
    } else {
        printf("'%c' is not alphanumeric.\n", ch);
    }
}	
