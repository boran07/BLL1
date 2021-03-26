#include <stdio.h>
#include <stdlib.h>




int main()
{
        int x[5] = {1 ,2, 3, 4, 5};

        int* ptr;

        ptr = &x[0];

        printf("*ptr = %d \n", *ptr);
        printf("*ptr = %d \n" , *(ptr+1));
        printf("*ptr = %d \n", *ptr-1);

}
