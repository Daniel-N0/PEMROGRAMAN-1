#include <stdio.h>

int main(){
    int a = 400000, b = 350000;

    float diskon_a = 0.13*400000;
    float sepatu_a = a - diskon_a;
    
    float diskon_b = 0.21*350000;
    float sepatu_b = b - diskon_b;

    printf("Harga sepatu A adalah %d\n",a);    
    printf("Harga sepatu B adalah %d\n",b);

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n",sepatu_a);
    printf("Sepatu b mendapat diskon 21%% sehingga harganya menjadi %.0f\n",sepatu_b);
    return 0;    
}