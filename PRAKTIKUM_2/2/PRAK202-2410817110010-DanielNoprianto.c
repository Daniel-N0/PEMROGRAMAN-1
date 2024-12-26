#include <stdio.h>

int main(){
    float nilai_pertama;
    float nilai_kedua;
    float hasil;
    
    printf("Masukan Nilai Pertama: ");
    scanf("%f",&nilai_pertama);
    printf("Masukan Nilai Kedua: ");
    scanf("%f",&nilai_kedua);
    
    hasil= nilai_pertama + nilai_kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",nilai_pertama,nilai_kedua,hasil);
    return 0;
}