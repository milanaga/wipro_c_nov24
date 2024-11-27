#include<stdio.h>
int main() {
double d =2.22;
char ch = 'A';
printf("%u %u %u %u \n", &d-1, &d, &d+1, &d+2);  // size of doubble is 8 so if address is 200 then the d will be 200 d-1 = 192, d+1 = 208, d+2 = 216
printf("%u %u %u %u \n", &ch-1, &ch, &ch +1, &ch+2);//size of char is 1 byte so if the address of ch is 200 then ch = 200; ch-1 = 199; ch+1 = 201, ch+2 = 202
}