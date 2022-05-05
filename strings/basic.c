// Basic strings operations
// Author: Xhunter
// Date: 05 May 2022
// Time: 05.15 PM

#include<stdio.h>
#include<string.h>

int xstrlen(char *);
void xstrcpy(char *, char *);
void xstrcat(char *, char *);
int xstrcmp(char *, char *);
void show(char *);

int main(){
  char s1[] = "kicit";
  char s2[] = "Nagpur";
  char s3[20];
  int len;

  printf("String S1:%s\n", s1);
  len = xstrlen(s1);
  printf("Length of the string S1: %d\n", len);

  printf("String S2:%s\n", s2);

  xstrcpy(s3, s1);
  printf("String s3 after copying s1 to it: %s\n", s3);

  xstrcat(s3,s2);
  printf("String s3 after concatenation s2 to it: %s\n", s3);

  if(xstrcmp(s1,s2) == 0)
    printf("The strings s1 & s2 are simliar\n");
  else
    printf("The strings s1 & s2 are not simliar\n");

  return 0;
}

// Finds the length of the string
int xstrlen(char *s){
  int l = 0;
  while(*s){
    l++;
    s++;
  }
  return l;
}

// Copies source string s to the targer string t
void xstrcpy(char *t, char *s){
  while(*s){
    *t = *s;
    t++;
    s++;
  }
  *t = '\0';
}

// Concatenate two stings
void xstrcat(char *t, char *s){
  while(*t)
    t++;
  while(*s)
    *t = *s;
  *t = '\0';
}
