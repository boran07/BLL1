#include <stdio.h>
#include <stdlib.h>


/*
    *kulanicidan input alalim santrigrat olarak
        -santigrat degiskeninin icine save et
    *forumulu kulan
        - ya fonksyon, yada main'in icine
    *konsala santigrat ile Faranhayt sonucu print edelim



*/



int main()
{

    float santigrat , Fahrenhayt;

    //kulanicidan input alalim santrigrat olarak

    printf("Santigrat olarak sicakligi gir: \n");
    scanf("%f", &santigrat);
    //*forumulu kulan
    Fahrenhayt = (santigrat * 9/5) + 32;

    printf("\n %.2fC = %.2f F \n ", santigrat, Fahrenhayt);



    return 0;
}

