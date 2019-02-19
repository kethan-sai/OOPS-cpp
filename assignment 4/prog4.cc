#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<set>
#include "overload.h"
using namespace std;


int main(int argc, char* argv[])
{
	
	ifstream file;
	set<setr> st;
	set<setr>::iterator it;
	file.open(argv[1]);
	if(argc!=2)	
	{
		cerr<<"please limit to 3 arguments";
		exit(-1);
	}		
	if(!file.is_open()){
	cout<<"could not open file"<<endl;
	return -1;
	}
	int a;
	string b;
	file>>a;
	file>>b;
	setr s(b,a);
	set<setr> se;
	se.insert(s);
	while(!file.eof()){
		file>>a;
		file>>b;
		setr s1(b,a);
		se.insert(s1);
	}
	file.close();
	for(it=se.begin();it!=se.end();++it)
	{
		string f=((*it)[0]);
		if(f=="\\n"){
			cout<<endl;
		}else{
			cout<<f;
			cout<<" ";
		}
	}
	return 0;
}
