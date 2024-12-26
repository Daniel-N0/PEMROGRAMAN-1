#include <stdio.h>
int main ()
{
    int bil1, bil2, bil3;
    scanf("%d %d %d", &bil1, &bil2, &bil3);

    if (bil1 >= bil2 && bil1 >= bil3){
        if (bil2 >= bil3){
            printf("%d %d %d", bil3, bil2, bil1);
        }
        else {
            printf("%d %d %d", bil2, bil3, bil1);
        }
    }
    else if (bil2 >= bil1 && bil2 >= bil3){
        if (bil1 >= bil3){
            printf("%d %d %d", bil3, bil1, bil2);
        }
        else {
            printf("%d %d %d", bil1, bil3, bil2);
        }
    }
    else {
        if (bil1 >= bil2){
            printf("%d %d %d", bil2, bil1, bil3);
        }
        else {
            printf("%d %d %d", bil1, bil2, bil3);
        }
    }
    return 0;
}