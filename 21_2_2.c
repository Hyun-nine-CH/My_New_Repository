/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char str1[20];
    char str2[20];
    char str3[40];

    printf("문자열 입력: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1]=0; // \n 제거
}
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[20];
  char str2[20];
  char str3[40];

  fgets(str1, sizeof(str1), stdin);
  str1[strlen(str1)-1] = '\0';
  fgets(str2, sizeof(str2), stdin);
  str2[strlen(str2)-1] = '\0';

  strncpy(str3, str1, strlen(str1));
  strncat(str3, str2, strlen(str2));

  printf("%s\n", str3);

  return 0;
}