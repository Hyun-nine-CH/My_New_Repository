#include <stdio.h>
#include <string.h>

typedef struct lib {
    char name[32];
    char title[32];
    int pages;
} Lib;

int main(void) {
    Lib info[10];
    for(int i=1; i<=3; i++) {
        printf("도서 정보 입력\n");
        printf("저자: "); scanf("%s%*c", (info+i)->name);
//        printf("제목: "); scanf("%s%*c", (info)->title); // fgets("", size, stdin);
        printf("제목: "); fgets((info+i)->title, 32, stdin); // 최대 31글자 + '\0'까지 입력 받음
        (info)->title[strlen((info+i)->title)-1]='\0'; // 이 작업이 무엇을 의미하지? 맨 끝의 '\n'을 '\0'으로 바꿔 개행 제거

        /*
        fgets는 줄바꿈 문자('\n')도 입력받습니다. 이를 제거하지 않으면 문자열 끝에 '\n'이 남아 출력 시 줄바꿈이 생깁니다.
        하지만 입력이 정확히 31글자(버퍼 크기 - 1)를 초과하면 '\n'이 포함되지 않고 다음 입력에 영향을 줍니다. 따라서 개행 문자 존재 여부를 확인한 후 제거하는 것이 안전합니다.
        */

        printf("페이지 수: "); scanf("%d", &(info+i)->pages); // 마지막에는 scanf(); 유지, scanf()가 연달아 있을 때에만 fgets 고려
    }
    printf("도서 정보 출력\n");
    for(int i=1; i<=3; i++) {
        printf("book %d\n", i);
        printf("저자: %s\n", (info+i)->name);
        printf("제목: %s", (info+i)->title);
        printf("페이지 수: %d\n", (info+i)->pages);
    }
    return 0;
}

/*
4-1.c 
#include <stdio.h>
#include <string.h>

typedef struct _bookinfo {
  char title[32];
  char author[32];
  int page;
} BookInfo;

int main(void)
{
  BookInfo info[10];

  for(int i = 0; i < 3; i++) {
    printf("저자 : ");
    scanf("%s%*c", info[i].author);
    printf("제목 : ");
    fgets(info[i].title, 32, stdin);
    info[i].title[strlen(info[i].title)-1] = '\0';
    printf("페이지수 : ");
    scanf("%d", &info[i].page);
  }

  printf("도서 정보 출력\n");
  for(int i = 0; i < 3; i++) {
    printf("book %d\n", i);
    printf("저자 : %s\n", info[i].author);
    printf("제목 : %s\n", info[i].title);
    printf("페이지수 : %d\n", info[i].page);
  }

  return 0;
}
*/