//CONVERT A SMALL CASE LETTER TO UPPER CASE LETTER

#include<stdio.h>
#include<ctype.h>

int main(){
    char letter = 0;
    printf("enter the letter to convert into upper case: ");
    scanf("%c", & letter);
    char uppercase = toupper(letter);
    printf("%c\n", uppercase);
    }
