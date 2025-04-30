#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20]="First~";
    char str2[20]="Second";

    char str3[20]="Simple num: ";
    char str4[20]="1234567890";

    /**** case 1 ****/
    strcat(str1, str2); // str1에 str2를 붙임
    puts(str1); // str1: First~Second

    /**** case 2 ****/
    strncat(str3, str4, 7);
    puts(str3);
    return 0;
}