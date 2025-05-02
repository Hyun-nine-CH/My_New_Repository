#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  char *str, *tmp;

  printf("문자열의 길이는? : ");
  scanf("%d%*c", &n);

/*
scanf("%d", &n);
while (getchar() != '\n'); == scanf("%*c", &n); scanf에서는 개행문자를 읽음(저장함, 버퍼에 \n이 남아있지 않음); 따라서 이후에 나오는 fgets나 %c에 일어날 문제 방지
*/

  printf("문자열을 입력하시오 : ");
  str = (char*)malloc(sizeof(char) * n); // malloc의 반환값 void*를 → char* 타입으로 변환 (형 변환), C++에서는 반드시 필요
  fgets(str, n, stdin);
  
  tmp = (char*)malloc(sizeof(char) * n);
  for(int i=n-1, cnt=0; i>=-1; i--) {
    if(str[i] == ' ' || i == -1) {
      for(int j=cnt-1; j>=0; j--)  
        printf("%c", tmp[j]);
      cnt = 0;
      printf(" ");
    } else { 
      tmp[cnt++] = str[i]; 
    }
  }
  printf("\n");

  free(str);
  free(tmp);

/*
free()는 반드시 malloc() 등으로 받은 포인터에만 사용해야 함	
free() 후 그 포인터는 더 이상 사용하면 안 됨 (→ 댕글링 포인터)	
free(NULL);은 안전함 (아무 일도 안 일어남)
*/

  return 0;
}

// 한줄로 받아서 단어들을 저장해라 -> 이중포인터