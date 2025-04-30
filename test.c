#include <stdio.h>

int main(void) {
	int decimal;
	printf("정수를 입력해 주십시오. :");
	scanf("%d", &decimal);
	
	printf("16진수로 나타낸 결과: 0x%X\n", decimal);
	return 0;
}