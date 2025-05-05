#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int count = 0; // 제시된 문제에서는 출력할 소수의 개수가 정해져있다.
    int start;
    int num;
    
    do {
        printf("시작할 0이 아닌 양의 정수 입력: "); scanf("%d", &start);
    } while(start<=0);

    num=start; // num값을 start값으로 초기화해주어야 나중에 이상한 값이 나오지 않는다.

    while (count < 10) { // 10개의 소수를 출력하는 범위 지정을 하였다.
        bool isPrime = true; // 소수 영역이 주류라는 것을 먼저 선언하여 while 루프문을 진행하였다.

        // 소수는 자기 자신과 1 이외로는 나누어지지 않는 수를 의미하므로 0이 아닌 양의 정수에서 초기값은 2부터 시작하였다.
        for (int i = 2; i * i <= num; i++) { // 약수 a, b가 있다고 하면, (a*b)^(1/2)의 값보다 낮은 a 또는 b가 반드시 존재한다는 산술기하 평균을 적용하였다. 범위의 최댓값을 적용하여 a=b=i로 하였다.
            if (num % i == 0) { // 소수 영역이 아닌 반례 조건을 설정하였다.
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