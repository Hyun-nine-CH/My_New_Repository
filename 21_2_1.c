#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char str[BUFSIZ], tmp[BUFSIZ];
  long sum = 0, cnt = 0;

  printf("Input some string : ");
  scanf("%s", str);

  for(int i = 0; i <= strlen(str); i++) {
    if(str[i] >= '0' && str[i] <= '9') {
      tmp[cnt++] = str[i];
    } else if(cnt!=0) {
      tmp[cnt] = '\0';
      printf("%s+", tmp);
      sum += atoi(tmp);
      cnt = 0;
    }
  }
  printf("\b=%ld\n", sum);

  return 0;
}