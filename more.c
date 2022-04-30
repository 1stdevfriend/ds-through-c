// More matrix operations
// Author: Xhunter
// Time: 03:39 PM
// Date: 30 Apr 2022

#include<stdio.h>
#include<math.h>

#define MAX 3

void matrix(int [3][3]);
void create(int [3][3]);
void display(int [3][3]);
void matmul(int [3][3], int[3][3], int[3][3]);
void transpose(int[3][3], int[3][3]);
double determinant(int [3][3]);
int isortho(int [3][3]);

int main(){
  int mat[3][3];
  double d;

  printf("Enter elements for array:\n\n");
  create(mat);

  printf("The matrix:\n");
  display(mat);

  d = determinant(mat);
  printf("The determinant for given matrix: %d\n\n", d);

  if (d == 0)
    printf("Matrix is singular.\n\n");
  else
    printf("Matrix is not singular.\n\n");

  d = isortho(mat);
  if (d != 0)
    printf("Matrix is orthogonal.\n\n");
  else
    printf("Matrix is not orthogonal.\n\n");

  return 0;
}

// Initialize matrix with 0s
void matrix(int mat[3][3]){
  for (int i = 0 ; i < MAX; i++){
    for (int j = 0; j < MAX; j++)
      mat[i][j] = 0;
  }
}

// Creates matrix
void create(int mat[3][3]){
  int num;
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++){
      printf("Enter the element: ");
      scanf("%d", &num);
      mat[i][j] = num;
    }
  }
  printf("\n");
}
