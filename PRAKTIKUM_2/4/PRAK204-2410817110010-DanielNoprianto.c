#include <stdio.h>
//case pertama
int main(){
    float jari_jari, tinggi, volume, selimut, alas, luas, keliling;

    scanf("%f",&jari_jari);
    scanf("%f",&tinggi);
    
    selimut = 2*22*jari_jari*tinggi/7;
    alas = 2*22*jari_jari*jari_jari/7;
    volume = 22*jari_jari*jari_jari*tinggi/7;
    luas = selimut+alas;
    keliling = 2*22*jari_jari/7;

    printf("Volume= %.2f\n",volume);
    printf("Luas= %.2f\n",luas);
    printf("Keliling= %.2f\n",keliling);

//case kedua
    float r, t, v, s, a, l, k;

    scanf("%f %f",&r,&t);

    s = 2*22*r*t/7;
    a = 2*22*r*r/7;
    v = 22*r*r*t/7;
    l = s+a;
    k = 2*22*r/7;

    printf("Volume= %.2f\n",v);
    printf("Luas= %.2f\n",l);
    printf("Keliling= %.2f\n",k);

    return 0;
}