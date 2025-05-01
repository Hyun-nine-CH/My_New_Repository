#include <stdio.h>

int main(void) {
    struct s_data {
        int d1;
        double d2;
        char d3;
    };

    printf("1: %lu\n", sizeof(struct s_data));

    union u_data {
        int d1;
        double d2;
        char d3;
    };

    printf("2: %lu\n", sizeof(union u_data));
    return 0;
}