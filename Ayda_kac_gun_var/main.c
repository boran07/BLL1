#include <stdio.h>
#include <stdlib.h>

int i;

int main()
{


    int ay;


    menu: printf("Bir ay girin (1-12): \n");
    scanf("%d", &ay);

    switch(ay)
    {
        case 1:
            printf("31 gun");
            break;
        case 2:
            printf("28/29 gun");
            break;
        case 3:
            printf("31 gun");
            break;
        case 4:
            printf("30 gun");
            break;
        case 5:
            printf("31 gun");
            break;
        case 6:
            printf("30 gun");
            break;
         case 7:
            printf("31 gun");
            break;
        case 8:
            printf("30 gun");
            break;
         case 9:
            printf("31 gun");
            break;
        case 10:
            printf("30 gun");
            break;
         case 11:
            printf("31 gun");
            break;
        case 12:
            printf("30 gun");
            break;
        default:
            printf("Yanlis ay girdin\n\n");


    }
    goto menu;


    return 0;


}
