// Basic array operations
// Author: Xhunter
// Date: 30 Apr 2022
// Time: 04:33 AM

#include<stdio.h>
#define MAX 5

void insert(int *, int pos, int num);
void del(int *, int pos);
void reverse(int *);
void display(int *);
void search(int *, int num);

int main(){
  int arr[5];
  insert(arr, 1, 11);
  insert(arr, 2, 12);
  insert(arr, 3, 13);
  insert(arr, 4, 14);
  insert(arr, 5, 15);

  printf("Elements of Array:\n");
  display(arr);

  del(arr, 5);
  del(arr, 2);
  printf("After deletion:\n");
  display(arr);

  insert(arr, 2, 222);
  insert(arr, 5, 555);
  printf("After insertion:\n");
  display(arr);

  reverse(arr);
  printf("After reversing:\n");
  display(arr);

  search(arr, 222);
  search(arr, 666);

  return 0;
}

// Inserts an element num at given position pos
void insert(int *arr, int pos, int num){
  int i;
  for (i = MAX - 1; i >= pos; i--)
    arr[i] = arr[i-1]; // Shifting values to right
  arr[i] = num;
}

// Deletes an element from the given position pos
void del(int *arr, int pos){
  int i;
  for (i = pos; i < MAX; i++) 
    arr[i - 1] = arr[i]; // Shifting values to left
  arr[i] = 0;  // FIXME: Check why it isn't giving 0
}

// Reverses the entire array
void reverse(int *arr){
  for (int i = 0; i < MAX/2; i++){
    int temp = arr[i];
    arr[i] = arr[MAX - 1 - i];
    arr[MAX - 1 - i] = temp;
  }
}

// Searches array for a given elements num
void search(int *arr, int num){
  int i; 
  for (i = 0; i < MAX; i++){
    if (arr[i] == num){
      printf("The elements %d is present at %dth position.\n", num, i+1);
      return ;
    }
  }
  if (i == MAX)
    printf("The elements %d is not present in the array.\n", num);
}

// Display the contents of a array
void display(int *arr){
  for(int i = 0; i < MAX; i++) // Traversing
    printf("%d\t", arr[i]);
  printf("\n");
}
