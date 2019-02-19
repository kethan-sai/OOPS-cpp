/***********************************************
 *Program to order and print some tagged words.*
 ***********************************************/
/***************************************
 * Course number  : CSCI 689           *
 * Section number : 3                  *
 * Name           : Shivasupraj Pasham *
 * Zid            : Z1809802           *
 * Date           : 4/18/2017           *
 ***************************************/
#ifndef STRINGINT_H_INCLUDED
#define STRINGINT_H_INCLUDED
#include<iostream>
using std :: string;
using std :: ostream;
class Quote{
  string Q;
  int index;
 public:
  Quote();
  Quote(string,int);
  string operator [](const int)const;

  bool operator < (const Quote) const;
};
ostream& operator << (ostream&, Quote );

#endif // STRINGINT_H_INCLUDED
