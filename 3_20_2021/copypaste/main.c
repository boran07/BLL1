#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    char text_1[MAX_SIZE], text_2[MAX_SIZE]; //[0][1] [2]
    char * str1 = text_1;
    char * str2 = text_2;

    //Kulancidan input al text 1'in icine save et.
    printf("Kelime gir\n");
    gets(text_1);

    //Text1 den text 2 ye pointer uzerinden koyala ve yapistir
    while(*(str2++) = *(str1++));
    //strcpy(text_2,text_1);


    //iki outputu konsolda cikar (text1/text2)

    printf("Ilk kelime(text1): %s\n", text_1);
    printf("Ilk kelime(text2): %s\n", text_2);




    return 0;
}
