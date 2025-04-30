#include <stdio.h>

int main(void) {
    char name1[BUFSIZ], name2[BUFSIZ];
    int age1, age2;

    scanf("%s %d", name1, &age1);
    scanf("%s %d", name2, &age2);

    printf("%s %d\n", name1, age1);
    printf("%s %d\n", name2, age2);
    return 0;
}