//This file consists of several classes and  its data members and member functions.
//Class named Athelete

#include "Class.h"
char* Athelete:: getlastname()
{
	return lastname;
}
char* Athelete:: getfirstname()
{
	return firstname;
}
int Athelete:: getcountry()
{
	return country;
}
int Athelete:: getorder_by_name()
{
	return order_by_name;
}

int Athelete:: getorder_by_country()
{
	return order_by_country;
}

void Athelete:: print()
{
	cout << getlastname()<< " , " << getfirstname();
}


//Country class Methods
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



//Class SPORT
int Sport:: getIndexEvent()
  {
    return index_event;
  }
char* Sport:: getsportname()
{
return sportname;
}

void Sport:: print()
{
  cout << getsportname();
  //cout << endl;

}



int Event:: getnext_event_indices()
{
	return next_event_indices;
}
void Event:: print(vector<Athelete> Atheletes, vector<Country> countries)
{
  cout<<countries[country_indices].getcountrycode()<<"   "<<setw(3)<<ranking;
  cout<<"  "<<score<<"  ";
  int k;
  for(int i=0;i<4;i++)
    {
      k=particular_athelete[i];
      if(k>=0)
	{
	  Atheletes[k].print();
    }
   
}
}

