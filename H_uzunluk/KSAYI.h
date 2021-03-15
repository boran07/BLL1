#ifndef KSAYI_H_INCLUDED
#define KSAYI_H_INCLUDED
#define MAX_SIZE 100


char text[MAX_SIZE];
int i;
int say = 0;


void KarakteSay(){

    printf("Kelime gir: ");
    gets(text); //scanf'in yerine kulaniyoruz

    for(i = 0; text[i] != '\0'; i++ ){

            say++;
        }

        printf("Kelime Sayisi '%s' = %d ", text, say);


}




#endif // KSAYI_H_INCLUDED
