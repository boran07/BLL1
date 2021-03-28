#include <stdio.h>
#include <stdlib.h>

void degistir(int* n1, int* n2, int* n3)
{
    int temp1, temp2;

    temp2 = *n2;
    temp1 = *n1;

    *n1 = temp2; //27
    *n2 = *n3;   //45
    *n3 = temp1;  //9
}

int main()
{
        int num1 = 9, num2 = 27 , num3 = 45;


       degistir( &num1, &num2 , &num3);

        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);
        printf("num3 = %d\n", num3);
        return 0;

    return 0;
}
