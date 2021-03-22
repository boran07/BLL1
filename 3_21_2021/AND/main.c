#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = 1;  //x = 1  (0000 0001)
    char y = 2;  //y = 2  (0000 0010) ^
                //output =(0000 0011) = 3

    //Bitwise operator
    printf("%d\n", x^y); // 2

    //Logical operator
    printf("%d\n", x&&y); // T && T = TRUE && TRUE = 1


}
