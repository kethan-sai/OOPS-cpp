#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"

//class athelete methods
char* Athelete:: getlname()
{
	return lname;
}
char* Athelete:: getfname()
{
	return fname;
}
int Athelete:: getcountry()
{
	return country;
}
int Athelete:: getnextname()
{
	return nextname;
}

int Athelete:: getnextcountry()
{
	return nextcountry;
}

void Athelete:: print()
{
	cout << getlname()<< "; " << getfname();
}


//class Country  Methods
char* Country:: getcountrycode()
{
	return countrycode;
}
char* Country:: getcountryname()
{
	return countryname;
}

void Country:: print()
{
  	cout<<getcountrycode()<<"  "<<getcountryname();
}



//Class sport methods
int Sport:: getIndexEvent()
  {
    return indexevent;
  }
char* Sport:: getsportname()
  {
   return sportname;
  }

void Sport:: print()
{
  cout << getsportname();
  

}


//class event methods
int Event:: getnexteventindx()
{
	return nexteventindx;
}
void Event:: print(vector<Athelete> Athl, vector<Country> ctry)
{
  cout<<ctry[cntryindx].getcountrycode()<<"    "<<setw(3)<<rank<<"   "<<score<<"   ";
  int j=0;
  for(int i=0;i<4;i++)
    {
      j=pathl[i];
      if(j>=0)
	{
	  Athl[j].print();
        }
   
    }
}

