//This file consists of several classes and  its data members and member functions.
#ifndef CLASS_H
#define CLASS_H

//Class named Athelete
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<iomanip>
using std::setw;
using std::string;
using std::vector;
using std::cout;
#define  MAX 30  //for Athelete

#define  TOT 4 //for Country
#define TOL 34 

#define TEMP 60  // for Sport
//const int TEX[]
#define SCO 25 
#define MEX 4 

class Athelete
{
//data members
private:
char lastname[MAX];
char firstname[MAX];
int country;
int order_by_name;
int order_by_country;

public:
char* getlastname();
char* getfirstname();
int getcountry();
int getorder_by_name();
int getorder_by_country();
void print();
};


class Country
{
private:
char countrycode[TOT];
char countryname[TOL];
public:
char* getcountrycode();
 char* getcountryname();
 void print();
};


class Sport
{
private:
  char sportname[TEMP];
  int index_event;
//string future use
public:
 int getIndexEvent();
  char* getsportname();
  //second method
  void print();
};


class Event
{
private:
int sport_indices;
int country_indices;
char score[SCO];
int particular_athelete[MEX];
int ranking;
int next_event_indices;

public:
int getnext_event_indices();
void print(vector<Athelete> Atheletes, vector<Country> countries);
};

#endif
