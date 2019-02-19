#include<iostream>
#include<iomanip>
using std ::cout;
using std ::cin;
using std ::endl;
using std ::setw;

void inval(float &x,float &y,float &p,float &q,float &r);
void calc(float &x1,float &y1,float &p1,float &q1,float &r1);
int main()
{
	float hu=0,te=0,hum=0,tem=0,itr=0;
	inval(hu,te,hum,tem,itr);
	calc(hu,te,hum,tem,itr);
	return 0;
	cout<<endl;
	
}
void inval(float &x,float &y,float &p,float &q,float &r)
{
	cout<<"enter temperate value"<<endl;
	cin>>y;
	cout<<"enter humid value"<<endl;
	cin>>x;
	cout<<"max temp value"<<endl;
	cin>>p;
	cout<<"enter max humid value"<<endl;
	cin>>q;
	cout<<"enter iteration value"<<endl;
	cin>>r;
	cout<<"humid is" <<y<<endl;
	cout<<"temp is"<<x<<endl;
	if(x<=0)
	{
		cout<<"enter values greater than 0";
		cin>>y;
	}
}

void calc(float &x1,float &y1,float &p1,float &q1,float &r1)
{
	float hix;
	hix= -42.379 + 2.04901523 * y1 + 10.1433127 * x1 - 0.22475541 * y1 * x1 - 0.00683783 * y1 * y1 - 0.05481717 * x1 * x1 + 0.00122874 * y1 * y1 * x1 + 0.00085282* y1 * x1 * x1 - 0.00000199 * y1 * y1 * x1 * x1;
	cout<<hix;
	cout<<"\n\n\n";
	cout<<setw(49)<<"INDEX  TABLE\n";
	cout<<"\n";
	cout<<"      RELATIVE HUMIDITY (%)"<<endl;
	do{
	if(x1<=p1)
	{
		cout<<" "<<x1;
		x1+=r1;
		continue;
	}
	}
	while(x1!=0);
	
 	for(int i=1;i<50;i++)
 	{
 	cout<<"--";
	cout<<"\n";
   }
   cout<<"Temperature deg. F";
	
}