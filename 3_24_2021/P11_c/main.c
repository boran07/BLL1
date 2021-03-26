#include <stdio.h>
#include <stdlib.h>

//Pointerlarda yasak olan islemler


char * ptr = "Hello World"; // 12 kaakter var, toplamada 16 bytelik hafiza aciyor

int main()
{

    //char *ptr = "hello";
    //ptr[0] = 'Y';
    //gets(ptr);
    //scanf("%s", ptr);
    //strcpy...

    char str[10] = "Naber!";

    ptr = str;





    printf("%p\n", &str); // str adresini check et
    printf("%p\n\n", ptr); // bagli olan adresi gostermesi icin

    printf("%s\n", str); //output
    printf("%s\n", ptr); //bagli oldugu output

}
