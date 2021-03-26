#include <stdio.h>
#include <stdlib.h>




int main()

{
    char * ptr = "TP";

    ptr = (char*)malloc(10*sizeof(char));

    ptr = "merhaba";

    printf("%s", ptr);

}
