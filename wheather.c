// Declare 3 character variables and accept values, raining=r sunny=s cloudy=c
//Allow the person to go out only if it is:
//	1. only sunny
//	2. sunny and raining

#include <stdio.h>

int main() {
    char raining, sunny, cloudy;

    // Accept values for weather conditions
    printf("Is it raining? Enter 'r' for yes or 'n' for no: ");
    scanf(" %c", &raining);

    printf("Is it sunny? Enter 's' for yes or 'n' for no: ");
    scanf(" %c", &sunny);

    printf("Is it cloudy? Enter 'c' for yes or 'n' for no: ");
    scanf(" %c", &cloudy);

    // Check conditions to decide if the person can go out
    if (sunny == 's' ){
        printf("You can go out because it's sunny.\n");
    } else if (sunny == 's' && raining == 'r') {
        printf("You can go out because it's sunny and raining.\n");
    } else {
        printf("You should not go out.\n");
    }

    return 0;
}
