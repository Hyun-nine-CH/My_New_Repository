#include <stdio.h>

float add(int n1, int n2);
float minus(int n1, int n2);
float mul(int n1, int n2);
float div(int n1, int n2);

int main(void)
{
  int n1, n2;
  char op;
  float result;
  float (*FuncPtr)(int, int);

  printf("input num1 op num2 : ");
  scanf("%d %c %d", &n1, &op, &n2);

  switch(op) {
    case '+': FuncPtr=add; break;
    case '-': FuncPtr=minus; break;
    case '*': FuncPtr=mul; break;
    case '/': FuncPtr=div; break;
    }
  result = FuncPtr(n1, n2);
  printf("%d %c %d = %f\n", n1, op, n2, result);
  return 0;
}

float add(int n1, int n2)
{
  return n1 + n2;
}

float minus(int n1, int n2)
{
  return n1 - n2;
}

float mul(int n1, int n2)
{
  return n1 * n2;
}

float div(int n1, int n2)
{
  return n1 / (float)n2;
}