#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int count = 0; // 제시된 문제에서는 출력할 소수의 개수가 정해져있다.
    int start;
    int num = start;
    
    do {
        printf("시작할 0이 아닌 양의 정수 입력: "); scanf("%d", &start);
    } while(start<=0);

    while (count < 10) { // 10개의 소수를 출력하는 범위 지정을 하였다.
        bool isPrime = true; // 그 범위 안에 있을 때에만 while 루프문을 적용하였다.

        for (int i = start; i * i <= num; i++) { // 약수 a, b가 있다고 하면, (a*b)^(1/2)의 값보다 낮은 a 또는 b가 반드시 존재한다는 산술기하 평균을 적용하였다. 범위의 최댓값을 적용하여 a=b=i로 하였다.
            if (num % i == 0) { // 거듭 제곱의 결과가 num이면 이것은 소수가 될 수 없다.
                isPrime = false;
                break; // 해당 for문을 멈추고 isPrime = false이므로 아래의 조건도 넘어간다.
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");
    return 0;
}