#include <stdio.h>

int main(void)
{
  int num[10], a;
  int *start = num; //&num[0]
  int *end = num+9; //&num[9]
  for(int i = 0; i < 10; i++) {
    printf("입력: "), scanf("%d", &a); //    printf("%d : ", i+1), scanf("%d", &a);
    if((a&01)==0)*(end--)=a; else *(start++)=a;
  } // if((a&01)==0) num(end--)=a; else num(start++)=a;

  printf("Print the Element of Array : [");
  for(int i = 0; i < 10; i++) {
    printf("%d, ", num[i]);
  }
  printf("\b\b]\n"); //backspace to remove the last comma

  return 0;
}