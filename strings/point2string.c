// Array of pointers to String
// Author: Xhunter
// Date: 05 May 2022
// Time: 05:56 PM

#include<stdio.h>
#include<string.h>

#define MAX 6

char masterlist[max1][max2];
int count;

int add(char *s);
int find(char *s);

int main(){
  char yourname[max2];
  int flag;

  flag = add("akshay");
  if (flag == 0)
    printf("unable to add string\n");

  flag = add("parag");
  if (flag == 0)
    printf("unable to add string\n");

  flag = add("raman");
  if (flag == 0)
    printf("unable to add string\n");

  flag = add("srinivas");
  if (flag == 0)
    printf("unable to add string\n");

  flag = add("gopal");
  if (flag == 0)
    printf("unable to add string\n");

  flag = add("rajesh");
  if (flag == 0)
    printf("unable to add string\n");

  printf("enter your name:");
  gets(yourname);
  flag = find(yourname);

  if (flag == 1)
    printf("welcome, you can enter the palace\n");
  else
    printf("sorry you're a trespasser\n");

  return 0;
}

// adds string to the array
int add(char *s){
  if (count < max1){
    if (strlen(s) < max2){
      strcpy(&masterlist[count][0], s);
      count++; return 1;
    }
  }
  
  return 0;
}

// finds given string
int find(char *s){
  int flag = 0;
  for (int i = 0; i < count; i++){
    if (strcmp(&masterlist[i][0], s) == 0){
      flag = 1; break;
    }
  }
  return flag;
}

