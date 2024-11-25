//To print a table one at a time

/*#include<stdio.h>
#include<stdlib.h>

int main(int argcount, char *args[]){
    int input_number = atoi(args[1]);

    for(int i=1; i<=10 ;i++){
        printf("%d * %02d = %03d\n", input_number, i , input_number * i);

    }
}*/

/*#include<stdio.h>
 int main(){
    int number = 0;
    printf("enter the table number to print: ");
    scanf("%d", &number);

    for(int i=1; i<=10; i++){
      printf("%d * %02d = %03d\n", number, i , number * i);
    }
 }
 */



 // to print a table two at a time
 #include<stdio.h>
#include<stdlib.h>

int main(int argcount, char *args[]){
    int input_number1 = atoi(args[1]);
    int input_number2 = atoi(args[2]);

    for(int i=1; i<=10 ;i++){
        printf("%d * %02d = %03d\t %d * %02d = %03d\n", input_number1, i , input_number1 * i, input_number2, i , input_number2 * i);

    }
}