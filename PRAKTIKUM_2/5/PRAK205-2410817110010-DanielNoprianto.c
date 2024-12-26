#include <stdio.h>
#include <math.h>

int main(){
//case pertama
    int a, b, c, keliling, luas;
    scanf("%d %d",&a,&b);

    c = sqrt(b*b-a*a);
    keliling = a+b+c;
    luas = 0.5*c*a;

    printf("Alas = %d cm\n",c);
    printf("Tinggi = %d cm\n",a);
    printf("Keliling = %d cm\n",keliling);
    printf("Luas = %d cm^2\n",luas);

//case kedua
    int tinggi, miring, alas, k, l;
    scanf("%d",&tinggi);
    scanf("%d",&miring);

    alas = sqrt(miring*miring-tinggi*tinggi);
    k = tinggi+miring+alas;
    l = 0.5*alas*tinggi;

    printf("Alas = %d cm\n",alas);
    printf("Tinggi = %d cm\n",tinggi);
    printf("Keliling = %d cm\n",k);
    printf("Luas = %d cm^2\n",l);
    return 0;
}