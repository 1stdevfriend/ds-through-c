// Two dimensional array of strings
// Author: Xhunter
// Date: 05 May 2022
// Time: 06:27 PM

#include<stdio.h>
#include<string.h>

#define MAX 6

char *names[MAX];
int count;

int add(char *s);
void swap(int, int);
void show();

int main(){
  int flag;

  flag = add("akshay");
  if (flag == 0)
    printf("Unable to add string\n");

  flag = add("parag");
  if (flag == 0)
    printf("Unable to add string\n");

  flag = add("raman");
  if (flag == 0)
    printf("Unable to add string\n");

  flag = add("srinivas");
  if (flag == 0)
    printf("Unable to add string\n");

  flag = add("gopal");
  if (flag == 0)
    printf("Unable to add string\n");

  flag = add("rajesh");
  if (flag == 0)
    printf("Unable to add string\n");

  printf("Names before swapping:");
  show();

  swap(2, 3);
  printf("Names after swapping:");
  show();

  return 0;
}

// Adds string to the array
int add(char *s){
  if (count < MAX){
    names[count] = s;
    count++;
    return 1;
    }
  
  return 0;
}
