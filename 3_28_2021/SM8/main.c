#include <stdio.h>
#include <stdlib.h>


union Uni_J {

    char isim[32];
    float puan;
    int TC_no;


}Uni_J;

struct Stu_J {

    char isim[32]; //32
    float puan;     //4 byte
    int TC_no;      //4 byte

}Stu_J;

int main()
{
    printf("union byte buyuklugu: %d\n\n", sizeof(Uni_J) );
     printf("struct byte buyuklugu: %d\n\n",sizeof(Stu_J) );


}
