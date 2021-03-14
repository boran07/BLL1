#include <stdio.h>
#include <stdlib.h>

int main()
{

    char KarakterIsmi[] = "Mehmet";
    char KarakterIsmi2[] = "Ali";
    int  Yas = 35;
    char Spor_dali[] = "basketball";


    printf(" bir Adam var adi %s\n" ,KarakterIsmi);
    printf(" %s %d yasinda\n" ,KarakterIsmi, Yas);
    printf(" %s cok seviyor\n" ,Spor_dali );


    printf(" bir Adam var adi %s\n" ,KarakterIsmi);
    printf(" %s %d yasinda\n" ,KarakterIsmi, Yas);
    printf(" %s cok seviyor\n\n\n" ,Spor_dali );

    Yas = 24;

    printf(" bir Adam var adi %s\n" ,KarakterIsmi2);
    printf(" %s %d yasinda\n" ,KarakterIsmi2, Yas);
    printf(" %s cok seviyor\n" ,Spor_dali );

    printf(" bir Adam var adi %s\n" ,KarakterIsmi2);
    printf(" %s %d yasinda\n" ,KarakterIsmi2, Yas);
    printf(" %s cok seviyor\n" ,Spor_dali );

    return 0;
}
