//CONVERT A upper CASE LETTER TO lower CASE LETTER

#include<stdio.h>
#include<ctype.h>

int main(){
    char letter = 0;
    printf("enter the letter to convert into lower case: ");
    scanf("%c", & letter);
    char lowercase = tolower(letter);
    printf("%c\n", lowercase);
    }
