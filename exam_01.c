#include <stdio.h>

int main(void) {
    int x1, x2;
    int y1, y2;

    printf("input the size of x1, y1:");
    scanf("%d %d", &x1, &y1);

    printf("input the size of x2, y2:");
    scanf("%d %d", &x2, &y2);
    
    printf("area of rectangle = %d \n", (x2 - x1) * (y2 - y1));
    return 0;
}