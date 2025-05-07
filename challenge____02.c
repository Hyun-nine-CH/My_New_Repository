#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lib {
    char name[32];
    char title[32];
    int pages;
} Lib;

int main(void) {
//    Lib info[10];
    Lib *info = (Lib*)malloc(sizeof(Lib)*3);

    for(int i=1; i<=3; i++) {
        printf("도서 정보 입력\n");
        printf("저자: "); scanf("%s%*c", (info+i)->name);
        fflush(NULL);

        printf("제목: "); fgets((info+i)->title, 32, stdin);
        (info)->title[strlen((info+i)->title)-1]='\0';

        printf("페이지 수: "); scanf("%d", &(info+i)->pages); // 마지막에는 scanf(); 유지, scanf()가 연달아 있을 때에만 fgets 고려
    }
    printf("도서 정보 출력\n");
    for(int i=1; i<=3; i++) {
        printf("book %d\n", i);
        printf("저자: %s\n", (info+i)->name);
        printf("제목: %s", (info+i)->title);
        printf("페이지 수: %d\n", (info+i)->pages);
    }
    free(info);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _bookinfo {
  char title[32];
  char author[32];
  int page;
} BookInfo;

int main(void)
{
  BookInfo *info;
  info = (BookInfo*)malloc(sizeof(BookInfo)*3);

  for(int i = 0; i < 3; i++) {
    printf("저자: ");
    scanf("%s%*c", (info+i)->author);
    fflush(NULL);
    printf("제목: ");
    fgets((info+i)->title, 32, stdin);
    info[i].title[strlen((info+i)->title)-1] = '\0';
    printf("페이지수: ");
    scanf("%d", &(info+i)->page);
  }

  printf("\n도서 정보 출력\n");
  for(int i = 0; i < 3; i++) {
    printf("book %d\n", i);
    printf("저자 : %s\n", (info+i)->author);
    printf("제목 : %s\n", (info+i)->title);
    printf("페이지수 : %d\n", (info+i)->page);
  }

  free(info);

  return 0;
}
*/