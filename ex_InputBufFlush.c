#include <stdio.h>

void ClearLineFromReadBuffer(void) {
    while(getchar()!='\n');
}

int main(void) {
    char perID[7];
    char name[10];

    fputs("Enter your ID: ", stdout);
    fgets(perID, sizeof(perID), stdin);

    ClearLineFromReadBuffer();

    fputs("Enter your name: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("ID: %s \n", perID);
    printf("Name: %s \n", name);
    return 0;
}