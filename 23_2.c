#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point bottomleft;
    Point topright;
} Rectangle;

int areaCal(Rectangle r) {
    return (r.topright.xpos - r.bottomleft.xpos) * (r.topright.ypos - r.bottomleft.ypos);
}

void ShowRectangleInfo(Rectangle r) {
    printf("the topright position: [%d, %d] \n", r.topright.xpos, r.topright.ypos);
    printf("the bottomright position: [%d, %d] \n", r.topright.xpos, r.bottomleft.ypos);
    printf("the bottomleft position: [%d, %d] \n", r.bottomleft.xpos, r.bottomleft.ypos);
    printf("the topleft position: [%d, %d] \n", r.bottomleft.xpos, r.topright.ypos);
}

int main(void) {
    Point pos1 = {0, 0};
    Point pos2 = {100, 100};
    Rectangle r = {pos1, pos2};

    printf("Origin [X, Y]: [%d, %d] \n", pos1.xpos, pos1.ypos);
    printf("Target [X', Y']: [%d, %d] \n", pos2.xpos, pos2.ypos);
    ShowRectangleInfo(r);
    printf("the Area of Rectangle: %d \n", areaCal(r));

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