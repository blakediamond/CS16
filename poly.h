using namespace std;

struct Term {
    double coeff;
    unsigned exponent;
    Term *next;
};
// Each term consists of a coefficient and an exponent and pointer
// to the next term.

typedef Term* TermPtr;
// Polynomials are represented as a linked list where each node in the
// the linked list is a Term. 
// The TermPtr pointing to the head of the list represents the polynomial.
// The terms are listed in the descending order based on their exponent
// (highest exponent/degree term is listed first).
// There is only a single term for each exponent. 

void addTerm(TermPtr& p, double c, unsigned e);
// This function adds a new term to the polynomial p.
// The added term has the coefficient c and the exponent e.
// If there is already a term with the same exponent, then
// the two terms are combined (if the coefficient becomes
// 0, then the term is deleted). 

void printPoly(TermPtr p);
// Prints the polynomial p.

double evaluate(TermPtr p, double v);
// Evaluates the polynomial p for the value v.

TermPtr add(TermPtr p1, TermPtr p2);
// Returns a new polynomial that is the addition of polynomials
// p1 and p2 (p1 + p2).

TermPtr subtract(TermPtr, TermPtr);
// Returns a new polynomial that is equal to subtraction of the second polynomial
// from the first polynomial (p1 - p2). 

TermPtr multiply(TermPtr, TermPtr);
// Returns a new polynomial that is the multiplication of polynomials
// p1 and p2 (p1 * p2).

void deletePoly(TermPtr& p);
// Deletes the polynomial p by deleting each term in it. 

