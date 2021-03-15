#include <stdio.h>
#include <stdlib.h>

int main()
{

    char satir[255];

    FILE * fpointer = fopen("calisanlar.txt", "r");


    fgets(satir, 255, fpointer);
    printf("%s", satir);

    fgets(satir, 255, fpointer);
    printf("%s", satir);

    fgets(satir, 255, fpointer);
    printf("%s", satir);


    fclose(fpointer);



    return 0;
}
