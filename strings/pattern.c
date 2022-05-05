// Author: Xhunter
// Pattern matching
// Date: 05 May 2022
// Time: 07:37 PM

#include<stdio.h>
#include<string.h>


int xstrsearch(char *, char *);
void show();

int main(){
  char s1[] = "NagpurKicit";
  char s2[] = "Kicit";
  int pos;

  printf("String s1:%s\n\n", s1);
  printf("String s2:%s\n\n", s2);

  // Search if s2 is present in s1
  pos = xstrsearch(s1, s2);
  printf("The pattern string is found at position %d\n", pos);

  return 0;
}
