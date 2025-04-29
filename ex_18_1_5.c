/*
#include <stdio.h>

int main(void) {
    int arr[2][2][2]={1,2,3,4,5,6,7,8};

    int * ptr1 = arr[0][0]; // 1층의 1행 1열
    int * ptr2 = arr[1][0]; // 2층의 1행 1열

    printf("%d \n", arr[1][0][1]);

    printf("%d \n", arr[0][0][0]); // 1
    printf("%d \n", arr[0][0][1]); // 2
    printf("%d \n", arr[0][1][0]); // 3
    printf("%d \n", arr[0][1][1]); // 4 <-1층

    printf("%d \n", arr[1][0][0]); // 5
    printf("%d \n", arr[1][0][1]); // 6
    printf("%d \n", arr[1][1][0]); // 7
    printf("%d \n", arr[1][1][1]); // 8 <-2층

    printf("%d \n", *(ptr2+1));
    printf("%d \n", *(ptr1+1));

    return 0;
}
*/

#include <stdio.h>

int main(void) 
{
  int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("%d\n", arr[1][0][1]);

  printf("%d\n", (*(arr+1))[0][1]);
  printf("%d\n", (*(arr[1]+0))[1]);
  printf("%d\n", (*(*(arr+1)+0))[1]);
  printf("%d\n", *(*(*(arr+1)+0)+1));
  printf("%d\n", (**(arr+1+0))[1]); // 3번째와 5번은 같음, 5번 제외
//  printf("%d\n", *(*(&arr[1][0])+0+1)); // 의미가 없는 표현
  printf("%d\n", *(arr[1][0]+0+1));
  printf("%d\n", *(&arr[0][0][0]+1+0*2+1*4));
  return 0;
}

// printf("%d \n", *(*arr[1]+1));

// 함수에서 가로 없애면 주소, 포인터에서 별표 없애면 주소