#include <stdio.h>

int Add(int i, int j) {
    int result=i+j;
    return result;
}
int main(void) {
    int d;
    d=Add(3,4);
    printf("%d\n", d);
    d=Add(5,8);
    printf("%d\n", d);
    return 0;
}