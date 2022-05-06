// More string functions
// Author: Xhunter
// Date: 06 May 2022
// Time: 02:18 PM

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int search(char *, char);
int isequals(char *, char *);
int issmaller(char *, char *);
int isgreater(char *, char *);
char* getsub(char *, int, int);
char* leftsub(char *, int);
char* rightsub(char *, int);
void upper(char *);
void lower(char *);
void reverse(char *);
int replace(char *, char, char);
int setat(char *, char, int);

int main(){
  char s1[] = "Hello";
  char s2[] = "Hello World";
  char s3[] = "Four hundred thirty two";
  char ch, *s;
  int i;

  printf("String S1: %s\n", s1);

  // Check for the first occurence of a character
  printf("Enter character to search: ");
  scanf("%c", &ch);
  i = search(s1, ch);
  if (i != -1)
    printf("The first occurence of character %c is found at index %d\n", ch, i);
  else
    printf("Character %c is not found in the list", ch);

  printf("String s2: %s\n", s2);

  // Compares two string s1 and s2
  i = isequals(s1, s2);
  if (i == 1)
    printf("Strings s1 and s2 are identical");
  else
    printf("Strings s1 and s2 are not identical");

  // Checks smaller
  i = issmaller(s1, s2);
  if (i == 1)
    printf("Strings s1 is smaller than s2");
  else
    printf("Strings s1 is not smaller than s2");

  // Checks greater
  i = isgreater(s1, s2);
  if (i == 1)
    printf("Strings s1 is greater than s2");
  else
    printf("Strings s1 is not greater than s2");

  // Extract chars at given position
  printf("String s3: %s\n", s3);
  s = getsub(s3, 5, 7);
  printf("Sub string: %s\n", s);
  free(s);

  // Extract leftmost n characters
  s = leftsub(s3, 4);
  printf("Left sub string: %s\n", s);
  free(s);

  // Extract rightmost n characters
  s = leftsub(s3, 4);
  printf("Right sub string: %s\n", s);
  free(s);

  // Convert string to uppercase
  upper(s3);
  printf("String in upper case: %s\n", s3);

  // Convert string to lowercase
  lower(s3);
  printf("String in lower case: %s\n", s3);

  // Reverse the given string
  reverse(s3);
  printf("Reversed string: %s\n", s3);

  // Replace first occurence of one char with new one
  replace(s1, 'H', 'M');
  printf("String s1: %s\n", s1);

  // Sets a chat at a given position
  i = setat(s1, 'M', 3);
  if (i)
    printf("String s1: %s\n", s1);
  else
    printf("Invalid position");

  return 0;
}

// Checks the first occurrence of a character
int search(char *str, char ch){
  int i = 0;
  while(*str){
    if (*str == ch)
      return i;
    str++; i++;
  }
  return -1;
}

// Checks whether two strings are equal
int isequal(char *s, char *t){
  while(*s || *t){
    if (*s != *t)
      return 0;
    s++; t++;
  }
  return 1;
}

// Checks whether first string is less than second
int issmaller(char *s, char *t){
  while(*t){
    if (*s != *t){ 
      if (*s < *t)
        return 1;
      else
        return 0;
    }
    s++; t++;
  }
  return 1;
}


// Checks whether first string is greater than second
int isgreater(char *s, char *t){
  while(*t){
    if (*s != *t){ 
      if (*s > *t)
        return 1;
      else
        return 0;
    }
    s++; t++;
  }
  return 1;
}

// Extracts the character at given position
char* getsub(char *str, int spos, int n){
  char *s = str + spos;
  char *t = (char *) malloc (n + 1);

  int i = 0;
  while(i < n){
    t[i] = *s;
    s++; i++;
  }
  t[i] = '\0';

  return t;
}

// Extracts the leftmost n characters from the string
char* leftsub(char *s, int n){
  char *t = (char *) malloc (n + 1);

  int i = 0;
  while(i < n){
    t[i] = *s;
    s++; i++;
  }
  t[i] = '\0';

  return t;
}

char* rightsub(char *str, int n){
  char *t = (char *) malloc (n + 1);
  int l = strlen(str);
  char *s = str + (l - n);

  int i = 0;
  while(i < n){
    t[i] = *s;
    s++; i++;
  }
  t[i] = '\0';

  return t;
}
