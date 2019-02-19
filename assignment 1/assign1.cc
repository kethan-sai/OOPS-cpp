#include<iostream>                                                                                                                          /*kethan sai z1840408*/
#include<stdlib.h>
#include<iomanip>
using std ::cout;
using std ::cin;
using std ::endl;
using std ::setw;
using std ::fixed;

void calc(float &x1,float &y1,float &p1,float &q1,float &r1,float &m1);
void dipl(float &pu);
void dipl1(float &x2,float &y2,float &p2,float &q2,float &r2,float &m2);

int main()
{
	float hu=0,te=0,hum=0,tem=0,itr=0,itr1=0;
	cout<<"Temperature range low value (degrees F) ? "; /*input values*/
	cin>>te;
	cout<<endl;
	cout<<"Temperature range high value  (degrees F) ? ";
	cin>>tem;
	cout<<endl;
	cout<<"Temperature increment (degrees F) ? ";
	cin>>itr1;
	cout<<endl;
	cout<<"Relative humidity low value (%) ? ";
	cin>>hu;
	cout<<endl;
	cout<<"Relative humidity high value(%) ? ";
	cin>>hum;
	cout<<endl;
	cout<<"Relative humidity increment (%) ? ";
	cin>>itr;
	cout<<endl;
	if(hu<=0)
	{
		cout<<"enter values greater than 0";
		cin>>hu;
	}
	dipl1(hu,te,hum,tem,itr,itr1);/*heat index display func*/
	calc(hu,te,hum,tem,itr,itr1);/*table values function invoke*/
	return 0;
	cout<<endl;
	
}

void calc(float &x1,float &y1,float &p1,float &q1,float &r1,float &m1)/*funtion for calculating the values using formulae*/
{
	float hix,f=y1,g=m1;
	
   for(float k=y1;k<=q1;k+=m1)
   {
   		cout.precision(2);
   	cout<<fixed<<setw(10)<<f<<"|";
   	f+=g;
   	
   	for(float j=x1;j<=p1;j+=r1)/* can use pow function but did not as it will increase the time and space constraint*/
   	{
	   hix= -42.379 + 2.04901523 * k + 10.1433127 * j - 0.22475541 * k * j - 0.00683783 * k * k - 0.05481717 * j * j + 0.00122874 * k * k * j + 0.00085282* k * j * j - 0.00000199 * k * k * j * j;
		dipl(hix);
	   }
	   
	   cout<<endl;
   }
   
}
void dipl(float &pu)/*values print function*/
{
		
cout<<setw(10)<<pu;
}	

void dipl1(float &x2,float &y2,float &p2,float &q2,float &r2,float &m2)/*table structure display function*/
{
	float c=x2,v=p2,b=r2;
	cout<<"\n\n\n";
	cout<<"HEAT INDEX TABLE\n";
	cout<<"\n";
	cout<<"RELATIVE HUMIDITY"<<endl;
	cout<<setw(5);
	cout<<"     (%)";
	for(;c<=v;)
	{
		cout<<" "<<setw(9)<<c;
		c+=b;
		
	}
	cout<<endl;
	for(int x=0;x<(v/b);x++)
	{
	cout<<"----------";	
	}
	cout<<endl; 
   cout<<"Temperature (deg. F)"<<"\n\n";   
}