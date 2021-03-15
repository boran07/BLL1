#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ASCII;

    //ASCII ile toplama

    char c1 ;
    printf("karekter gir:\n", ASCII);
    scanf(" %c" , &c1 );
    char c2 ;
    printf("ikinci karaekteri gir:\n", ASCII);
    scanf(" %c" , &c2 );
    char mat ;

    mat =  c1 + c2;

    printf("%c(%i) + %c(%i) = %c(%i)\n", c1,c1, c2 ,c2 ,mat, mat);

}
