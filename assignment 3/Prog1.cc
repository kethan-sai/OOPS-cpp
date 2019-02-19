#include "Class.h"
#include<iostream>
#include<vector>
#include<fstream>

using std::ios;
using std::cout;
using std::cin;
using std::vector;
using std::ifstream;
void print_athletes_by_country(vector<Athelete> atheletes,vector<Country> countrys);
void print_athletes_by_name(vector<Athelete> atheletes,vector<Country> countrys);
void print_ranking_by_sport(int sport,vector<Sport> sports,vector<Event> events,vector<Athelete> atheletes,vector<Country> countrys);
void print_ranking_by_sport(int sport,vector<Sport> sports,vector<Event> events,vector<Athelete> atheletes,vector<Country> countrys)
{
  sports[sport].print();
  cout<<"\n";
  int k=sports[sport].getIndexEvent();
  while(k>=0)
    {
      events[k].print(atheletes,countrys);
      cout<<"\n";
      k=events[k].getnext_event_indices();
    }
}
int select_sport(vector<Sport> sports,int x);
int select_sport(vector<Sport> sports,int x)
{
  cout<<"\n";
  for(int i=0;i<sports.size();i++)
    {
      cout<<i<<")"<<"   ";
      sports[i].print();
      cout<<"\n";
    }
  cout<<"\nSport to view?";
  int sport_view;
  cin>>sport_view;
  while(true)
    {
      if(sport_view<sports.size())
	{
	  break;
	}
      else
	{
	  cout<<"Please enter a number less than "<<sports.size()<<" ";
	  cin>>sport_view;
	}
    }
  return sport_view;
  
  
}
void print_athletes_by_name(vector<Athelete> atheletes,vector<Country> countrys)
{
  int index=atheletes[0].getorder_by_name();
  while(index>=0)
    {
      int k=atheletes[index].getcountry();
     
      cout<<" "<<atheletes[index].getfirstname()<<" , "<<atheletes[index].getlastname();
      cout<<" "<<countrys[k].getcountrycode()<<"\n";
      index=atheletes[index].getorder_by_country();
    }
}
void print_athletes_by_country(vector<Athelete> atheletes,vector<Country> countrys)
{
  int index=atheletes[0].getorder_by_country();
  while(index>=0)
    {
      int k=atheletes[index].getcountry();
      cout<<countrys[k].getcountrycode();
      cout<<" "<<atheletes[index].getfirstname()<<" , "<<atheletes[index].getlastname()<<"\n";
      index=atheletes[index].getorder_by_country();
     }
}
int main()
{
	std::vector<Country> country;
	std::vector<Sport> sports;
	std::vector<Athelete> atheletes;
	std::vector<Event> events;

	ifstream olympic2018("/home/turing/duffin/courses/cs689/data/olympic.dat",ios::in | ios::binary);
	int x=1;
	int num_countries;
	olympic2018.read((char*)&num_countries,sizeof(int));
	cout<<"Number of countries are \n "<<num_countries;
      	for(int i=0;i<num_countries;i++)
	  {
	    Country obj;
	    olympic2018.read((char *) &obj,sizeof(obj));
	    country.push_back(obj);
	  }
	int num_sports;
	olympic2018.read((char*)&num_sports,sizeof(int));
	cout<<"Number of sports are \n"<<num_sports;
      	for(int i=0;i<num_sports;i++)
	  {
	    Sport obj;
	    olympic2018.read((char *) &obj,sizeof(obj));
	    sports.push_back(obj);
	  }
	int num_atheletes;
	olympic2018.read((char*)&num_atheletes,sizeof(int));
	cout<<"Number of sports are \n"<<num_atheletes;
	for(int i=0;i<num_atheletes;i++)
	  {
	    Athelete obj;
	    olympic2018.read((char *) &obj,sizeof(obj));
	    atheletes.push_back(obj);
	  }
	int num_events;
	olympic2018.read((char*)&num_events,sizeof(int));
	cout<<"Number of sports are \n"<<num_events;
	for(int i=0;i<num_events;i++)
	  {
	    Event obj;
	    olympic2018.read((char *) &obj,sizeof(obj));
	    events.push_back(obj);
	  }
	//cout<<"For loop executed "<<k<<"\n";
	/*for(int i=0;i<events.size();i++)
	  {
	    events[i].print(atheletes,country);
	cout<<"\n";
	  }
	*/
	int ch;
	do
	  {
	    cout<<"\n1) Print Countries";
	    cout<<"\n2) Print Sports";
	    cout<<"\n3) Print athletes by name";
	    cout<<"\n4) Print athletes by country";
	    cout<<"\n5) print ranking by sport";
	    cout<<"\n Q)uit";
	    cout<<"\n Choice?";
	    cin>>ch;
	    switch(ch)
	      {
	      case 1:
		{
		  for(int i=0;i<country.size();i++)
	         {
	         country[i].print();
	         cout<<"\n";
	         }
		 break;
		}
	      case 2:
		{
		for(int i=0;i<sports.size();i++)
	       {
	         sports[i].print();
	         cout<<"\n";
	        }
		break;
	      }
	      case 3:
		{
		  print_athletes_by_name(atheletes,country);
		  break;
		}

	      case 4:
		{
		  print_athletes_by_country(atheletes,country);
		  break;
		}
	      case 5:
		{
		  int x=select_sport(sports,sports.size());
		  print_ranking_by_sport(x,sports,events,atheletes,country);
		  
		  break;
		}
	      default:
		exit(0);
	      }
  
	  }while(ch!=6);
	
}
