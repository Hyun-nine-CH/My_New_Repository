#include <stdio.h>

struct point {
    int xpos;
    int ypos;
    struct point *ptr; // 구조체 포인터 변수 선언
};

int main(void) {
    struct point pos1={1,1};
    struct point pos2={2,2};
    struct point pos3={3,3};

    // 구조체 포인터 변수를 구조체 변수에 적용하여 다른 구조체 변수의 주소로 연결
    pos1.ptr = &pos2;
    pos2.ptr = &pos3;
    pos3.ptr = &pos1;

    printf("점의 연결관계... \n");
    printf("[%d, %d]와(과) [%d, %d] 연결 \n",
           pos1.xpos, pos1.ypos,
           (pos1.ptr)->xpos, (pos1.ptr)->ypos);
    printf("[%d, %d]와(과) [%d, %d] 연결 \n",
           pos2.xpos, pos2.ypos,
           (pos2.ptr)->xpos, (pos2.ptr)->ypos);
    printf("[%d, %d]와(과) [%d, %d] 연결 \n",   
           pos3.xpos, pos3.ypos,
           (pos3.ptr)->xpos, (pos3.ptr)->ypos);
    return 0;
}