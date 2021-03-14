#include <stdio.h>
#include <stdlib.h>

int main()

{
     int numaralar[5][2] = {

                        {1,2},
                        {3,4},
                        {5,6},
                        {7,8},
                        {9,10}

                        };

    int i, j;
    char a = '}';
    char b = '{';

    for(i = 0; i < 5 ; i++){

        printf("%c",b);

        for(j = 0; j < 2; j++){
                printf("%d," ,numaralar[i][j]);

        }
        printf("%c",a);
        printf("\n");

    }



    return 0;


}
