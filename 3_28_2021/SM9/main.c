#include <stdio.h>
#include <stdlib.h>


union Is{

    float maas; //4 byte
    int TC_no;

}j;

int main()
{
    j.maas = 100;

    j.TC_no = 100;

    printf("Maas : %f\n ", j.maas);
    printf("No : %d \n", j.TC_no);


}
