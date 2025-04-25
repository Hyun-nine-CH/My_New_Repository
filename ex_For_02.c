#include <stdio.h>

int main(void) {
    int cur, is;

    for(cur=2; cur<10; cur++) {
        for(is=1; is<10; is++) {
            printf("%d * %d = %2d \t", cur, is, cur*is);
            printf("\n");
        }
    }
    return 0;
}