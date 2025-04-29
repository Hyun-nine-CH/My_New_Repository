
/*
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printf("%d \n", arr[0][0]);
    printf("%d \n", arr[0][1]);
    printf("%d \n", arr[0][2]);
    printf("%d \n", arr[0][3]);
    printf("%d \n", arr[1][0]);
    printf("%d \n", arr[1][1]);
    printf("%d \n", arr[1][2]);
    printf("%d \n", arr[1][3]);
    printf("%d \n", arr[2][0]);
    printf("%d \n", arr[2][1]);
*/

#include <stdio.h>

int main(void)
{
  int arr[4][4], rot[4][4];

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", (j+1)+i*4);
    }
    printf("\n");
  } 

  printf("************\n");

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      arr[j][4-1-i]=j+1+i*4;
    }
  } 
  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  } 
 
  printf("************\n");

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      rot[j][4-1-i]=arr[i][j];
    }
  } 
  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", rot[i][j]);
    }
    printf("\n");
  } 
 
  printf("************\n");

  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      arr[j][4-1-i]=rot[i][j];
    }
  } 
  for(int i = 0; i < 4; i++) { 
    for(int j = 0; j < 4; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  } 
}