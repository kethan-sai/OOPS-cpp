#ifndef OVERLOAD_H
#define OVERLOAD_H
#include<iostream>
using namespace std;
class setr{
	private:
	int a;
	string b;
	public:	
	setr();
	setr(string,int);
	string operator [] (const int i)const;
	bool operator < (const setr)const;
};
ostream& operator << (ostream&,setr);
#endif