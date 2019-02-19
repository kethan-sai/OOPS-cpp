/**********************************************************************************
Name: Susmitha Muvva    
Zid:    Z1778707
Assignment 8 
Due Date: October 29th, 2015    
File Name: prog8.cc
Description: This program is to solve n-Queens problem
**********************************************************************************/

#include "prog9.h"//Header file which has prototypes
int main()
{
unsigned n=1;
cout<<"The solution for N Queens is";
for(n=1;n<=8;n++){
	solveNQueens(n);
}}
/*****************************************************************
FUNCTION: void solveNQueens(const unsigned& n) 
PARAMETERS: Board size 
RETURNS: none
NOTES: It calls the function initBoard and prints the solution for n -Queens by calling printBoard if there is solution. and no solution if solution does not exist
*****************************************************************/

void solveNQueens(const unsigned& n)
{
vector<vector<bool>> board(n, vector<bool>(n));
initBoard(board,n);
cout<<"Size of chessboard = "<<board.size()<<" x "<<board.size()<<endl;
	if(solveNQueensUtil(board, 0))
	{
	printBoard(board);
	}
	else
	{
	cout<<"No solution exists "<<endl;
	}
}

/*****************************************************************
FUNCTION: bool solveNQueensUtil(vector<vector<bool>>& board, const unsigned& row)
PARAMETERS:  board,row 
RETURNS: true or false
NOTES: identifies safe position possible for queen to be placed using issafe function 
*****************************************************************/

bool solveNQueensUtil(vector<vector<bool>>& board, const unsigned& row)
{
if(row >= board.size())
return true;
bool b[board.size()];
if(isSafe(board, row, col))
{
board[row][col] = true;
if(solveNQueensUtil(board, row+1))	
return true;
board[row][col] = false;
}
else
{
for(unsigned i=0;i<board.size();i++)
{
if(i != col)
{
if(isSafe(board, row, i))
{
board[row][i] = true;
if(solveNQueensUtil(board, row+1)) 	
return true;
board[row][i] = false;
}
}
}
}
return false;
}
/*********
FUNCTION: bool isSafe(const vector<vector<bool>>& board, const int& row, const int& col) 
PARAMETERS: board,row,column 
RETURNS: true or false
NOTES: This function identifies safe position
*****************************************************************/
	
bool isSafe(const vector<vector<bool>>& board, const int& row, const int& col)
{
for(unsigned i=0;i<=(unsigned)row;i++)
{
for(unsigned j=0;j<board.size();j++)
	{
	if(board[i][j] == true) 
	{
	if(abs(row-(int)i) == abs(col-(int)j))	return false;
	}
	}
	if(board[i][col] == true)	
	return false;
}
return true;
}


/*****************************************************************
FUNCTION: void printBoard(const vector<vector<bool>>& board) 
PARAMETERS: board
RETURNS: none
NOTES: This function prints the solution of n-quees problem
*****************************************************************/

void printBoard(const vector<vector<bool>>& board)
{
for(unsigned i=0;i<board.size();i++)
{
for(unsigned j=0;j<board.size();j++)
{
if(board[i][j] == true)	cout<<" Q ";
else	cout<<" * ";
}
cout<<endl;
}
}

/*****************************************************************
FUNCTION: int random(int low, int high) 
PARAMETERS:low,high  
RETURNS: integer value 
NOTES: It generates arandom number between given low,high 
*****************************************************************/

int random(int low, int high)
{
int x=(rand()%(high-low+1))+low;
return x;
}

/*****************************************************************
FUNCTION: void initBoard(vector<vector<bool>>& board,int n)
PARAMETERS: board, size of board 
RETURNS:none 
NOTES: initializes row-column  arrray to false
*****************************************************************/

void initBoard(vector<vector<bool>>& board,int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
board[i][j] = false;
}
}
srand(time(NULL));
}

