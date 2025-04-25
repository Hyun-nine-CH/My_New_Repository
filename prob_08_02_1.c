#include <stdio.h>

int main(void)
{
  int i, j;
  for(i = 2; i <= 9; i++) {
    if(i%2 != 0) continue;
    for(j = 1; j <= 9; j++) {
      printf("%2d x %2d = %2d\n", i, j, i*j);
      if(i == j) break;
    }
    printf("\n");
  } 
}