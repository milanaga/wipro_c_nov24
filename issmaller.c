//Check IF A LETTER IS SMALLER

#include<stdio.h>
#include<ctype.h>

int main(){
    char ch = 0;
    printf("Enter the letter to check whether it is a small letter: ");
    scanf("%c", & ch);

    if(islower(ch)){
        printf("'%c' is a small letter", ch);
    }
    else{
        printf("'%c' is not a small letter", ch);
    }
    }