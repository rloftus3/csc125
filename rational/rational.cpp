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
  m_Numerator = 0;
  m_Denominator = 1;
}

/// constructor for integers
Rational::Rational(int numerator)
{
  m_Denominator = 1;
  m_Numerator = numerator;
}

/// constructor for two integers
Rational::Rational(int numerator, int denominator)
{
  m_Numerator = numerator;
  m_Denominator = denominator;
  reduce();
}

/// multiply two numbers (given)
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

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  Rational returnValue( (a * d) + (b * c), b * d );
  return returnValue;
}

/// subtract two numbers 
Rational operator-(Rational leftOp, Rational rightOp) {
  /*
    a      c        a*d - b*c
   ---  - ---   =  --------
    b      d        b * d

   */

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  Rational returnValue( (a * d) - (b * c), b * d );
  return returnValue;
}

/// divide two numbers 
Rational operator/(Rational leftOp, Rational rightOp) {
  /*
    a      c        a * d
   ---  / ---   =  --------
    b      d        b * c

   */

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  Rational returnValue(a * d, b * c);
  return returnValue;
}

bool operator<(Rational leftOp, Rational rightOp) {
  /*
    a      c         
   ---  < ---   if a * d < b * c
    b      d        

   */

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  if ((a * d) < (b * c)) {
    return true;
  }

  return false;
}

bool operator<=(Rational leftOp, Rational rightOp) {

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  if ((a * d) <= (b * c)) {
    return true;
  }

  return false;
}

bool operator>(Rational leftOp, Rational rightOp) {

  return !(leftOp <= rightOp);
}

bool operator>=(Rational leftOp, Rational rightOp) {

  return !(leftOp < rightOp);
}

bool operator==(Rational leftOp, Rational rightOp) {

  int a = leftOp.getNumerator();
  int b = leftOp.getDenominator();
  int c = rightOp.getNumerator();
  int d = rightOp.getDenominator();

  if ((a * d) == (b * c)) {
    return true;
  }

  return false;
}

bool operator!=(Rational leftOp, Rational rightOp) {

  return !(leftOp == rightOp);
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


