#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED

int saat, dakika, saniye;
int d = 1000; // 1000 milli saniye bekletme ekliycez


void t_timer(){

    printf("baslangic saati kur: \n");
    scanf("%d%d%d", &saat, &dakika, &saniye);

    if(saat > 12 || dakika > 60 || saniye > 60 ){

        printf("ERROR\n");
        return(0);
    }

    while(1){
        saniye++;

        if (saniye == 60){
            dakika+=1;
            saniye = 0;
        }
        if (dakika == 60){
            saat++;
            dakika = 0;
        }
        if (saat == 13){

            saat = 1;
        }

        printf("\n Saat: ");
        printf("%02d : %02d : %02d ", saat, dakika, saniye); // 00:00:00
        Sleep(d);
        system("cls");
    }

}



#endif // TIMER_H_INCLUDED
