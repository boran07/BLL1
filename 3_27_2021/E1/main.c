#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Kac sayinin ortalamasini bulmak istiyorsun: ");
    scanf("%d", &n);


    while( n > 100 || n <= 1 ){
        printf("1 ile 100 arasinda bir sayi sec\n");
        printf("Yine sayi gir: \n");
        scanf("%d", &n);

    }

    for(i = 0 ; i <n ; i++){

        printf("%d. Sayi gir:", i+1);
        scanf("%f", &num[i]);
        sum += num[i];

    }


    avg = sum / n;

    printf("Ortalama: %.2f", avg);


}
