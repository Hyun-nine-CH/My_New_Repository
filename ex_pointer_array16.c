#include <stdio.h>

char const *str1 = "Hello, World!"; //C++에서는 반드시 const char *로 선언해야 한다. 콤파일이 실행될 것이다.

int print(const char * str) {
    printf("%s\n", str);
    return 0;
}

int main(void) {
//    char *str = "Hello, World!";
    int num1 = 10;
    int num2 = 20;
    int * const p = &num1;
//    p = &num2;
    print("Hello, World!");
    return 0;
}