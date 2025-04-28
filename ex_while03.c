#include <stdio.h>

int main(void) {
    int num=0, sum=0, i=0;

    while(i++<5) {

        while(num<=0) {
            printf("Enter a positive integer(%d번째): ", i);
            scanf("%d", &num);
        }
        sum += num;
        num = 0;
    }
    printf("Sum: %d \n", sum);
    return 0;
}