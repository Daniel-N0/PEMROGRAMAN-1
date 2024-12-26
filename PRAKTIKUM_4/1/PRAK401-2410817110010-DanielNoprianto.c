#include <stdio.h>
int main(){
    int bilangan;
    char simbol;

    scanf("%d %c",&bilangan,&simbol);

    for (int i = 1; i <= 50; i++){
        if (i % bilangan == 0){
            printf("%c ",simbol);
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}