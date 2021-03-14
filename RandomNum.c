#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand ( time(NULL) );
  printf ("Random Number: %d\n", rand() %100);
  return 0;


}
