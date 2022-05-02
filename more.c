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

// Display contents of matrix
void display(int mat[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++)
      printf("%d\t", mat[i][j]);
    printf("\n");
  }
  printf("\n");
}

// Multiples two matrices
void matmul(int mat1[3][3], int mat2[3][3], int mat3[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++){
      mat1[i][j] = 0;
      for (int k = 0; k < MAX; k++)
        mat1[i][j] += mat2[i][k] * mat2[k][j];
    }
  }
}

// Obtains traspose of matrix m1
void traspose(int mat1[3][3], int mat2[3][3]){
  for (int i = 0; i < MAX; i++){
    for (int j = 0; j < MAX; j++)
      mat2[i][j] = mat1[j][i];
  }
}

// Finds the determinant value for given matrix
double determinant(int mat[3][3]){
  int j=1, k=MAX-1;
  double sum, p;
  sum = 0.0; 

  for (int i = 0; i < MAX; i++){
    p = pow(-1.0, i);
    if (i == MAX-1)
      k = 1;
    sum += (mat[0][i] * (mat[1][j] * mat[2][k] - mat[2][j] * mat[1][k])) * p;
    j = 0;
  }
  return sum;
}

// Checks orthogonal matrix
int isortho(int mat[3][3]){
  int m1[3][3], m2[3][3];

  transpose(mat, m1);
  matmul(mat, m1, m2);

  int i = 0;
  for (i = 0; i < MAX; i++){
    if(m2[i][i] != 1)
      break;
  }
  
  if (i == MAX)  // Flag return values
    return 1;
  else
    return 0;
}
