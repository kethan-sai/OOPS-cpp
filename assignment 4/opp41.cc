#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<set>
using namespace std;

class setr{
	public:
	int a;
	string b;
		
	setr();
	setr(string,int);
	string operator [] (const string i)const;
	bool operator < (const setr)const;
};
ostream& operator << (ostream&,setr);
setr::setr(){
	
}
setr ::setr(string b,int a){
	this->b=b;
	this->a=a;
}
string setr:: operator [] (const string i)const{
	return this->b;
}
bool setr:: operator <(const setr s)const
{
	return this->a<s.a;
}

ostream& operator << (ostream& out,const setr s){
	cout<< s;
	return out;
}

int main(int argc, char* argv[])
{
	
	ifstream file;
	set<setr> st;
	set<setr>::iterator it;
	file.open("C:\\Users\\kethan-pc\\Desktop\\done.txt");
	//file.open(argv[1]);
	if(argc!=2)	
	{
		cerr<<"please limit to 3 arguments";
	//	exit(-1);
	}		
	if(!file.is_open()){
	cout<<"could not open file"<<endl;
	return -1;
	}
	int a;
	string b;
	file>>a;
	file>>b;
	cout << a << b << endl;
	setr s(b,a);
	set<setr> se;
	se.insert(s);
	while(!file.eof()){
		file>>a;
		file>>b;
		setr s1(b,a);
		se.insert(s1);
		cout << s1 << endl;
	}
	file.close();
	cout << se << endl;
	cout << 1 << endl;
	for(it=se.begin();it!=se.end();++it)
	{
		//cout << se.begin() << endl;
		string f=((*it)[0]);
		cout << 1 << endl;
		if(f=="\n"){
			cout<<endl;
		}else{
			cout<<f;
			cout<<" ";
		}
	}
	return 0;
}