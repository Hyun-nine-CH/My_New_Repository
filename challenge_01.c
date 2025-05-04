#include <stdio.h>

/*
int main(void) {
	int decimal=167;
	printf("16진수로 나타낸 결과: 0x%X \n", decimal);
	return 0;
}
*/

///*
#include <stdio.h>

int main(void) {
	int decimal;
	printf("정수 입력: ");
	scanf("%d", &decimal);
	
	printf("16진수로 나타낸 결과: 0x%X\n", decimal);
	return 0;
}
//*/

// 해당 문제에 대해서는 사용자가 직접 정수를 main 함수 내에서 변수를 decimal에 저장하여 출력하는 방법 1가지와 직접 콘솔 창에 2개의 정수를 입력 받고 결과를 출력하도록 유도하는 방법 1가지 이렇게 총 2가지로 진행해보았다.
// 여기서 16진수는 처음 0X 또는 0x로 시작하므로 출력함수에 따로 붙여주었다.