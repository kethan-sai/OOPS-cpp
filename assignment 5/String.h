#ifndef STRING_H
#define STRING_H
#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::fstream;
using std::ostream;

//using namespace std;

class String
{
private:
int len;
char *a;
int difference(const String &k)const; //difference
public:
String();     //default constructor
String(const char *);   //c-string constructor
int size() const;    //size()
int length() const;  //length()
bool empty() const;  //empty()  
String(const String &x);   //copy constructor
~String();  //destructor
friend ostream& operator<<(ostream&,const String&);  //output operator
friend bool operator==(const String&,const String&);  //comparison operator ==
friend bool operator!=(const String&,const String&);  //comparison operator !=
friend bool operator<(const String&,const String&);  //comparison operator <
friend bool operator<=(const String&,const String&);  //comparison operator <=
friend bool operator>(const String&,const String&);  //comparison operator >
friend bool operator>=(const String&,const String&);  //comparison operator >= 
char operator[](int)const; //1st sunscripting operator
char &operator[](int);    //2nd subscripting operator
String&  operator=(const String &k);  //copy assignment operator
String(String &&);  //move constructor
friend String operator+ (const String& ,const char);  //concatenation
friend String operator+ (const String&,const String&);
};

#endif


 



