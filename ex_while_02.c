#include <stdio.h>

int main(void) {
    int ini=0, num=0; // counter variables: ini
    printf("Enter a integer: ");
    scanf("%d", &num);

    while(ini++<num) {
        printf("%d\n", 3*ini);
    }
    return 0;
}