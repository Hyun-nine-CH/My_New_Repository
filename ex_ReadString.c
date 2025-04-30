#include <stdio.h>

int main(void) {
    char str[7];
    int i;

    for(i=0; i<3; i++) {
        fgets(str, sizeof(str), stdin); // gets 보안상 리눅스에서 사용 불가, gets_s, gets 이것은 scanf_s, scanf와 비슷함
        printf("Read %d: %s \n", i+1, str);
    }
    return 0;
}