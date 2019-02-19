#include "prog10.h" /*using header file*/
/********************************************************************************
name            : Lakshmi Chaitanya Rayala
Zid             : Z1808662
Assignment      : 10
Due Date        : 11/15/2016
Description     : source file for calculator program
*********************************************************************************/
int main() /*Program execution starts here*/
{
stack<double> st; /*initialising stack varible*/
string tkn; /*initialising token as a string*/
while(getline(cin, tkn))
	{	
	process_token(tkn, st); //to Process individual tokens
	}
return 0;
}
/*Sub-routine that reads token and checks for floating point, unary operator,digit,valid operator,= and c*/

void process_token(const string& tkn2, stack<double>& st)
{
char ch;
istringstream is(tkn2);
string tkn;
bool floatPntFlg = false;
while(is>>tkn)
{
	unsigned i=0;
	while(i<tkn.length())
	{
		ch = tkn[i];
		floatPntFlg = floatPoint(ch, tkn, i);
		/*Checks for unary operator*/
		if((unarySign(ch, tkn, i)))
		{	 
			floatPntFlg = floatPoint(tkn[i+1], tkn, i+1);
			st.push(getNumber(tkn, i));
		}
		else if(floatPntFlg)/*Checks for floating point*/ 
		{
			st.push(getNumber(tkn, i));
		}
		else if(isdigit(ch))/*Checks for digit*/
        	{
        		st.push(getNumber(tkn, i));
        	}
		else if(isValidOperator(ch))/*Checks if operator is valid*/
		{
			double result = operation(ch, popStack(st), popStack(st)); 
			st.push(result);
		}
		else if(ch == '=')
		{
			printResult(st);
		}
		else if(ch == 'c')
		{
			emptyStack(st);
		}
		else
		{
			cerr<<"error: character '"<<ch<<"' is invalid"<<endl;
		}
	i++;
	}
}
}

/*Sub-routine that checks if character is unary operator*/

bool unarySign(const char& ch, const string& tkn, const unsigned& i)
{
	if(((ch == '+') || (ch == '-')) && (i < tkn.length()-1) && ((isdigit(tkn.at(i+1))) || (tkn.at(i+1) == '.')))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*Sub-routine that checks if character is valid floating point*/

bool floatPoint(const char& ch, const string& tkn, const unsigned& i)
{
	if((ch == '.') && (i < tkn.length()-1) && (isdigit(tkn.at(i+1))))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*Sub-routines that check if char c is valid operator*/

bool isValidOperator(const char& ch)
{
	if((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/')){
		return 1;
	}	
	else{	
		return 0;
	}
}

void emptyStack(stack<double>& st)
{
while(st.empty() == 0)
	{
	st.pop();
	}
}

/*Sub-routines that prints top value from stack*/

void printResult(const stack<double>& st)
{
	if(st.empty())	
	{
		cerr<<"error: stack is empty"<<endl;
	}
	else{
		cout<<fixed<<setprecision(2)<<setw(8)<<st.top()<<endl;
	}
}

double popStack(stack<double>& st)
{
	double top_value = 0;
	if(st.empty())	
	{
		cerr<<"error: stack is empty"<<endl;
	}
	else
	{
		top_value = st.top();
		st.pop();
	}
	return(top_value);
}

/*Sub-routine that Returns result after applying operator */

double operation(const char& ch, const double& a, const double& b)
{
	double res = 0.0;

	if(ch=='+')    res = a+b;
	if(ch=='-')    res = a-b;
	if(ch=='*')    res = a*b;
	if(ch=='/')    res = a/b;
	return(res);
}
/*Sub-routine that Returns the substring*/

double getNumber(const string& tkn, unsigned& i)
{
	int cnt = 0;
	unsigned j = 0;
	for(j = i+1;j<tkn.length();j++)
	{
		if(tkn[j] == '.')
		{
			/*check if token is a decimal point*/
			if(!(floatPoint('.', tkn, j)))			
			{
				cnt = 10;
				break;
			}
			cnt++;		
		}
		else if(!isdigit(tkn[j])){	/*Check if all digits of token are digits*/
			break;
		}
	}
	if(cnt >= 2)
	{
		cerr<<"error: number '"<<tkn.substr(1)<<"' is invalid"<<endl;
		return 0;
	}
	else
	{
		string s = tkn.substr(i, (j-i));
		i = j-1;
		return(stod(s));
	}
}
