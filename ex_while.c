#include <stdio.h>

int main(void) {
    int i=0, j=0;
    int num=0;
    while(i<10) {
        while(j<10) {
            num++;
            j++;
        }
        i++;
        j=0;
        printf("%d %d %d \n", i, j, num);
    }
//    printf("%d %d %d \n", i, j, num);
    return 0;
}