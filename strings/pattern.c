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
  if (pos == -1)
    printf("The pattern string is not found");
  else
    printf("The pattern string is found at position %d\n", pos);

  return 0;
}

// Searches for the given pattern s2 into the string s1
int xstrsearch(char* s1, char* s2){
  int i, j, k;

  int l1 = strlen(s1);
  int l2 = strlen(s2);
  printf("%d\t", l1);
  printf("%d\t", l2);

  for (i = 0; i <= l1 - l2; i++){
    j = 0;
    k = i;
    while((s1[k] == s2[j]) && (j < l2)){
      printf("%c\t", s1[k]);
      printf("%c\t", s2[j]);
      k++; j++;
    }
    if (j == l2)
      return i;
  }
  return -1;
}
