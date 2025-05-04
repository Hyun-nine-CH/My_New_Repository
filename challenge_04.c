#include <stdio.h>

int main(void) {
    int cream, shrimp, cola;
    int price_cream = 500, price_shrimp = 700, price_cola = 400; // 보통 한나라의 물가가 하루아침에 들쭉날쭉되지는 않는다. 따라서 단가는 거의 상수로 정해져 있다.
    int budget; // 소유하고 있는 자본은 개인마다 그리고 1초 단위로 들쭉날쭉 할 수 있다. 따라서 이런 값은 사용자가 직접 입력하도록 하였다.

    do {
        printf("현재 당신이 소유하고 있는 금액: "); scanf("%d", &budget); // 문자열 출력은 printf()를, 그리고 정수나 문자, 문자열 입력은 scanf()로 한줄로 병합하였다.
    } while(budget<price_cola+price_cream+price_shrimp); // 제시된 조건에서는 각각 1개이상은 구매해야하기 때문에 do while 문을 적용하였다.

    for (cream = 1; cream <= budget / price_cream; cream++) { // 각각의 품목을 최대 몇개를 살 수 있는지를 알아보고 그것을 모두 동시에 계산하면서 마지막에 budget과 일치하도록 유도하였다.
        for (shrimp = 1; shrimp <= budget / price_shrimp; shrimp++) {
            for (cola = 1; cola <= budget / price_cola; cola++) {
                int total = cream * price_cream + shrimp * price_shrimp + cola * price_cola;
                if (total == budget) {
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cream, shrimp, cola);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까?");
    return 0;
}