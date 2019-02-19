#include<iostream>
#include<iomanip>
using std ::cout;
using std ::cin;
using std ::endl;
using std ::setw;

void inval(float &x,float &y,float &p,float &q,float &r,float &m);
void calc(float &x1,float &y1,float &p1,float &q1,float &r1,float &m1);
int main()
{
	float hu=0,te=0,hum=0,tem=0,itr=0,itr1=0;
	inval(hu,te,hum,tem,itr,itr1);
	calc(hu,te,hum,tem,itr,itr1);
	return 0;
	cout<<endl;
	
}
void inval(float &x,float &y,float &p,float &q,float &r,float &m)
{
	cout<<"enter temperate value"<<endl;
	cin>>y;
	cout<<"enter humid value"<<endl;
	cin>>x;
	cout<<"max temp value"<<endl;
	cin>>p;
	cout<<"enter max humid value"<<endl;
	cin>>q;
	cout<<"enter iteration value for humid"<<endl;
	cin>>r;
	cout<<"enter value for iteration tempert"<<endl;
	cin>>m;
	cout<<"humid is" <<y<<endl;
	cout<<"temp is"<<x<<endl;
	if(x<=0)
	{
		cout<<"enter values greater than 0";
		cin>>y;
	}
}

void calc(float &x1,float &y1,float &p1,float &q1,float &r1,float &m1)
{
	float hix;
	
	cout<<"\n\n\n";
	cout<<setw(49)<<"INDEX  TABLE\n";
	cout<<"\n";
	cout<<"      RELATIVE HUMIDITY (%)"<<endl;
	
	
	for(;x1<=p1;)
	{
		cout<<"  "<<x1<<"  ";
		x1+=r1;
		
	}
	cout<<endl;

 	
 	
	 cout<<"-----------------------------------------------------------------------------------------------"<<endl;
   cout<<"Temperature (deg. F)"<<"\n\n";
   
   for(float j=x1;x1<=p1;j+=r1)
   {
   	for(float k=y1;y1<=q1;k+=m1)
   	{
	   hix= -42.379 + 2.04901523 * y1 + 10.1433127 * x1 - 0.22475541 * y1 * x1 - 0.00683783 * y1 * y1 - 0.05481717 * x1 * x1 + 0.00122874 * y1 * y1 * x1 + 0.00085282* y1 * x1 * x1 - 0.00000199 * y1 * y1 * x1 * x1;
	cout<<" "<<hix<<" ";	
	   }
   }
		
}