#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, flip_num;

    //Input al

    printf("Sayi gir: \n");
    scanf("%d", &num);

    flip_num = ~num;

    printf("Orjinal sayi: %d", num);
    printf("Degisen sayi: %d", flip_num);


}
