#include "overload.h"
#include<iostream>
using namespace std;

setr::setr(){
	
}
setr ::setr(string b,int a){
	this->b=b;
	this->a=a;
}
string setr:: operator [] (const int i)const{
	return this->b;
}
bool setr:: operator <(const setr s)const
{
	return this->a<s.a;
}

ostream& operator << (ostream& out,const setr s){
	cout<<s;
	return out;
}