#include <stdio.h>

int main(void) {
    int diff = 'a' - 'A';
    while(1) {
        int ch = getchar();
//        putchar(ch);
        if(ch <= 'Z' && ch >= 'A') {
            putchar(ch+diff);
        } else if (ch <= 'z' && ch >= 'a') {
            putchar(ch-diff);
        } else if (ch == EOF) {
            break;
        } else {
            putchar(ch);
        }
    }
}