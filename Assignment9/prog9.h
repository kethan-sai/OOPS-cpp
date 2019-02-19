/**************************************************************************
FILE           : prog9.h
AUTHOR         : Lakshmi Chaitanya Rayala
Z-ID	       : z1808662
DUE DATE       : 11/04/2016
PURPOSE        : This file is used as a header file for the source file prog9.cc.
		 This has the function prototypes  declared for N aueens problem
****************************************************************************/
#ifndef N_QUEENS/*checks if header is already deined*/
#define N_QUEENS/*defines header if not defined*/
#include <iostream>/*Library to execute input and ouput operations*/
#include <iomanip>/*Library for i/p and o/p manipulators*/
#include <vector>/*Library for vectors*/
using namespace std;/*using std namespace*/
void solveNQueens( const unsigned& );/*solveNQueens proto-type*/
void initBoard( vector< vector< bool >>& );/*initBoard proto-type*/
bool solveNQueensUtil( vector< vector< bool >>& , const unsigned& );/*solveNQueensUtil proto-type*/
bool isSafe( const vector< vector< bool >>& , const int& , const int& );/*isSafe proto-type*/
void printBoard(const vector< vector< bool >>& );/*printBoard proto-type*/
#endif/*end of N queens hearder file*/
