#include <stdio.h>
#include <stdlib.h>


enum deste {

    club = 0,
    diamonds = 10,
    hearts = 30,
    spades = 3,

} card;

int main()
{
    card = hearts;
    printf("Enum degiskenin byte buyuklugu = %d bytes\n", sizeof(card)); //4  byte

    printf("%d\n", card);

}
