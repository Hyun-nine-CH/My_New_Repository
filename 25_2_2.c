#include <stdio.h>
#include <stdlib.h>
/*
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
*/

int main(void) {
  int arrlen=5;
  int idx=0;
  int i;
  int *arr=(int*)malloc(sizeof(int)*arrlen);

  while(1) {
    printf("정수 입력: ");
    scanf("%d", &arr[idx]);
    if(arr[idx]==-1)
      break;
    if(arrlen==idx+1) {
      arrlen+=3;
      arr=(int*)realloc(arr, sizeof(int)*arrlen);
    }
    idx++;
  }
  for(i=0; i<idx; i++)
    printf("%d ", arr[i]);
  free(arr);
  return 0;
}