/*
#include <stdio.h>
// #include <string.h>
#include <stdbool.h>

int main(int argc, char **argv) { // 인자로 받으라고 하면
    int a_cnt=0, p_cnt=0;
    char ch;
    char str[BUFSIZ];
//    char str[128];
    FILE *fp;
    bool isFirst=true;

    if(argc<1) {
        fprintf(stderr, "Usage : %s filename\n", argv[0]);
        return -1;
    }
    fp=fopen(argv[1], "rt");

    do {
        fgets(str, BUFSIZ, fp);
        for(int i=0; i<strlen(str); i++) {}
//        char str[32];
//        scanf("%s", str);
//        ch=str[0];
//        ch=fgetc(fp);
        if(isFirst) {
            if(ch=='A' || ch=='a')
                a_cnt++;
            else if (ch=='P' || ch=='p')
                p_cnt++;
            isFirst=false;
        }    
        if(ch==' ' || ch=='\t' || ch=='\n')
            isFirst=true;

        printf("%c", ch);
    } while(ch !=EOF); // while(!feof(fp));

    printf("Count of words with A start: %d\n", a_cnt);
    printf("Count of words with P start: %d\n", p_cnt);

    fclose(fp);
    return 0;
}
*/

// fgets, fgetc로 구현하는 거는 아래보다 더 어려움

///*
#include <stdio.h>

int main(int argc, char **argv)
{
  int a_cnt = 0, p_cnt = 0;
  char str[32];
  FILE* fp;

  if(argc < 1) {
    fprintf(stderr, "Usage : %s filename\n", argv[0]);
    return -1;
  } // error clear

  fp = fopen(argv[1], "rt"); // 1번째 인자

  if (fp == NULL) {
    perror("파일 열기 실패");
    return -1;
    }

    /*
    <실행법>
    gcc -o challenge____04 challenge____04.c
    ./challenge____04 test.txt
    */

  do {
    fscanf(fp, "%s", str);
    if (str[0] == 'A' || str[0] == 'a')
      a_cnt++;
    else if (str[0] == 'P' || str[0] == 'p') 
      p_cnt++;
  } while(!feof(fp));

  printf("Count of words with A start: %d\n", a_cnt);
  printf("Count of words with P start: %d\n", p_cnt);

  fclose(fp);

  return 0;
}
//*/

/*
#include <stdio.h>

int main(int argc, char **argv)
{
  int a_cnt = 0, p_cnt = 0;
  char str[32];
  FILE* fp;

  if(argc < 1) {
    fprintf(stderr, "Usage : %s filename\n", argv[0]);
    return -1;
  }

  fp = fopen(argv[1], "rt");

  while(!feof(fp)) {
    str[0] = '\0';
    fscanf(fp, "%s", str);
    if (str[0] == 'A' || str[0] == 'a')
      a_cnt++;
    else if (str[0] == 'P' || str[0] == 'p') 
      p_cnt++;
  }

  printf("Count of words with A start: %d\n", a_cnt);
  printf("Count of words with P start: %d\n", p_cnt);

  fclose(fp);

  return 0;
}
*/

/*
// fgets
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
  int a_cnt = 0, p_cnt = 0;
  char ch;
  bool isFirst = true;
  FILE* fp;

  if(argc < 1) {
    fprintf(stderr, "Usage : %s filename\n", argv[0]);
    return -1;
  }

  fp = fopen(argv[1], "rt");

  while(!feof(fp)) {
    ch = fgetc(fp);
    if(isFirst) { 
        if (ch == 'A' || ch == 'a')
          a_cnt++;
        else if (ch == 'P' || ch == 'p') 
          p_cnt++;
        isFirst = false;
    }

    if(ch == ' ' || ch == '\t' || ch == '\n')
      isFirst = true;

    if(ch != EOF) printf("%c", ch);
  }

  printf("Count of words with A start: %d\n", a_cnt);
  printf("Count of words with P start: %d\n", p_cnt);

  fclose(fp);

  return 0;
}
*/