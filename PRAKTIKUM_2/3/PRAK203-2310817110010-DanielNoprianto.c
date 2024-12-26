#include <stdio.h>
//case pertama
int main(){
    float a,b,i,j,x,y;
    float hasil;
    
    scanf("%f %f %f %f %f %f",&a,&b,&i,&j,&x,&y);
    hasil= (a-b) * (i / j) - (x + y);
    printf("%.3f\n",hasil);

// case kedua
    float c,d,k,l,v,w;
    float hasil2;

    scanf("%f %f",&c,&d);
    scanf("%f %f",&k,&l);
    scanf("%f %f",&v,&w);
    hasil2= (c-d) * (k / l) - (v + w);
    printf("%.3f",hasil2);
    return 0;
}