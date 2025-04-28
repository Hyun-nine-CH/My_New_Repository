#include <stdio.h>

int Odd(int *num) {

    return 0;
}

int Even(int *num) {
    return 0;
}

int main(void) {
    int num[10];
    for(int i = 0; i < 10; i++) {
        printf("입력: "), scanf("%d", &num[i]);
    }
    
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
  int num[10];
  for(int i = 0; i < 10; i++) {
    printf("%d : ", i+1), scanf("%d", &num[i]);
  }
  printf("Odd number :");
  for(int i = 0; i < 10; i++) {
    if((num[i]&01) == 1)
      printf(" %d", num[i]);
  }

  printf("\nEven number :");
  for(int i = 0; i < 10; i++) {
    if((num[i]&01) == 0)
      printf(" %d", num[i]);
  }
  printf("\n");


  return 0;
}
*/