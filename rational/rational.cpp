#include "rational.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream &out, Rational r) {
  out << " " << r.getNumerator() << " / " << r.getDenominator() << " ";
  return out;
}

/// default constructor
Rational::Rational()
{

}

/// constructor for integers
Rational::Rational(int numerator)
{

}

/// constructor for two integers
Rational::Rational(int numerator, int denominator)
{

}

/// multiple two numbers (given)
Rational operator*(Rational leftOp, Rational rightOp) {
  /*
    a      c        a * c
   ---  * ---   =  --------
    b      d        b * d

   */

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  /// create a new value that matches the formula
  Rational returnValue(a * c, b * d);

  /// return that new value
  return returnValue;
}


/// add two numbers 
Rational operator+(Rational leftOp, Rational rightOp) {
  /*
    a      c        a*d + b*c
   ---  + ---   =  --------
    b      d        b * d

   */

  Rational returnValue;
  return returnValue;
}

/// subtract two numbers 
Rational operator-(Rational leftOp, Rational rightOp) {
  /*
    a      c        a*d - b*c
   ---  - ---   =  --------
    b      d        b * d

   */

  Rational returnValue;
  return returnValue;
}

/// divide two numbers 
Rational operator/(Rational leftOp, Rational rightOp) {
  /*
    a      c        a * d
   ---  / ---   =  --------
    b      d        b * c

   */

  Rational returnValue;
  return returnValue;
}

bool operator<(Rational leftOp, Rational rightOp) {
  /*
    a      c         
   ---  < ---   if a * d < b * c
    b      d        

   */
  return false;
}

bool operator<=(Rational leftOp, Rational rightOp) {

  return false;
}

bool operator>(Rational leftOp, Rational rightOp) {

  return false;
}

bool operator>=(Rational leftOp, Rational rightOp) {

  return false;
}

bool operator==(Rational leftOp, Rational rightOp) {

  return false;
}

bool operator!=(Rational leftOp, Rational rightOp) {

  return false;
}


void Rational::reduce() {
  /// the sign is in the numerator
  int g = gcd(m_Numerator, m_Denominator);
  m_Numerator /= g;
  m_Denominator /= g;

  if (m_Denominator < 0)
    { /// if the denominator is negative, multiply by -1/-1
      m_Denominator *= -1;
      m_Numerator *= -1;
    }
}


/// Euclid's algorithm in recursive form
int Rational::gcd(int u, int v) {
  if (v == 0) {
    return u;
  }
  else {
    return gcd(v, u % v);
  }
}


