#include <stdio.h>
/*
typedef struct {
  char name[9];
  char jumin[16];
  char phoneno[15];
} Person;

int main(void)
{
  Person me;
  FILE *fp;

  printf("정보를 입력하세요.\n");
  me.name[0] = '#'; me.jumin[0] = '#'; me.phoneno[0] = '#';
  printf("이름 : "), scanf("%s", &(me.name[1]));
  printf("주민등록번호 : "), scanf("%s", &(me.jumin[1]));
  printf("전화번호 : "), scanf("%s", &(me.phoneno[1]));

  fp = fopen("mystory.txt", "wt");
  fwrite(&me, sizeof(Person), 1, fp);
  fclose(fp);

  return 0;
}
*/

// \n 추가

int main(void) {
  FILE *fp = fopen("mystory.txt", "wt");
  fputs("#이름: 이엘리야 \n", fp);
  fputs("#이름: 이엘리야 \n", fp);
  fputs("#전화번호: 010-1111-2222 \n", fp);
  fclose(fp);
  return 0;
}