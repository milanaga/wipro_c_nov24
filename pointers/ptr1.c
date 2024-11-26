#include<stdio.h>

int main() {

    float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

    printf("%u %u %u %u\n", fArray, fArray+1, fArray-1, fArray+2);

    printf("%.2f  %.2f  %.2f  %.2f\n", *fArray, *fArray+1, *fArray + *fArray);

    printf("%u %u %u %u\n", &fArray, &fArray+1, &fArray-1, &fArray+2);

}

/* fArray means address of 1st element 

&fArray address of whole array 

*/
