// Two dimensional array of strings
// Author: Xhunter
// Date: 05 May 2022
// Time: 06:27 PM

#include<stdio.h>

#define MAX1 6
#define MAX2 20

char masterlist[MAX1][MAX2];
int count;

int add(char *s);
int find(char *s);

int main(){
  char yourname[MAX2];
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

  printf("Enter your name:");
  gets(yourname);
  flag = find(yourname);

  if (flag == 1)
    printf("Welcome, you can enter the palace\n");
  else
    printf("Sorry you're a trespasser\n");

  return 0;
}
