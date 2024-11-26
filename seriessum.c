  //n + n(square) + n (cube) + upto M terms
 
#include <stdio.h>
#include <math.h>
int main() {
    int termValue;
    int numberOfTerms;
    int sumOfTerms = 0;
    printf("enter the value of termValue \n");
    scanf("%d", & termValue);
    printf("enter the value of numberOfTerms\n");
    scanf("%d", & numberOfTerms);
    
    for (int i = 1; i <= numberOfTerms; i++) {
        sumOfTerms += (int)pow(termValue, i);  
    }
    
    printf("sum of the series is %d", sumOfTerms);
}