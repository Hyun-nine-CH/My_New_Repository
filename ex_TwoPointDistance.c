#include <stdio.h>
#include <math.h>

struct point {
    int xpos;
    int ypos;
};

int main(void) {
    struct point pos1, pos2;
    double distance;

    fputs("point1 pos: ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("point2 pos: ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    distance = sqrt(pow(pos1.xpos - pos2.xpos, 2) + pow(pos1.ypos - pos2.ypos, 2));

    printf("Distance: %f\n", distance);
    return 0;
}