#include <stdio.h>

typedef struct {
	int a, b;
} Decimal; // 구조체를 사용하여 두 개의 정수를 입력 받을 타입의 이름을 Decimal로 1set을 만들었다.

int GCD(int n1, int n2) { // 최대공약수는 두 정수에 대해서 공통인자를 갖는 약수를 의미한다. 이를 구하기 위해서는 나머지 연산자를 사용하여 나눌 값을 0이 될 때, 그 전 단계의 나눌 값을 리턴한다.
	if(n1<0)
		n1=-n1;
	if(n2<0)
		n2=-n2; // 정수는 음수가 될 수도 있으므로 절댓값으로 만들었다.
		
	while(n2 != 0) {
		int temp = n2;
		n2 = n1 % n2; // 반복하면서 이 구간에 n2가 0이 되면, 그 이전 루프 단계에서의 n2의 값이 최대공약수가 된다. (최신화된 n2의 값, 좌항)
		n1 = temp;
	}
	return n1;
}

int main(void) {
	Decimal nums; // 위에서 정의된 구조체 1set을 main 함수 내에서 nums로 정의하여
	
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &nums.a, &nums.b); // .(point)연산자를 사용하여 nums의 요소를 구체화하였다. 그리고 각각의 값을 입력 받아 해당 요소에 저장해두도록 하였다.
	
	printf("두 수의 최대공약수: %d", GCD(nums.a, nums.b));
	return 0;
}