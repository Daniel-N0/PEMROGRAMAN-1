#include <stdio.h>
int main (){
    int i, j;
    int baris, pengali, total=0;

    scanf("%d %d", &baris, &pengali);

    for (i = 1; i <= baris; i++){
        int a = 0;
        printf("(");
        
        for (j = 1; j <= i; j++){
            printf("%d * %d", j, pengali);
            a += j * pengali;

            if (i>j){
                printf(") + (");
            }

            else if (j>i){
                printf(") + (");
            }   
        }
        printf(") = %d\n", a);
        total += a;
    }
    printf ("%d\n", total);
    return 0;
}