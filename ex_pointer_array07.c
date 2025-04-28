#include <stdio.h>

int main(void) {
    char str1[]="My String";
    char *str2="Your String"; // 상수형 문자열
//    str2 = str1; // 이건 되네 *str2 = str1은 될까?...
    printf("%s %s \n", str1, str2);

    str2="Our String";
    printf("%s %s \n", str1, str2);

    str1[0]='X';
    str2[0]='X'; // This will cause a segmentation fault
    printf("%s %s \n", str1, str2);
    return 0;
}