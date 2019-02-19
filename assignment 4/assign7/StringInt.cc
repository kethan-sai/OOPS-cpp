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
#include"StringInt.h"
#include<iostream>
using std :: cout;
using std:: string;
Quote :: Quote(){
  // default constructor
}

Quote :: Quote(string Q, int index){
  this->Q = Q;
  this->index =index;
}

string Quote :: operator [] (const int index) const{
  return this->Q; // overloading subscripting operator
}

bool Quote :: operator < (const Quote Q)const {
  return this->index<Q.index; // overloading < operator
}

ostream& operator << (ostream& ostr ,const Quote Q){
  cout << Q ; // overloading output stream operator.
  return ostr;
}
