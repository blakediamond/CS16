#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>
#include "poly.h"

using namespace std;

int main(void) {
  unsigned exponent, done;
  double coeff;
  char command;
  double value;
  TermPtr poly1 = NULL, poly2 = NULL, newpoly = NULL;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2); 


// Asks user to enter two polynomials by providing one coefficient-exponent pair in each line,
// entering 0 0 terminates the polynomial entry.
  cout << "Enter polynomials by entering coefficient exponent pairs (terminate by 0 0)" << endl;
  cout << "Enter polynomial 1" << endl;
  done = 0;
  while (!done) {
    cin >> coeff >> exponent;
    if (coeff == 0) done = 1;
    else addTerm(poly1, coeff, exponent);
  } 

  cout << "Enter polynomial 2" << endl;
  done = 0;
  while (!done) {
    cin >> coeff >> exponent;
    if (coeff == 0) done = 1;
    else addTerm(poly2, coeff, exponent);
  } 

  cout << "Polynomial 1:" << endl;
  printPoly(poly1);
  cout << "Polynomial 2:" << endl;
  printPoly(poly2);

// After two polynomials are entered the user can use the following commands to 
// request the following operations on the two polynomials:
// a : adds two polynomials and prints the resulting polynomial
// s : subtracts the second polynomial from the first and prints the resulting polynomial
// m : multiplies the two polynomials and prints the resulting polynomial
// e : asks for an input value and evaluates the polynomial on that value
// q : quits
  done = 0;
  while (!done) {
    cout << "Commands: a (add), s (subtract), m (multiply), e (evaluate), q (quit)" << endl;
    cout << "Enter a command:" << endl;
    cin >> command;
    switch (command) {
      case 'e': cout << "Enter a value to evaluate:" << endl;
                cin >> value;
                cout << "Evaluation of Polynomial 1 on value " << value << " : " << evaluate(poly1, value) << endl;
                cout << "Evaluation of Polynomial 2 on value " << value << " : " << evaluate(poly2, value) << endl;
                break;
      case 'a': newpoly = add(poly1, poly2);
                cout << "Result of adding two polynomials:" << endl;
                printPoly(newpoly);
                deletePoly(newpoly);
                break;
      case 's': newpoly = subtract(poly1, poly2);
                cout << "Result of subtracting two polynomials:" << endl;
                printPoly(newpoly);
                deletePoly(newpoly);
                break;
     case 'm':  newpoly = multiply(poly1, poly2);
                cout << "Result of multiplying two polynomials:" << endl;
                printPoly(newpoly);
                deletePoly(newpoly);
                break;
      case 'q': done = 1;
                break;
      default: cout << "Unrecognized command" << endl;
    }
  }

  deletePoly(poly1);
  deletePoly(poly2);
  deletePoly(newpoly);
}


// BEGIN PART TO WRITE
// write the function definitions for
// evaluate, add, subtract and multiply functions
// by replacing the stubs given below

double evaluate(TermPtr p, double v) {
  double total  = 0.0;	

	while (p != NULL ) {
		total = total + ( p->coeff * pow(v, p->exponent));
		p = p->next;
	}

  return total;
}

TermPtr add(TermPtr p1, TermPtr p2) {
	TermPtr head, total  = new Term;
	head = total;

	while ( p1 != NULL && p2 != NULL ) {
                if ( p1->exponent == 0 && p2->exponent == 0 ) {
                        TermPtr A  = new Term;
                        A ->coeff = p1->coeff - p2->coeff;
                        A->exponent = 0;
                        total->next = A;
                        total = total->next;
                        total->next = NULL;
		}
		else if ( p1->exponent > p2->exponent ) {
			TermPtr A  = new Term;
			A->coeff = p1->coeff;
			A->exponent = p1->exponent;
			total->next = A;
			total = total->next;
			total->next = NULL;
			p1 = p1->next;
		}


		else if ( p1->exponent == p2->exponent ) {
			TermPtr add = new Term;
			add->coeff = p1->coeff + p2->coeff;
			add->exponent = p1->exponent;
			total->next = add;
			total = total->next;
			total->next = NULL;
			p1 = p1->next;
			p2 = p2->next;
		}
		else if ( p1->exponent < p2->exponent ) {
			TermPtr X  = new Term;
			X->coeff = p2->coeff;
			X->exponent = p2->exponent;
			total->next = X;
			total = total->next;
			total->next = NULL;
			p2 = p2->next;
		}
	}

	TermPtr clean = new Term,here , F;
	F = clean;

        while ( head != NULL ) {
		here  = new Term;
                if ( head->coeff == 0.0 ) head = head->next;
                else {
                        here->exponent = head->exponent;
                        here->coeff = head->coeff;
                        clean->next = here;
                        clean = clean->next;
                        clean->next = NULL;
                        head = head->next;
                }
        }
	F = F->next;
        return F;
} 



TermPtr subtract(TermPtr p1, TermPtr p2) {
          TermPtr head, dif = new Term;
        head = dif;

        while ( p1 != NULL && p2 != NULL ) {
		if ( p1->exponent == 0 && p2->exponent == 0 ) {
			TermPtr A  = new Term;
			A ->coeff = p1->coeff - p2->coeff;
			A ->exponent = 0;
			dif->next = A;
			dif = dif->next;
			dif->next = NULL;
		}
                else if ( p1->exponent > p2->exponent ) {
                        TermPtr B  = new Term;
                        B->coeff = p1->coeff;
                        B->exponent = p1->exponent;
                        dif->next = B;
                        dif = dif->next;
                        dif->next = NULL;
                        p1 = p1->next;
                }
                else if ( p1->exponent == p2->exponent ) {
                        TermPtr C = new Term;
                        C->coeff = p1->coeff + -1*p2->coeff;
                        C->exponent = p1->exponent;
                        dif->next = C;
                        dif = dif->next;
                        dif->next = NULL;
                        p1 = p1->next;
                        p2 = p2->next;
                }
                else if ( p1->exponent < p2->exponent ) {
                        TermPtr D = new Term;
                        D->coeff = -1*p2->coeff;
                        D->exponent = p2->exponent;
                        dif->next = D;
                        dif = dif->next;
                        dif->next = NULL;
                        p2 = p2->next;
                }
        }

	TermPtr here, F, clean = new Term;
	F = clean;

        while ( head != NULL ) {
		here  = new Term;
                if ( head->coeff == 0.0 ) head = head->next;
                else {
                        here->exponent = head->exponent;
                        here->coeff = head->coeff;
                        clean->next = here;
                        clean = clean->next;
                        clean->next = NULL;
                        head = head->next;
                }
        }
	F = F->next;
        return F;






	
}

TermPtr multiply(TermPtr p1, TermPtr p2) {

	TermPtr head, prod = new Term, search, add, p2search;
	head = prod;
	
	unsigned exponent;
	double coeff;
	bool newEx = true;
	int items = 0;

	while ( p1 != NULL ) {
		p2search = p2;
		while ( p2search != NULL ) {
			newEx = true;
			exponent = p1->exponent + p2search->exponent;
			coeff = p1->coeff * p2search->coeff;
			search = head;
			while ( search != NULL ) {
				
				if ( search->exponent == exponent ) {
					search->coeff += coeff;
					newEx = false;
					break;
				}
				search = search->next;
			}

			if ( newEx ) {
				add = new Term;
				add->coeff = coeff;
				add->exponent = exponent;
				prod->next = add;
				prod = prod->next;
				prod->next = NULL;
				items++;
			}
			p2search = p2search->next;
		}
		p1 = p1->next;
	}
	

	TermPtr nextT, current;
	unsigned tempexp;
	double tempcoeff;

	for ( int i = 0 ; i < items ; i++ ) {
		current = head;
		nextT = head;
		nextT = nextT->next;
		while ( nextT != NULL ) {
			if ( nextT->exponent > current->exponent ) {
				tempexp = nextT->exponent;
				nextT->exponent = current->exponent;
				current->exponent = tempexp;
			
				tempcoeff = nextT->coeff;
				nextT->coeff = current->coeff;
				current->coeff = tempcoeff;
			}
			current = current->next;
			nextT = nextT->next;
		}
	} 

	TermPtr front, clean = new Term;
	front = clean;
	while ( head != NULL ) {
		current = new Term;
		if ( head->coeff == 0.0 ) head = head->next;
		else {
			current->exponent = head->exponent;
			current->coeff = head->coeff;
			clean->next = current;
			clean = clean->next;
			clean->next = NULL;
			head = head->next;
		}
	}
	front = front->next;
	return front;
}


				
// END PART TO WRITE


void deletePoly(TermPtr& poly) {
  TermPtr current = poly, previous;

  if (current == NULL)
    return;
  do {
    previous = current;
    current = current->next;
    delete previous;
  } while (current != NULL);
  poly = NULL;
}

void printPoly(TermPtr poly) {
  TermPtr current;
  current = poly;
  
  if (current == NULL) {
    cout << "0" << endl;
    return;
  }

  cout << current->coeff << " * X^" << current->exponent;
  current = current->next;
  while (current != NULL) {
    if (current->coeff > 0.0)
      cout << " + " << current->coeff << " * X^" << current->exponent;
    else
      cout << " + (" << current->coeff << ") * X^" << current->exponent;
    current = current->next;
  }
  cout << endl;
}

void addTerm(TermPtr& poly, double coeff, unsigned exponent) {
  TermPtr newterm, current, previous;

  if (coeff == 0.0) return; // do not add a term with 0 coefficient

  newterm = new Term;
  newterm->coeff = coeff;
  newterm->exponent = exponent;
  newterm->next = NULL;

  if (poly == NULL)   // empty polynomial
    poly = newterm;
  else if (exponent > poly->exponent) { // new term has the
    newterm->next = poly;               // highest exponent
    poly = newterm;
  }
  else if (exponent == poly->exponent) { // new term has the same exponent
    poly->coeff += coeff;                // as the first term
    if (poly->coeff == 0.0) {
      current = poly;
      poly = poly->next;
      delete current;
    }
  }
  else {   // handles rest of the cases where the head pointer does not change
    previous = poly;
    current = poly->next;
    int done = 0;
    
    while (!done) {
    
      if (current == NULL || exponent > current->exponent) {
        // insert newterm before current term
        newterm->next = current;
        previous->next = newterm;
        done = 1;
      }
      else if (exponent == current->exponent) {
        // update coefficient of the current term 
        current->coeff += coeff;
        if (current->coeff == 0.0) {
          previous->next = current->next;
          delete current;
        }
        done = 1;
      }
      else {
        previous = current;
        current = current->next;
      }
    }
  }
}
