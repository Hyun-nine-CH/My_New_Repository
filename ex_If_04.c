#include <stdio.h>

int main(void) {
    int i=1;

    while(i<100) {
        if(i%9 == 0 || i%7 == 0)
            printf("%2d는 7의 배수 또는 9의 배수 \n", i);
        i++;
    }
    return 0;
}