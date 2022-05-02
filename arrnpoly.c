// Array anr Polynomials
// Author: Xhunter
// Date: 2 May 2022
// Time: 06:28 PM

#include<stdio.h>
#define MAX 10

struct term{
  int coeff;
  int exp;
};

struct poly{
  struct term t[10];
  int noofterms;
};

void initpoly(struct poly *);
void polyappend(struct poly *, int c, int e);
struct poly polyadd(struct poly, struct poly);
void display(struct poly);

int main(){
  struct poly p1, p2, p3;

  initpoly(&p1);
  initpoly(&p2);
  initpoly(&p3);

  polyappend(&p1, 1, 7);
  polyappend(&p1, 2, 6);
  polyappend(&p1, 3, 5);
  polyappend(&p1, 4, 4);
  polyappend(&p1, 5, 2);

  polyappend(&p2, 1, 4);
  polyappend(&p2, 1, 3);
  polyappend(&p2, 1, 2);
  polyappend(&p2, 1, 1);
  polyappend(&p2, 2, 0);

  p3 = polyadd(p1, p2);

  printf("First polynomial:");
  display(p1);

  printf("Second polynomial:");
  display(p2);

  printf("Third polynomial:");
  display(p3);

  return 0;
}

// Initializes elements of struct poly
void initpoly(struct poly *p){
  p -> noofterms = 0;
  for (int i = 0; i < MAX; i++){
    p -> t[i].coeff = 0;
    p -> t[i].exp = 0;
  }
}
