#include <stdio.h>

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