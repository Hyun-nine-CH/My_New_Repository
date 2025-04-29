#include <stdio.h>

void ComplexFuncOne(int **ptr1, int *(*ptr2)[5]) {
    // Function implementation
}
void ComplexFuncTwo(int ***ptr3, int ***(*ptr4)[5]) {
    // Function implementation
}
int main(void) {
    int* arr1[3]; 
    int* arr2[3][5];
    int** arr3[5];
    int*** arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);

    return 0;
}

/*
void ComplexFuncOne(int *arr1[3], int *(*arr2)[5]) {
    // Function implementation
}
void ComplexFuncTwo(int **arr1[5], int ***(*arr2)[5]) {
    // Function implementation
}
int main(void) {
    int* arr1[3]; 
    int* arr2[3][5];
    int** arr3[5];
    int*** arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);

    return 0;
}
*/