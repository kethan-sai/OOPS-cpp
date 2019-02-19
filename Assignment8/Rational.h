/**********************************************************************************

Name          : Bhavana Ramarapu
Zid           : Z1827429
Assignment No : 8
Due Date      : Thursday, November 9, 2017
File Name     : Rational.h
Description   : Impementation of Rational number  member class functions
**********************************************************************************/
#ifndef RATIONAL_H //header for not defining again
#define RATIONAL_H
#include <iostream> //input and output library functions
#include <sstream>  //Library for input string stream
using namespace std;  
// Rational class
class Rational{

private:

int num, den; //private variables
int gcd(int,int); //function for calculating gcd
  //Public member functions
public:

Rational();
Rational(const int&,const int&);
Rational(const Rational&);
Rational& operator=(const Rational&);
Rational& operator+=(const Rational&);
Rational& operator-=(const Rational&);
Rational& operator*=(const Rational&);
Rational& operator/=(const Rational&);
Rational& operator++();
Rational& operator--();
Rational operator++(int);
Rational operator--(int);
  //friend member functions
friend Rational operator+(const Rational&,const Rational&);
friend Rational operator-(const Rational&,const Rational&);
friend Rational operator*(const Rational&,const Rational&);
friend Rational operator/(const Rational&,const Rational&);
friend bool operator==(const Rational&,const Rational&);
friend bool operator!=(const Rational&,const Rational&);
friend bool operator<(const Rational&,const Rational&);
friend bool operator<=(const Rational&,const Rational&);
friend bool operator>(const Rational&,const Rational&);
friend bool operator>=(const Rational&,const Rational&);
friend ostream& operator<< (ostream&,const Rational&);
friend istream& operator>> (istream&,Rational&);
};
#endif  //end of Rational.h
