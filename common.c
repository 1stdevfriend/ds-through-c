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

// Create matrix
void create(int mat[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++){
      printf("Enter the element: ");
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\n");
}

// Displays the content of the matrix
void display(int mat[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++)
      printf("%d\t", mat[i][j]);
  }
  printf("\n");
}

// Adds two matrics m1 and m2
void matadd(int m1[3][3],int m2[3][3], int m3[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++)
      m3[i][j] = m1[i][j] + m2[i][j];
  }
}

// Multiplies two matrics m1 and m2
void matmul(int m1[3][3], int m2[3][3], int m3[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++){
      m3[i][j] = 0;
      for (int k = 0; k < MAX; k++)
        m3[i][j] += m1[i][k] * m2[k][j];
    }
  }
}

// Obtains transpose of a matrix m1
void transpose(int m1[3][3], int m2[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++)
      m2[i][j] = m1[j][i];
  }
}

