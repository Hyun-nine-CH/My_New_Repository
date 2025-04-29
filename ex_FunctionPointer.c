#include <stdio.h>

// 함수에서 가로 없애면 주소, 포인터에서 별표 없애면 주소
/*
int main(void)
{
  printf("main : %p\n", main);
  printf("printf : %p\n", printf);
  printf("scanf : %p\n", scanf);

  return 0;
}
*/

void SimpleAdder(int n1, int n2) {
    printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void ShowString(char *str) {
    printf("%s \n", str);
}

int main(void) {
    char *str="Function Pointer";
    int num1=10, num2=20;

    void (*fptr1)(int, int) = SimpleAdder;
    void (*fptr2)(char *) = ShowString;

    fptr1(num1, num2);
    fptr2(str);
    return 0;
}