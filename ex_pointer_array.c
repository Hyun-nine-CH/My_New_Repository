#include <stdio.h>

int main(void)
{
  int arr[3] = {0, 1, 2};
  int *p = arr;
  printf("Name of Array : %p\n", arr);
  printf("Name of Array : %p\n", &arr[0]); // &연산자는 주소를 확인하는 연산자, 배열의 이름에 해당하는 상수 형태 포인터이며 따라서 값의 변경이 불가능하다.
  printf("Name of Array : %p\n", &arr[1]);
  printf("Name of Array : %p\n", &arr[2]);
  printf("1st element : %d\n", *(arr+0)); // *연산자는 포인터가 가리키는 주소의 값을 가져오는 연산자
  printf("2nd element : %d\n", *(arr+1));
  printf("3rd element : %d\n", *(arr+2));

  printf("1st element : %d\n", p[0]);
  printf("2nd element : %d\n", p[1]);
  printf("3rd element : %d\n", p[2]);
  return 0;
}