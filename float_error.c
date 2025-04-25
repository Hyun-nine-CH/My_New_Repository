#include <stdio.h>

int main() {

    float f = 0.0F;
    int i = 0;
    for(f = 0.0; f < 100.0f; f += 0.1f, i++) {
        printf("f : %f\n", f);
        /* f로 다른 작업 수행 */
    }

    printf("i : %d\n", i);
    return 0;
}