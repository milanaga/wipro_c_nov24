// CHECK IF A CHARCTER IS DIGIT

#include <stdio.h>
#include <ctype.h>
int main()
 {
    char ch = 0;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) 
    {
        printf("'%c' is digit.\n", ch);
    } else {
        printf("'%c' is not digit.\n", ch);
    }
}	
