/********************************************************************************
name 		: Lakshmi Chaitanya Rayala
Zid		: Z1808662
Assignment      : 10
Due Date        : 11/15/2016
Description	: header file which contains prototypes for the caluclator program
*********************************************************************************/

#ifndef CALCULATOR /*define header file if not defined*/
#define CALCULATOR 
#include <iostream> /*Library to define input and output stream*/
#include <string> /*Library to perform string operations*/
#include <stack> /*Library to perform stack operations*/
#include <iomanip> /*Library to perform input and outpt manipulations like setw,setfill*/
#include <sstream> /*Library to perform string stream operations*/

using namespace std; /*Using standard namespace*/
void process_token(const string& token, stack<double>& s); /*proto-type for process_token sub-routine*/
bool isValidOperator(const char& c); /*proto-type for isValidOperator sub-routine*/
void emptyStack(stack<double>& s); /*proto-type for emptyStack sub-routine*/
void printResult(const stack<double>& s); /*proto-type for printResult sub-routine*/
double popStack(stack<double>& s); /*proto-type for popStack sub-routine*/
double operation(const char& c, const double& a, const double& b); /*proto-type for operation sub-routine*/
bool unarySign(const char& c, const string& token, const unsigned& i); /*proto-type for unarySign sub-routine*/
bool floatPoint(const char& c, const string& token, const unsigned& i); /*proto-type for floatPoint sub-routine*/
double getNumber(const string& token, unsigned& i); /*proto-type for getNumber sub-routine*/

#endif /*end of header file*/
