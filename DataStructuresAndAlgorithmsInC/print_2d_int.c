#include <stdio.h>

int main(void) {
    int no;
    printf("2자리 양수를 입력하세요.\n");
    do {
        printf("수는: ");
        scanf("%d", &no);
//    } while(no<10 || no>99);
//    드모르간 법칙에 의해서 해당 조건식은 이와 같다. (!(no>=10 && no<=99))
    } while(!(no>=10 && no<=99));
    printf("변수 no값은 %d이 되었습니다.\n", no);

    return 0;
}