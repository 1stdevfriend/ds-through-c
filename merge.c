// Merging of two arrays
// Author: Xhunter
// Date: 30 Apr 2022
// Time: 05:05 AM

#include<stdio.h>

#define MAX1 5
#define MAX2 7

int *arr;
int* create(int);
void sort(int *, int);
void display(int *, int);
int *merge(int *, int *);

int main(){
  int *a, *b, *c;
  printf("Enter elements for first array:");
  a = create(MAX1);

  printf("Enter elements for second array:");
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

