// Common matrix operations
// Author: Xhunter
// Time: 05:05 AM
// Date: 30 Apr 2022

#include<stdio.h>

#define MAX 3

void create(int [3][3]);
void display(int [3][3]);
void matadd(int[3][3], int[3][3], int[3][3]);
void matmul(int[3][3], int[3][3], int[3][3]);
void transpose(int[3][3], int[3][3]);

int main(){
  int mat1[3][3], mat2[3][3], mat3[3][3], mat4[3][3], mat5[3][3];

  printf("Enter elements for the first array:\n\n");
  create(mat1);

  printf("Enter elements for the second array:\n\n");
  create(mat2);

  printf("First Array:\n");
  display(mat1);
  printf("Second Array:\n");
  display(mat2);

  matadd(mat1, mat2, mat3);
  printf("After addition:\n");
  display(mat3);

  matmul(mat1, mat2, mat4);
  printf("After multiplication:\n");
  display(mat4);

  transpose(mat1, mat5);
  printf("Transpose of first matrix:\n");
  display(mat5);

  return 0;
}