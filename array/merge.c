// Merging of two arrays
// Author: Xhunter
// Date: 30 Apr 2022
// Time: 05:05 AM

#include<stdio.h>
#include<stdlib.h>

#define MAX1 5
#define MAX2 7

int *arr;
int* create(int);
void sort(int *, int);
void display(int *, int);
int *merge(int *, int *);

int main(){
  int *a, *b, *c;
  printf("Enter elements for first array\n");
  a = create(MAX1);

  printf("Enter elements for second array\n");
  b = create(MAX2);

  sort(a, MAX1);
  sort(b, MAX2);

  printf("First array:\n");
  display(a, MAX1);
  printf("Second array:\n");
  display(b, MAX2);

  printf("After merging:\n");
  c = merge(a, b);
  display(c, MAX1 + MAX2);

  return 0;
}

// Create array of given size
int* create(int size){
  int *arr;
  arr = (int *) malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++){
    printf("Enter element no. %d:", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("\n");
  return arr;
}

// Sorts array in ascending order
void sort(int *arr, int size){
  for (int i = 0; i < size; i++){
    for (int j = i + 1; j < size; j++){
      if (arr[i] > arr[j]){ // Bubble sorting
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

// Displays the content of array
void display(int *arr, int size){
  for (int i = 0; i < size; i++)
      printf("%d\t", arr[i]);
  printf("\n");
}

// Merges two arrays
int *merge(int *a, int *b){
  int *arr;
  int i, j, k;
  int size = MAX1 + MAX2;

  arr = (int *) malloc (sizeof(int) * size);

  for(k = 0, j = 0, i = 0; i <= size; i++){
    if (a[k] < b[j]){
      arr[i] = a[k];
      k++;
      if ( k >= MAX1){
        for (i++; j < MAX2; j++, i++)
          arr[i] = b[j];
      }
    }
    else{
      arr[i] = b[j];
      j++;
      if (j >= MAX2){
        for (i++; k < MAX1; k++, i++)
          arr[i] = a[k];
      }
    }
  }

  return arr;
}

