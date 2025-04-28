#include <stdio.h>

int main(void) {
    char str[BUFSIZ];
    int len = 0;
    printf("입력: ");
    scanf("%s", str);

    while(1) {
        if(str[len] == '\0')
            break;
        len++;
    }
    printf("Length: %d\n", len);

    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            printf("Not a palindrome\n");
            break;
        }
    }
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
  char str[BUFSIZ];
  int len = 0;
  printf("Input some string : ");
  scanf("%s", str);

  while(1) {
    if(str[len] == '\0')
      break;
    len++;
  }
  printf("Length : %d\n", len);

  for(int i = 0; i < len/2; i++) {
    if(str[i] != str[len-i-1]) {
      printf("This is not Palindrome\n");
      break;
    }
  }

  return 0;
}
*/