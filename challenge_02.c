#include <stdio.h>

void Swap(int *n1, int *n2) {
	int temp=*n1;
	*n1=*n2;
	*n2=temp;
}
// 값을 반환하지 않는 함수로써 Swap 함수를 만들었는데 이때, return 없이 기능만 구현할 수 있다.
// main 함수에서 입력 받을 정수를 가리키는 포인터 변수 *n1, *n2에 대해서 Swap 함수를 만들었다.

int main(void) {
	int n1, n2, i;
	printf("정수 2개를 입력 하세요: ");
	scanf("%d %d", &n1, &n2); // %s 외에는 문자 1개 혹은 숫자는 &연산자를 붙여주어야 해당 주소에 할당되어 입력이 된다. "%d %d \n"에서 개행문자('\n')를 제거하여야 엔터를 누를 때 즉시 실행된다.
	
	if(n1 > n2) {
		Swap(&n1, &n2); // 문제에서 제시한 내용을 반영하기 위해 if 함수로 정렬 개념을 구현하도록 n1 > n2이면 Swap 함수를 적용하도록 했다. 이때 주목할 것은 포인터 변수여서 &연산자를 사용해야 한다.
	}
	
	for(i=n1; i<=n2; i++) {
		for(int j=1; j<=9; j++) // j의 type을 조건문에서 선언함과 동시에 초기화하여 진행하였다.
			printf("%d x %d= %d \n", i, j, i*j);
        printf("\n");
	}
	return 0;
}