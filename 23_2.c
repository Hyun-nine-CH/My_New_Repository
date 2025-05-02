#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point bottomleft;
    Point topright;
} Rectangle;

void areaCal(Rectangle r) {
    return (r.bottomleft.xpos)
}

void ShowRectangleInfo(Rectangle * rptr) {

}

int main(void) {
    Point pos1 = {0, 0};
    Point pos2 = {100, 100};
    Rectangle r = {pos1,pos2};

    printf("[X, Y]: [%d, %d] \n", pos1.xpos, pos2.ypos);

}

/*
#include <stdio.h>

typedef struct point {
  int xpos;
  int ypos;
} Point; 

typedef struct rectangle {
  Point topLeft;
  Point bottomRight;
} Rectangle;

int calArea(Rectangle r) 
{
  return (r.bottomRight.xpos - r.topLeft.xpos) * \
         (r.bottomRight.ypos - r.topLeft.ypos);
}

void showInfo(Rectangle r)
{
  printf("Top Left : (%d, %d)\n", r.topLeft.xpos, r.topLeft.ypos);
  printf("Top Right : (%d, %d)\n", r.bottomRight.xpos, r.topLeft.ypos);
  printf("Bottom left : (%d, %d)\n", r.topLeft.xpos, r.bottomRight.ypos);
  printf("Bottom Right : (%d, %d)\n", r.bottomRight.xpos, r.bottomRight.ypos);
}

int main(int argc, char **argv)
{
  Point x1 = { 0, 0 };
  Point x2 = { 100, 100 };
  Rectangle r = { x1, x2 };

  showInfo(r);
  printf("Area : %d\n", calArea(r));

  return 0;
}
*/