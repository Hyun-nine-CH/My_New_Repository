#include <stdio.h>

typedef struct {
  float realNum;
  float imgNum;
} ComplexType;

ComplexType add(ComplexType p1, ComplexType p2)
{
  ComplexType result;
  result.realNum = p1.realNum + p2.realNum;
  result.imgNum = p1.imgNum + p2.imgNum;
  return result;
}

ComplexType mul(ComplexType p1, ComplexType p2)
{
  ComplexType result;
  result.realNum = p1.realNum*p2.realNum - p1.imgNum*p2.imgNum;
  result.imgNum =  p1.realNum*p2.imgNum + p1.imgNum*p2.realNum;
  return result;
}

int main(void)
{
  ComplexType p1, p2, result;

  printf("복소수 입력1[실수 허수]: ");
  scanf("%f %f", &p1.realNum, &p1.imgNum);
  printf("복소수 입력2[실수 허수]: ");
  scanf("%f %f", &p2.realNum, &p2.imgNum);
  result = add(p1, p2);
  printf("합의 결과] 실수: %.6f, 허수 : %.6f\n", result.realNum, result.imgNum);
  result = mul(p1, p2);
  printf("곱의 결과] 실수: %.6f, 허수 : %.6f\n", result.realNum, result.imgNum);

  return 0;
}