#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ReadUserName(void) {
    char temp[30];
    printf("What's your name? ");
    if (fgets(temp, sizeof(temp), stdin) == NULL) {
        return NULL;
    }

    temp[strcspn(temp, "\n")] = '\0';

    char *name = malloc(strlen(temp) + 1);
    strcpy(name, temp);
    return name;
}

int main(void) {
    char *temp1;
    char *temp2;
    temp1=ReadUserName();
    printf("name1: %s \n", temp1);
    temp2=ReadUserName();
    printf("name2: %s \n", temp2);

    printf("name1: %s \n", temp1);
    printf("name2: %s \n", temp2);
    return 0;
}