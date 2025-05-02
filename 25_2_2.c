#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, cnt = 0, tot = 5, *ptr;

  printf("숫자를 입력하세요.\n");
  ptr = (int *)malloc(sizeof(int)*5);
  while(1) {
    scanf("%d", &n);
    if(n == -1) break;
    *(ptr + cnt++) = n;
    if(tot-- == 0) {
       tot = 3;
       ptr = (int *)realloc(ptr, sizeof(int)*(cnt+3));
    }
  }

  printf("입력된 숫자는 : ");
  for(int i = 0; i < cnt; i++) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");

  return 0;
}