#include <stdio.h>

int main(void) {

    int O=0, num=1;
    printf("몇 단? ");
    scanf("%d", &O);

    while(num<10) {
        printf("%d * %d = %d \n", O, num, O*num);
        num++;
    }
    return 0;
}