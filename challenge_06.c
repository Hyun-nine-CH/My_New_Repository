#include <stdio.h>

int main(void) {
    int totalSeconds;
    int hours, minutes, seconds;

    printf("초(second) 입력: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600; // 1초 단위로 1시간을 환산하면 3600초이므로 3600으로 나눠준다.
    minutes = (totalSeconds % 3600) / 60; // 1시간이 안되는 값을 1분 단위로 나타내기 위해서는 1분에 해당하는 60초로 나눠주면 되겠다.
    seconds = totalSeconds % 60; // 1분이 안되는 값을 1초 단위로 몇번 들어가는지 알아낸다.

    printf("[h:%d, m:%d, s:%d]\n", hours, minutes, seconds);
    return 0;
}