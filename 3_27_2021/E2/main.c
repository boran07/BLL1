#include <stdio.h>
#include <stdlib.h>


float SD(float data[]){

float sum = 0, mean = 0, SD = 0;
int b;
    for(b = 0; b < 10; b++){

        sum += data[b];
    }
mean= sum/10;

    for(b = 0; b < 10; b++){
        SD += pow(data[b] - mean, 2);
    }
return sqrt (SD/10);
}

int main(){

    int i;
    float data[10];

    printf("10 sayi gir: \n");

    for( i = 0; i < 10; i++){

        scanf("%f", &data[i]);

    }

    printf("\nStandard Deviation = %f ", SD(data));

}
