#include <stdint.h>
#include <stdio.h>

typedef struct dbshort {
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef struct rbshort {
    uint16_t upper;
    uint16_t lower;
} RBShort;

typedef union rdbuf {
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
    RBShort uBuf;
//    uint16_t uBuf[2];
} RDBuf;

int main(void) {
    RDBuf buf;
    printf("정수 입력: ");
    scanf("%d", &(buf.iBuf));

    printf("상위 2바이트: %u \n", buf.sBuf.upper);
    printf("하위 2바이트: %u \n", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);

    printf("상위 2바이트: %u \n", buf.uBuf.upper);
    printf("하위 2바이트: %u \n", buf.uBuf.lower);
    printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);

    return 0;
}