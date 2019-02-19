#ifndef CLASS1_H
#define CLASS1_H

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>

using std::setw;
using std::string;
using std::vector;
using std::cout;

#define  arr 30 
#define arr1 4

//Class Athelete

class Athelete
{
char lname[arr],fname[arr];
int country,nextname,nextcountry;

public:
char* getlname();
char* getfname();
int getcountry();
int getnextname();
int getnextcountry();
void print();
};

#endif
