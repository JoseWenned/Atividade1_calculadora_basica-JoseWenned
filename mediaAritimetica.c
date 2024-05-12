#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

float num1, num2, num3, num4, num5, media;

int option;

int main(){

    do{

        printf("Type it numer1 = \n");
        scanf("%f", &num1);

        printf("Type it numer2 = \n");
        scanf("%f", &num2);

        printf("Type it numer3 = \n");
        scanf("%f", &num3);

        printf("Type it numer4 = \n");
        scanf("%f", &num4);

        printf("Type it numer5 = \n");
        scanf("%f", &num5);

        media = (num1 + num2 + num3 + num4 + num5)/5;

        printf("media=%.2f\n",media);

        if(media>=6){
            printf("approved\n");
        }else if (media>4 && media<6){
            printf("recovery\n");
        }else printf("disapproved\n");

        printf("type it for continue 1 - yes or 2 - no?\n");

        scanf("%i",&option);

    }while(option==1);

    system("pause");
    return 0;

}