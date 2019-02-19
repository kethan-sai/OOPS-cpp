
/**********************************************************************************

Name          : Lakshmi Chaitanya Rayala
Zid           : z1808662
Assignment No : 8
Due Date      : October 27, 2016
File Name     : Rational.cc
Description   : Impementation of Rational number class member functions
**********************************************************************************/
#include "Rational.h"/*calling header file*/

/*Default constructor that calls default values of numerator and denominator*/
Rational::Rational(){

num=0;
den=1;
}

/*Argumented constructor that takes numerator and denominator in the input*/
Rational::Rational(const int& n=0,const int& d=1){

if(d==0){
/*Division by zero condition*/
cout<<"ERROR: division by zero";
}else if (n == 0) {/*if numerator equals zero*/
num = 0;
den = 1;
} else {
int g = gcd(abs(n), abs(d));
num = n / g;
den = abs(d) / g;
if (d < 0) num = -num;
}
}

/*Private member function to calculate gcd of numerator and denominator*/
int Rational::gcd(int num,int den){

int fraction=num%den;
while(fraction!=0){

num=den;
den=fraction;
fraction=num%den;
}
return den;
}

/*copy constructor of Rational number class*/
Rational::Rational(const Rational& r){

num=r.num;
den=r.den;
}

/*Public member function to overload assignment operator*/
Rational& Rational::operator=(const Rational& r){

/*To avoid copying again if already exists*/
if(this!=&r){

num=r.num;
den=r.den;
}
int g=gcd(abs(num),abs(den));/*To minimize numerator and denominator to least possible values*/
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload += operator*/
Rational& Rational::operator+=(const Rational& r){

num=num*r.den+r.num*den;
den=den*r.den;
int g=gcd(abs(num),abs(den));
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload -= operator*/
Rational& Rational::operator-=(const Rational& r){

num=num*r.den-r.num*den;
den=den*r.den;
int g=gcd(abs(num),abs(den));
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload *= operator*/
Rational& Rational::operator*=(const Rational& r){

num=num*r.num;
den=den*r.den;
int g=gcd(abs(num),abs(den));
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload /= operator*/
Rational& Rational::operator/=(const Rational& r){

num=num*r.den;
den=den*r.num;
int g=gcd(abs(num),abs(den));
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload Pre-increment operator*/
Rational& Rational::operator++(){

num=num+den;
int g=gcd(abs(num),abs(den));
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload Pre-decrement operator*/
Rational& Rational::operator--(){

num=num-den;
int g=gcd(abs(num),abs(den));
num=num/g;
den=abs(den)/g;
return *this;
}

/*Public member function to overload Post-increment operator*/
Rational Rational::operator++(int unused){

Rational postInc(num,den);
++(*this);
return postInc;
}

/*Public member function to overload Post-decrement operator*/
Rational Rational::operator--(int unused){

Rational postDec(num,den);
--(*this);
return postDec;
}

/*friend public function to overload arithmatic + operator*/
Rational operator+(const Rational& r1, const Rational& r2) {

return Rational(r1.num * r2.den + r2.num * r1.den, r1.den * r2.den);
}

/*friend public function to overload arithmatic - operator*/
Rational operator-(const Rational& r1, const Rational& r2) {

return Rational(r1.num * r2.den - r2.num * r1.den, r1.den * r2.den);
}

/*friend public function to overload arithmatic * operator*/
Rational operator*(const Rational& r1, const Rational& r2) {

return Rational(r1.num * r2.num, r1.den * r2.den);
}

/*friend public function to overload arithmatic / operator*/
Rational operator/(const Rational& r1, const Rational& r2) {

return Rational(r1.num * r2.den, r1.den * r2.num);
}

/*friend public function to overload relational ==  operator*/
bool operator==(const Rational& r1,const Rational& r2){

if(r1.num*r2.den==r2.num*r1.den){

return true;
}else{

return false;
}
}

/*friend public function to overload relational !=  operator*/
bool operator!=(const Rational& r1,const Rational& r2){

if(r1.num*r2.den!=r2.num*r1.den){

return true;
}else{

return false;
}
}

/*friend public function to overload relational <  operator*/
bool operator<(const Rational& r1,const Rational& r2){

if(r1.num*r2.den<r2.num*r1.den){

return true;
}else{

return false;
}
}

/*friend public function to overload relational <=  operator*/
bool operator<=(const Rational& r1,const Rational& r2){

if(r1.num*r2.den<=r2.num*r1.den){

return true;
}else{

return false;
}
}

/*friend public function to overload relational >  operator*/
bool operator>(const Rational& r1,const Rational& r2){

if(r1.num*r2.den>r2.num*r1.den){

return true;
}else{

return false;
}
}

/*friend public function to overload relational >= operator*/
bool operator>=(const Rational& r1,const Rational& r2){

if(r1.num*r2.den>=r2.num*r1.den){

return true;
}else{

return false;
}
}

/*friend public function to overload output stream operator <<*/
ostream& operator<<(ostream& os,const Rational& r){

if(r.den==1){

os<<r.num;
}else if(r.den<0){

os<<-(r.num)<<"/"<<-1*r.den;
}else if(r.den==0){

cout<<"ERROR: division by zero";
}else if(r.num<0&&r.den<0){

os<<-1*r.num<<"/"<<-1*r.den;
}else{

os<<r.num<<"/"<<r.den;
}

return os;
}

/*friend public function to overload input stream operator >>*/
istream& operator>>(istream& is,Rational& r){

string line;

getline(is,line);

int n=0,d=1;
char val;
istringstream iss(line);
iss>>n;
iss>>val;
iss>>d;
if((val=='/'||val==' ')&&iss.eof()){

cout<<n<<'\t'<<d<<endl;
r=Rational(n,d);
}else{

cout<<"Error: line \""<<line<<"\"contains invalid number"<<endl;
}
r=Rational(n,d);
return is;
}
