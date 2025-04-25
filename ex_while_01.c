#include <stdio.h>

int main(void) {
    int total=0, num=0;

    do {
        printf("Enter a integer: ");
        scanf("%d", &num);
        total += num;
    }while(num != 0);
    printf("Total: %d \n", total);
    return 0;
}