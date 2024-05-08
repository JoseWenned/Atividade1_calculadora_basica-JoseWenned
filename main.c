#include<conio.h> // library responsable by input and output
#include<stdlib.h>
#include<stdio.h>

float number1, number2, sum, sub, product, division;

int option;

int main(){

    do{

        printf("type it first number = "); // printf command input 
        scanf("%f",&number1); // scanf command output

        printf("type it second number = ");
        scanf("%f",&number2); // %f references a number

        sum = number1 + number2;
        sub = number1 - number2;
        product = number1 * number2;
        division = number1 / number2;

        printf("sum = %.2f\n", sum); // %.2f\n references a number with "1,00"
        printf("sub = %.2f\n", sub);
        printf("product = %.2f\n", product);
        printf("division = %.2f\n", division);

        printf("Want continues ? Type it 1 - yes or 2 - no\n"); // "\n" smash line

        scanf("%i",&option);

    } while(option==1);

    system("pause"); // responsable by stop function and return response
    return 0; // responsable return result

}