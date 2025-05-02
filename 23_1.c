#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

// 인자는 주소가 아니라 값을 입력해야 해서 *

Point SwapPoint(Point *pos1, Point *pos2) {
    Point temp;
    temp = *pos1;
    *pos1 = *pos2;
    *pos2 = temp;

}

Point ShowPosition(Point pos1, Point pos2) {
    printf("[X', Y']: [%d, %d] \n", pos1.xpos, pos1.ypos);
    printf("[X', Y']: [%d, %d] \n", pos2.xpos, pos2.ypos);
}

int main(void) {
    Point pos1={2, 4};
    Point pos2={5, 7};

    printf("[X, Y]: [%d, %d] \n", pos1.xpos, pos1.ypos);
    printf("[X, Y]: [%d, %d] \n", pos2.xpos, pos2.ypos);

    SwapPoint(&pos1, &pos2);
    ShowPosition(pos1, pos2);
    return 0;

}

/*
#include <stdio.h>

typedef struct _point {
  int xpos;
  int ypos;
} Point;

void swap(Point *p1, Point *p2) 
{
  Point tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

void showPosition(Point p)
{
  printf("X : %d, Y : %d\n", p.xpos, p.ypos);
}

int main(void)
{
  Point x1 = { 10, 20 };
  Point x2 = { 30, 40 };

  swap(&x1, &x2);

  printf("Position1 Info : ");
  showPosition(x1);
  printf("Position2 Info : ");
  showPosition(x2);

  return 0;
}
*/