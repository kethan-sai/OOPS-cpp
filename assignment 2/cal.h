#ifndef CAL_H
#define CAL_H

#include <iostream>
#include <iomanip>
#include <string>
bool leapyr(int yr,int mon);
int header(int yr,int mon);
int body(int yr,int mon,bool bol);
int week(int yr,int mon,int days,bool bol);

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;

#endif
