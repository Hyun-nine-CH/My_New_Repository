#include <stdio.h>

int main(void) {
    printf("     ----- 곱셈표 -----\n");
    for(int i=1; i<=9; i++) {
        for(int j=1; j<=9; j++)
            printf("%3d", i*j);
        putchar('\n'); // putchar는 작은 따옴표?!
    }
    return 0;
}