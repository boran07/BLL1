#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i ,*ptr , toplam = 0;

    printf("Kac sayi toplamak istiyorsun: \n");
    scanf("%d", &n);

    ptr = (int*) calloc(n * sizeof(int));

    ////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////
    printf("Toplamak istedigin sayilari gir: \n");
    for(i = 0; i < n ; i++){


            scanf("%d", ptr + i);
            toplam += *(ptr + i);
    }

    printf("Toplam = %d", toplam);

    free(ptr);


}
