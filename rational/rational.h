#ifndef _RATIONAL_H_
#define _RATIONAL_H_
#include <iostream>

using namespace std;


class Rational {

 public:

  /// constructors
  Rational(); 
  Rational(int n, int d);
  Rational(int n);
  
  /// accessors
  int getNumerator() {return m_Numerator;} 
  int getDenominator() {return m_Denominator;} 

  
 private:
  int m_Numerator;
  int m_Denominator;

  /// helper functions
  int gcd(int, int);
  void reduce();


};

// nonmember overloaded operators
ostream& operator<<(ostream &out, Rational r);

//  math
Rational operator*(Rational, Rational);
Rational operator/(Rational, Rational);
Rational operator+(Rational, Rational);
Rational operator-(Rational, Rational);

// comparison
bool operator<(Rational, Rational);
bool operator<=(Rational, Rational);
bool operator>(Rational, Rational);
bool operator>=(Rational, Rational);
bool operator==(Rational, Rational);
bool operator!=(Rational, Rational);



#endif

