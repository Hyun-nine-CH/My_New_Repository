#include <stdio.h>

double power(int n) {
	if(n==0)
		return 1.0;
	else if(n>0)
		return 2.0*power(n-1);
	else
		return 1.0/power(-n);
}

int main(void) {
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);
	
	double result=power(n);
	
	if(n>=0)
		printf("2의 %d승은 %.0f\n", n, result);
	else
		printf("2의 %d승은 %.10f\n", n, result);
	return 0;
}