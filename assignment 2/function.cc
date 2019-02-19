#include "cal.h"

bool leapyr(int yr,int mon)
{
	if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
	{
			cout<<"leap year "<<endl;
			return true;
	}
	else
		{
		cout<<"not a leap year "<<endl;
		return false;
	}
}

int header(int yr,int mon)
{
	string months[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	cout<<"Month and Year? "<<mon<<" "<<yr<<endl<<"     "<<months[mon-1]<<"  "<<yr<<endl;
	cout<< " Su Mo Tu We Th Fr Sa" << endl;
	return 0;
}

int body(int yr,int mon,bool bol)
{
	int r,y,g,days;
	g=((mon+11)*7)%12;
	if(mon==2 && bol==1)
		{
		days=29;
		return days;
	}
	else if(mon==2 && bol==0)
	{
		days=28;
		return days;
	}
	
	else if(g<7 && bol==0)
	{
		days=31;
		return days;
	}
	else 
	{
		days=30;
		return days;
	}
	}
	
	int week(int yr,int mon,int days,bool bol)
	{
		int r,g,h,j,corr,y;
		r=yr-1;
		g=((((r*365)+(r/4))-(r/100))+(r/400));
		h=(((mon*367)-362)/12);
		j=g+h;
		j=j+1;
		if(mon<=2)
		{
			corr=0;
		}
		else if(mon>2 && bol==1)
		{
			corr=-1;
		}
		else if(mon>2 && bol==0)
		{
			corr=-2;
		}
		y=(corr+j)%7;
		return y;
	}
	

