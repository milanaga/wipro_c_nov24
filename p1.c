#include <stdio.h>

int main() {
    char weather1, weather2, weather3;


    printf("Enter the first weather condition (r for raining, s for sunny, c for cloudy): ");
    scanf(" %c", &weather1);
    printf("Enter the second weather condition (r for raining, s for sunny, c for cloudy): ");
    scanf(" %c", &weather2);
    printf("Enter the third weather condition (r for raining, s for sunny, c for cloudy): ");
    scanf(" %c", &weather3);

    if ((weather1 == 's' && weather2 == 's' && weather3 != 'r' && weather3 != 'c') || 
        (weather1 == 's' && weather2 == 'r' && weather3 != 'c')) {
        printf("You can go out.\n");
    } else {
        printf("You cannot go out.\n");
    }

}