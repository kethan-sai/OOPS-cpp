#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"
#include<iostream>
#include<vector>
#include<fstream>

using std::ios;
using std::cout;
using std::cin;
using std::vector;
using std::ifstream;
using std::endl;

void print_athletes_by_country(vector<Athelete> athls,vector<Country> cntrys);
void print_athletes_by_name(vector<Athelete> athls,vector<Country> cntrys);
void print_ranking_by_sport(int sport,vector<Sport> sports,vector<Event> events,vector<Athelete> athls,vector<Country> cntrys);
int select_sport(vector<Sport> sports,int x);

void print_athletes_by_country(vector<Athelete> athls,vector<Country> cntrys)
{
  int indx=athls[0].getnextcountry();
  while(indx>=0)
    {
      int k=athls[indx].getcountry();
      cout<<cntrys[k].getcountrycode();
      cout<<" "<<athls[indx].getfname()<<" , "<<athls[indx].getlname()<<"\n";
      indx=athls[indx].getnextcountry();
     }
}

void print_athletes_by_name(vector<Athelete> athls,vector<Country> cntrys)
{
  int indx=athls[0].getnextname();
  while(indx>=0)
    {
      int k=athls[indx].getcountry();
     
      cout<<" "<<athls[indx].getfname()<<" , "<<athls[indx].getlname();
      cout<<" "<<cntrys[k].getcountrycode()<<endl;
      indx=athls[indx].getnextcountry();
    }
}


void print_ranking_by_sport(int sport,vector<Sport> sports,vector<Event> events,vector<Athelete> athls,vector<Country> cntrys)
{
  sports[sport].print();
  cout<<endl;
  int p=sports[sport].getIndexEvent();
  while(p>=0)
    {
      events[p].print(athls,cntrys);
      cout<<endl;
      p=events[p].getnexteventindx();
    }
}

int select_sport(vector<Sport> sports,int x)
{
  cout<<endl;
  for(int i=0;i<sports.size();i++)
    {
      cout<<i<<")"<<"   ";
      sports[i].print();
      cout<<"\n";
    }
  cout<<"\nSport to view?";
  int viewsport;
  cin>>viewsport;
  while(true)
    {
      if(viewsport<sports.size())
	{
	  break;
	}
      else
	{
	  cout<<"Please enter a number less than "<<sports.size()<<" ";
	  cin>>viewsport;
	}
    }
  return viewsport;    
}


int main()
{
	std::vector<Country> country;
	std::vector<Sport> sports;
	std::vector<Athelete> athls;
	std::vector<Event> events;

	ifstream file("/home/turing/duffin/courses/cs689/data/olympic.dat",ios::in | ios::binary);
	int x=1;
	int numofcountries;
	file.read((char*)&numofcountries,sizeof(int));
	cout<<"Number of countries are :"<<numofcountries<<endl;
      	for(int i=0;i<numofcountries;i++)
	  {
	    Country obj1;
	    file.read((char *) &obj1,sizeof(obj1));
	    country.push_back(obj1);
	  }
	int numofsports;
	file.read((char*)&numofsports,sizeof(int));
	cout<<"Number of sports are :"<<numofsports<<endl;;
      	for(int i=0;i<numofsports;i++)
	  {
	    Sport obj2;
	    file.read((char *) &obj2,sizeof(obj2));
	    sports.push_back(obj2);
	  }
	int numofathls;
	file.read((char*)&numofathls,sizeof(int));
	cout<<"Number of sports are :"<<numofathls<<endl;
	for(int i=0;i<numofathls;i++)
	  {
	    Athelete obj3;
	    file.read((char *) &obj3,sizeof(obj3));
	    athls.push_back(obj3);
	  }
	int numofevents;
	file.read((char*)&numofevents,sizeof(int));
	cout<<"Number of sports are :"<<numofevents<<endl;
	for(int i=0;i<numofevents;i++)
	  {
	    Event obj4;
	    file.read((char *) &obj4,sizeof(obj4));
	    events.push_back(obj4);
	  }
	int choice;
	while(choice!=6)
	  {
	    cout<<"\n1) Print Countries";
	    cout<<"\n2) Print Sports";
	    cout<<"\n3) Print athletes by name";
	    cout<<"\n4) Print athletes by country";
	    cout<<"\n5) print ranking by sport";
	    cout<<"\n Q)uit"; 
	    cout<<"\n Choice?";
	    cin>>choice;
	    
	    
    	
	    switch(choice)
	      {
	      case 1:
		{
		  for(int i=0;i<country.size();i++)
	         {
	         country[i].print();
	         cout<<endl;
	         }
		 break;
		}
	      case 2:
		{
		for(int i=0;i<sports.size();i++)
	       {
	         sports[i].print();
	         cout<<endl;
	        }
		break;
	      }
	      case 3:
		{
		  print_athletes_by_name(athls,country);
		  break;
		}

	      case 4:
		{
		  print_athletes_by_country(athls,country);
		  break;
		}
	      case 5:
		{
		  int x=select_sport(sports,sports.size());
		  print_ranking_by_sport(x,sports,events,athls,country);
		  break;
		}
	      default:
		exit(0);
	      }
  
	  }
	
}
