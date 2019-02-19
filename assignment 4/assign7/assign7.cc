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
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<set>
#include "StringInt.h"
using std :: ifstream;
using std :: cout;
using std :: endl;
using std :: cerr;
using std :: set;
using std :: string;
using std :: iterator;
int main(int argc, char* argv[])
{
  ifstream ifs;
  set<Quote>::iterator it;
  ifs.open(argv[1]);
  if(argc != 2){ // Checks if the program received  exactly 3 arguments.
    cerr << "Please enter 3 arguments" << endl;
    exit(-1);  // Exit the program if it has more than 3 arguments.
  }
  if(!ifs.is_open()){
    cerr << "File is not opened" << endl ;
    exit(-1);
  }
  int index;
  ifs >> index;
  string Q ;
  ifs >> Q;
  Quote q(Q,index);
  set<Quote> S;
  S.insert(q);
  while(!ifs.eof()){
    ifs >> index;
    ifs >> Q; // reaads the data and adds it to the set
    Quote q1(Q,index);
    S.insert(q1);
  }
  ifs.close();
  for(it=S.begin(); it!= S.end(); it++){
    string t = ((*it)[0]);
    if( t == "\\n" ){
      cout << endl;
    }else{
      cout << t;
      cout << " ";
    }
  }
  return 0;
}
