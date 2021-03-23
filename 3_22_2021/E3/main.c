#include <stdio.h>
#include <stdlib.h>

//bir windows application : BUTTON ---> BOLD / ITALIC / UNDERLINE

enum designFlag{

    BOLD = 1,
    ITALIC = 2,
    UNDERLINE = 4,

};


int main()
{
    int benimYazim = BOLD | ITALIC;

                //     0000 0001
                //  |  0000 0101
                //    ___________
                //     0000 0101

    printf("%d", benimYazim);


    return 0;
}
