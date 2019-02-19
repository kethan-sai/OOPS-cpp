
#include "cal.h"
 //include header files



int main()//main function
{
	int yr,mon=2,days,cal[6][7] = { 0 },row = 0, col;
	bool bol;
	cout<<"enter year: "; //input year
	cin>>yr;
	while(yr<=0)//error checking
	{
		cout<<" enter year which is greater than 0 or postive value: ";
		cin>>yr;
	}
	cout<<"enter month: "; //input month
	cin>>mon;
	while(mon>12||mon<1){
		cout<<"please enter in range 1 to 12: ";
		cin>>mon;
	}
	
	
	bol=leapyr(yr,mon); //functions to invoke and return a value to a variable
	header(yr,mon);
	days=body(yr,mon,bol);
	col=week(yr,mon,days,bol);


		
		for (int i = 1; i <= days; i++) //input day to the array
		{
			cal[row][col] = i;
			col++;
			if (col == 7)
			{
				row++;
				col = 0;
			}

		}

	
	for (row = 0; row <= 5; row++)//print out the table
	{
		for (col = 0; col <= 6; col++)
			{
		
			if (cal[row][col] == 0)
				{
				cout<<setw(3);
				cout<<" ";
				}
				else	
				{		
					
			       cout << setw(3) << cal[row][col];
				}	
					}
		cout << endl;
	}


	return 0;
}

