// Author: Xhunter
// Array of pointers to string using malloc
// Date: 05 May 2022
// Time: 07:22 PM

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char *name[5];
  char str[20];

  for (int i = 0; i < 5; i++){
    printf("Enter a string:");
    gets(str);
    name[i] = (char *) malloc (strlen(str) + 1);
    strcpy(name[i], str);
  }
  printf("\n");

  printf("The strings are:\n");

  for (int i = 0; i < 5; i++)
    printf("%s\n", name[i]);

  for (int i = 0; i < 5; i++)
    free(name[i]);

  return 0;
}
