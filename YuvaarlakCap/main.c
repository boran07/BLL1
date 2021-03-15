#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    *kulanicidan input olarak yarim capi al

    *sirayla Yuvarlagin capini , cevresini ve yuzolcumunu hesapla
        - cap = 2 * yarimcap;
        - cevre = 2 * M_PI * yarimcap
        - yuzolcumu = M_PI * yarimcap^2
    *Sonucalari konsola yaz
        - printf

*/

int main()
{
    float yarimcap, cap ,cevre , yuzolcumu;

    //kulanicidan input olarak yarim capi al

    printf("Yuvarlagin yarimcapini gir\n");
    scanf("%f", &yarimcap);

    //sirayla Yuvarlagin capini , cevresini ve yuzolcumunu hesapla
        cap = 2 * yarimcap;
        cevre = 2 * M_PI * yarimcap;
        yuzolcumu = M_PI * (yarimcap * yarimcap);
    //Sonucalari konsola yaz
    printf(" Cap = %.2f\n", cap);
    printf(" Cevre = %.2f\n", cevre);
    printf(" Yuzolcumu = %.2f\n",yuzolcumu );


    return 0;
}
