#include "String.h"

String::String()  //default constructor
{
  len=0;
  a=new char[len];
}

String::String(const char *k)   //c-string constructor
{
	int len1=0;
	const char* x;
	x=k;
	while(*x!='\0')
	{
		len1++;
		x++;
	}
	len=len1;
	a=new char[len1];
	for(int i=0;i<len1;i++)
	{
		a[i]=k[i];
	}
    
}

int String::size() const    //size() method
{
	if(a==nullptr)
	{
		return 0;
	}
	else
	{
		return len;
	}
}



int String::length() const  //length()
{
	if(a==nullptr)
	{
		return 0;
	}
	else
	{
		return len;
	}
}

bool String::empty() const  //empty()
{
	if(a==nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

String::String(const String &K)   //copy constructor
{
  a=new char[K.length()];   //create resources
  len=K.length();
	for(int i=0;i<len;i++)   //copy resources
	a[i]=K[i];
}

String::~String()  //destructor
{
	delete []a; 
}

ostream& operator<<(ostream& out,const String& B)  //output operator
{
  for(int i=0;i<B.length();i++)
	{
		out<<B.a[i];
	}
	return out;
}

int String::difference(const String& D)const //difference
{
int i=0;
 int k=0;
 if(D.length()>len)
   {
     k=len;
   }
 else if(D.length()<len)
   {
     k=D.length();
   }
 else
   {
     k=len;
   }
 for(i=0;i<k;i++)
   {
     if(D.a[i]!=a[i])
       break;
   }
 return i;
}

bool operator==(const String& x1,const String& x2)  //comparison operator ==
{
  int fdp = x1.difference(x2);
  return (fdp==x1.length()&&fdp==x2.length());
}
bool operator!=(const String& x1,const String& x2)  //comparison operator !=
{
  int fdp = x1.difference(x2);
  return (fdp!=x1.length()||fdp!=x2.length());
}
bool operator<(const String& x1,const String& x2)  //comparison operator <
{
  int fdp=x1.difference(x2);
    if(fdp==x1.length()&&fdp<x1.length())
      return true;
    else
      {
	if(fdp!=x1.length()&&fdp!=x2.length())
	  {
	    if(x1[fdp]<x2[fdp])
	      {
		return true;
	      }
	    else
	      return false;
	  }
      }
    return false;
}
  bool  operator<=(const String& x1,const String& x2)  //comparison operator <=
  {
    int fdp = x1.difference(x2);
    if(fdp==x1.length()&&x1.length()<=x2.length())
      return true;
    else
      {
	if(fdp!=x1.length()&&fdp!=x2.length())
	  {
	    if(x1[fdp]<x2[fdp])
	      return true;
	    return false;
	  }
      }
    return false;
   
  }
  bool operator>(const String& x1,const String& x2)  //comparison operator >
  {
    int fdp=x1.difference(x2);
    if(fdp==x1.length()&&fdp>x1.length())
      return true;
    else
      {
	if(fdp!=x1.length()&&fdp!=x2.length())
	  {
	    if(x1[fdp]>x2[fdp])
	      {
		return true;
	      }
	    else
	      return false;
	  }
      }
    return false;
  }
  bool operator>=(const String& x1,const String& x2)  //comparison operator >=
  {
    int fdp = x1.difference(x2);
    if(fdp==x1.length()&&x1.length()>=x2.length())
      return true;
    else
      {
	if(fdp!=x1.length()&&fdp!=x2.length())
	  {
	    if(x1[fdp]>x2[fdp])
	      return true;
	    return false;
	  }
      }
    return false;
  }

char String::operator[](int index)const //1st subscripting operator
{
  return a[index]; 
}
char& String:: operator[](int index)    //2nd subscripting operator
{
  return a[index];	
}
/*String operator +(const String &x1,char ch)
{
  String temp;
  int i=0;
  temp.len = x1.length()+1;
  temp.a = new char[temp.len];
  for(i=0;i<x1.length();i++)
    {
      temp.a[i]=x1.a[i];
    }
  temp.a[i]=ch;
  return temp;
}
String operator +(const String &x1,const String &x2)
{
  String temp;
  int i=0;
  temp.len=x1.length()+x2.length();
  temp.a = new char[temp.len];
  for(i=0;i<x1.length();i++)
    {
      temp.a[i]=x1.a[i];
    }
  for(int j=i,k=0;k<x2.length();k++,j++)
    {
      temp.a[j]=x2.a[k];
    }
  return temp;
  }*/

String&  String::operator=(const String &right)  //copy assignment operator
{
	if(this==&right)   //check for assignment to self
	{
		return *this;
	}
	delete []a;   //delete the resources
	a=new char[right.length()];  //creating new resources
	len=right.length();
	for(int i=0;i<len;i++)  //copy
	a[i]=right.a[i];
	return *this;   //return *this
}


String::String(String &&mc)  //move constructor
{
  len=mc.length();
  a=mc.a;
  mc.a=nullptr;	
}

String operator +(const String &x1,char ch) //concatenation---overloading first +operator which has a string and a char
{
  String temp;
  int i=0;
  temp.len = x1.length()+1;
  temp.a = new char[temp.len];
  for(i=0;i<x1.length();i++)
    {
      temp.a[i]=x1.a[i];
    }
  temp.a[i]=ch;
  return temp;
}
String operator +(const String &x1,const String &x2)  //concatenation----overloading second +operator which has two strings
{
  String temp;
  int i=0;
  temp.len=x1.length()+x2.length();
  temp.a = new char[temp.len];
  for(i=0;i<x1.length();i++)
    {
      temp.a[i]=x1.a[i];
    }
  for(int j=i,k=0;k<x2.length();k++,j++)
    {
      temp.a[j]=x2.a[k];
    }
  return temp;
}

