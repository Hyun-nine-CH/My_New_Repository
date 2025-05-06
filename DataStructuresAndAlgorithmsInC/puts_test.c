#include <stdio.h>

int main(void) {
    int n;
    printf("정수를 입력하세요.\n"); scanf("%d", &n);

    if(n==1)
        puts("A");
    
    else if(n==2)
        puts("B");

    else
        puts("C");
    
    return 0;
}