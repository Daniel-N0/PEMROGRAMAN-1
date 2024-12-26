#include <stdio.h>

int main ()
{
    int pilihan;
    float nilai1, nilai2, hasil;

    while (1){
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");

    printf("Masukkan Pilihan : ");
    scanf("%d", &pilihan);
    
    if (pilihan == 5){
        printf("Terimakasih, telah menggunakan kalkulator DANIEL NOPRIANTO");
        break;
    }
    
    if (pilihan < 1||pilihan > 5){
        printf("Input Anda salah, silahkan coba lagi\n\n");
        continue;
    }
    
        switch (pilihan){
        case 1:
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);
            hasil = nilai1 + nilai2;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
            break;

        case 2:
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);
            hasil = nilai1 - nilai2;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
            break;

        case 3:
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);
            hasil = nilai1 * nilai2;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
            break;

        case 4:
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);
            hasil = nilai1 / nilai2;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
            break;
        default:
            break;
        }
    }
    return 0;
}