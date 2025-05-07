#include <stdio.h>

/*
| 항목           | `scanf()`                  | `fgets()`             |
| ------------ | -------------------------- | --------------------- |
| 공백(스페이스)     | **무시함** (`%s`는 공백 전까지만 읽음) | **그대로 읽음**            |
| 엔터(줄바꿈) `\n` | **자동으로 제거됨 (버퍼에 남음)**      | **입력에 포함됨 (`\n`)**    |
| 줄 단위 입력      | ❌ 한 단어 또는 변수별 입력           | ✅ 한 줄 전체 입력           |
| 버퍼 처리        | 복잡 (잔여 문자가 남음)             | 깔끔하게 한 줄 처리           |
| 문자열 끝 처리     | 자동 `\0` 있음                 | `\n` 포함됨 → 수동으로 제거 필요 |
*/

/*
char str[32];
scanf("%s", str);

입력: hello world

출력: str = "hello"
→ 공백 이후(world)는 읽지 못함
*/

/*
char str[32];
fgets(str, 32, stdin);

입력: hello world

출력: str = "hello world\n"
→ 공백 포함, 줄바꿈 \n도 포함

줄바꿈을 제거하려면,
str[strcspn(str, "\n")] = '\0';
*/

int main(int argc, char *argv[]) {
	int i;
	float f;
	char c;
	char str[32];

	scanf("%d", &i); printf("i: %d\n", i);
//  "%2d%*d", i <- 2자리 정수, 나머지 무시

	scanf("%f", &f); printf("f: %f\n", f);
//  "%f\n": enter키가 무시됨

//	scanf(" %c", &c); printf("c: %c\n", c); // "공백%c"
//  %c는 공백을 무시하지 않음 scanf("%*c%c", &c);
	
	scanf("%*c%c", &c); printf("c: %c\n", c);

	scanf("%s", str); printf("str: %s\n", str);
//  %s는 공백을 무시함

	return 0;
}

/*
%d, %f, %s : 입력 시 앞 공백, 엔터 자동 무시

%c : 공백/엔터 무시 안 함 → 직접 처리해야 함

" %c" : 앞 공백을 넣어서 불필요한 공백/엔터 제거 가능

" %c"	공백 문자 (스페이스, 탭, 개행 등) 전부 무시 후 문자 하나 읽기

"%*c%c"	문자 하나는 버리고, 다음 문자 하나를 읽기 (좀 더 정밀 제어용)
*/