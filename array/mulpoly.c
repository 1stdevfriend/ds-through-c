// Multipication of polynomials
// Author: Xhunter
// Date: 3 May 2022
// Time: 01:29 AM

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
void polyappend(struct poly *, int, int);
struct poly polyadd(struct poly, struct poly);
struct poly polymul(struct poly, struct poly);
void display(struct poly);

int main(){
  struct poly p1, p2, p3;

  initpoly(&p1);
  initpoly(&p2);
  initpoly(&p3);

  polyappend(&p1, 1, 4);
  polyappend(&p1, 2, 3);
  polyappend(&p1, 2, 2);
  polyappend(&p1, 2, 1);

  polyappend(&p2, 2, 3);
  polyappend(&p2, 3, 2);
  polyappend(&p2, 4, 1);

  p3 = polymul(p1, p2);

  printf("First polynomial:");
  display(p1);

  printf("Second polynomial:");
  display(p2);

  printf("Resultant polynomial:");
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

// Adds term of polynomial to the array
void polyappend(struct poly *p, int coeff, int exp){
  p -> t[p -> noofterms].coeff = coeff;
  p -> t[p -> noofterms].exp = exp;
  (p -> noofterms) ++;
}

// Displays the polynomial equation
void display(struct poly p){
  int flag = 0;
  for (int i = 0; i < p.noofterms; i++){
    if (p.t[i].exp != 0)
      printf("%dx^%d + ", p.t[i].coeff, p.t[i].exp);
    else{
      printf("%d", p.t[i].coeff);
      flag = 1;
    }
  }
  if (!flag)
    printf("\b\b ");
  printf("\n\n");
}

// Adds two polynomials p1 and p2
struct poly polyadd(struct poly p1, struct poly p2){
  struct poly p3;
  initpoly(&p3);

  int c = 0;
  if (p1.noofterms > p2.noofterms)
    c = p1.noofterms;
  else
    c = p2.noofterms;

  for (int i = 0, j = 0; i <= c; p3.noofterms++){
    if (p1.t[i].coeff == 0 && p2.t[j].coeff == 0)
      break;
    if (p1.t[i].exp >= p2.t[j].exp)
    {
      if (p1.t[i].exp == p2.t[j].exp){
        p3.t[p3.noofterms].coeff = p1.t[i].coeff + p2.t[j].coeff;
        p3.t[p3.noofterms].exp = p1.t[i].exp;
        i++; j++;
      }
      else {
        p3.t[p3.noofterms].coeff = p1.t[i].coeff;
        p3.t[p3.noofterms].exp = p1.t[i].exp;
        i++;
      }
    }
    else {
        p3.t[p3.noofterms].coeff = p2.t[j].coeff;
        p3.t[p3.noofterms].exp = p2.t[j].exp;
        i++;
    }
  }
  return p3;
}

// Multiples two polynomials p1 and p2
struct poly polymul(struct poly p1, struct poly p2){
  int coeff, exp;
  struct poly temp, p3;

  initpoly(&temp);
  initpoly(&p3);

  if (p1.noofterms != 0 && p2.noofterms !=0){
    for (int i = 0; i < p1.noofterms; i++){
      struct poly p;
      initpoly(&p);

      for (int j = 0; j < p2.noofterms; j++){
        coeff = p1.t[i].coeff * p2.t[j].coeff;
        exp = p1.t[i].exp + p2.t[j].exp;
        polyappend(&p, coeff, exp);
      }

      if (i != 0){
        p3 = polyadd(temp, p);
        temp = p3;
      } else {
        temp = p;
      }
    }
  }

  return p3;
}
