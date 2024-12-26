#include <stdio.h>
int  main(){
    int putaran = 5;
    int jarak = 14;
    float jari_jari = jarak / (2 * 3.14 * putaran);
    
    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("\nJawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",jari_jari);
    return 0;
}