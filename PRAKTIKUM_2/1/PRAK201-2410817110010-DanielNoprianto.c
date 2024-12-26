#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas_paralel[10], tempat_tanggal_lahir[50], alamat[100], hobby[50], no_hp[20];

    printf("Nama\t\t\t: ");
    scanf(" %[^\n]", nama); 
    
    printf("NIM\t\t\t: ");
    scanf("%s", nim);

    printf("Kelas Paralel\t\t: ");
    scanf("%s", kelas_paralel);
    
    printf("Tempat/Tanggal Lahir\t: ");
    scanf(" %[^\n]", tempat_tanggal_lahir);
    
    printf("Alamat\t\t\t: ");
    scanf(" %[^\n]", alamat);
    
    printf("Hobby\t\t\t: ");
    scanf(" %[^\n]", hobby);
    
    printf("No. HP\t\t\t: ");
    scanf("%s", no_hp);

    printf("\nBIODATA\n");
    printf("Nama\t\t\t: %s\n", nama);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir\t: %s\n", tempat_tanggal_lahir);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No. HP\t\t\t: %s\n", no_hp);

    return 0;
}