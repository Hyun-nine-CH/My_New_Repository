/*
    해당 문제는 문자 입출력 문제인데 예를 들면,
    입력: "Yellow Win Grow"
    출력: "Grow Win Yellow"
    위와 같이 입력과 출력이 이루어지는 코드이다.
*/

/*
scanf("%d", &n);
while (getchar() != '\n'); // 안정적인 코드

scanf("%d%*c", &n);  // %d 읽고, \n 하나만 무시

scanf("%*c", &n);  // ❌ 잘못된 사용 (변수 안 받음)
scanf("%*c");  // ✅ 변수 없이
scanf("%*c%c", &ch); // ok

%s <- 공백에서 끊김
scanf("%[^\n]", message);  // 개행 전까지 전체 읽기
*/

// malloc의 반환값 void*를 → char* 타입으로 변환 (형 변환), C++에서는 반드시 필요

/*
free()는 반드시 malloc() 등으로 받은 포인터에만 사용해야 함
free() 후 그 포인터는 더 이상 사용하면 안 됨 (→ 댕글링 포인터)
free(NULL);은 안전함 (아무 일도 안 일어남)
*/

// 한줄로 받아서 단어들을 저장해라 -> 이중포인터

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main(void)
{
  int n;
  char *str, *tmp;

  printf("문자열의 길이는? : ");
  scanf("%d%*c", &n);

  printf("문자열을 입력하시오 : ");
  str = (char*)malloc(sizeof(char) * n);
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
  return 0;
}
*/

int main(void) {
  int maxlen, len, i;
  char *str;
  printf("문자열의 최대 길이 입력: ");
  scanf("%d", &maxlen);
  getchar(); // scanf()는 '\n'를 버퍼에 남긴다. 따라서 추후에 나올 fgets() 이전에 getchar()로 개행문자 하나를 소비해줌 그렇지 않으면 fgets()가 '\n'만 읽고 끝나버림
  str=(char *)malloc(sizeof(char)*(maxlen+1)); // 문자열의 마지막에 있는 NULL값(개행문자)를 고려해서 크기+1

  // scanf()와 달리 fgets()나 %c는 기본적으로 '\n'를 읽어들인다 따라서 scanf("%c", &ch)이나 scanf() 이후에 나오는 fgets() 이전에 getchar()로 '\n'를 제거해준다?? (o)
  
  /*
  scanf("%d", &n);
  getchar();  // 또는
  while (getchar() != '\n');  // 여러 문자 입력 시 버퍼 다 비우기

  %c, %d, %f → 항상 & 붙인다 (char	char ch;)

  %s → 배열이면 & 생략 가능 (char[] 또는 char *	char str[10];)

  ASCII 값	10('\n') <- 개행문자
  ASCII 값   0('\0') <- NULL
  문자열은 항상 마지막에 NULL('\0')이 있음

  개념                           | 설명
  \0                            | 문자열의 끝을 나타내는 널 문자. 출력되지 않음.
  ' '                           | 스페이스(공백). ASCII 32. 일반 문자이며 출력됨.
  strlen, strcmp, strcpy 등      | 모두 '\0'까지 탐색함
  문자열만 '\0'이 필요한가?          | ✅ 예. 문자열에서만 필수.
  
  함수                | 동작 방식            | 이유
  strlen(str)        | '\0'까지 문자 수를 셈  | 끝을 모르기 때문에 '\0' 기준
  strcpy(dest, src)  | '\0'까지 복사        | 종료 조건이 '\0'
  strcmp(a, b)       | '\0'까지 비교        | 다르면 반환, 끝까지 같으면 같다고 판단
  */

  printf("문자열 입력: ");
  fgets(str, maxlen+1, stdin);
  str[strlen(str)-1]=0;
  len=strlen(str);
  for(i=len; i>0; i--) {
    if(str[i]==' ') {
      printf("%s ", &str[i+1]);
      str[i]=0;
    }
  }
  printf("%s", &str[0]);
  free(str);
  return 0;
}

/*

\"%s\" <- "%s" 출력

*/