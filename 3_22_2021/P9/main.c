#include <stdio.h>
#include <stdlib.h>

int main()
{
       int *p1,c;

       c = 4;

       //p1 adresi almaya calisiyor , ama c adresi
       // p1 = 4;  //yanlis

        //yanlis
        //*p1 = &c;

        p1 = &c;

        *p1 = c;

       printf("%p", p1);

       //0061FF18



}
