#include <stdio.h>

typedef struct fren {
    char name[10];
    char sex;
    int age;
} Friend;

int main(void) {
    FILE *fp;
    Friend myfren1;
    Friend myfren2;

    fp=fopen("friend.bin", "wb");
    printf("이름, 성별, 나이 순 입력: ");
    scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren2.age));
    fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
    fclose(fp);

    fp=fopen("friend.bin", "rb");
    fread((void*)&myfren2, sizeof(myfren2), 1, fp);
    printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
    fclose(fp);
    return 0;
}