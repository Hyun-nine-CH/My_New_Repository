#include <stdio.h>

int main(void)
{
  int score = 0;
  printf("성적을 입력하세요 : ");
  scanf("%d", &score);

  switch(score) {
    case 100: case 99: case 98: 
    case 97: case 96: case 95:
      printf("%d : A+\n", score);
      break;
    case 94: case 93: case 92:
    case 91: case 90:
      printf("%d : A\n", score);
      break;
  }
  return 0;
}