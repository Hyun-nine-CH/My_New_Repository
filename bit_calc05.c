#include <stdio.h>
#include <math.h>

int main(void) {
    double rad;
    double area;

    printf("input the size of radius :");
    scanf("%lf", &rad);
    area = M_PI * rad * rad;
    printf("area of circle = %lf\n", area);
    printf("area of circle = %.2f\n", area);
    printf("area of circle = %.3f\n", area);
    printf("area of circle = %.4f\n", area);
    printf("area of circle = %.5f\n", area);


    printf("area of circle = %e\n", area);
    printf("area of circle = %E\n", area);
    printf("area of circle = %g\n", area);

    return 0;
}