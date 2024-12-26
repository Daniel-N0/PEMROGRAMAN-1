#include <stdio.h>
int main(){
    int bilangan;
    scanf("%d", &bilangan);

    if (bilangan == 0) {
        printf("Nol");
    } 
    else if (bilangan >= 1 && bilangan <= 9) {
        printf("Satuan");
    } 
    else if (bilangan >= 11 && bilangan <= 19) {
        printf("Belasan");
    } 
    else if (bilangan == 10 || (bilangan >= 20 && bilangan <= 99)) {
        printf("Puluhan");
    } 
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}