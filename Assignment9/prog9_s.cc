/**********************************************************************************
Name       : Lakshmi Chaitanya Rayala     
Zid        : Z1808662
Assignment : 8 
Due Date   : November 4th, 2016    
File Name  : prog9.cc
Description: Solving N Queens problem using recursive function
**********************************************************************************/

#include "prog9.h"//Header file that has all the user libraries and prototypes of functions
int main()
{
//cout<<"1"<<endl;
unsigned n=1;
cout<<"The solution for N Queens is";
for(n=1;n<=8;n++){
//cout<<"2"<<endl;
	solveNQueens(n);
}
}
/*****************************************************************
FUNCTION: void solveNQueens(const unsigned& n) 
PARAMETERS: Board size 
RETURNS: none
NOTES: It calls the function initBoard and prints the solution for n -Queens by calling printBoard if there is solution. and no solution if solution does not exist
*****************************************************************/

void solveNQueens(const unsigned& n)
{
//cout<<"3"<<endl;
vector<vector<bool>> board;
board.resize(n);
for(unsigned i=0;i<n;i++){
for(unsigned j=0;j<board[i].size();j++){
board[i].resize(n);
}
}
initBoard(board,n);
cout<<"Board Size = "<<n<<endl;
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
cout<<"4"<<endl;
/*
int col=0,seed=0;
srand(seed);
unsigned sz=board.size();
if(row >= sz){
return 1;
}
col=rand()%(sz);
if(isSafe(board, row, col))
{
board[row][col] = 1;
if(solveNQueensUtil(board, row+1)){	
return 1;
}
board[row][col] = 0;
}
else
{
for(int i=0;i<(int)board.size();i++)
{
if(i != col)
{
if(isSafe(board, row, i))
{
board[row][i] = 1;
if(solveNQueensUtil(board, row+1)){ 	
return 1;
}
board[row][i] = 0;
}
}
}
}
return false;*/
    int col=0,seed=0;
    srand(seed);
    unsigned sz=board.size();
    cout<<"board size before if condition is: "<<sz;
    if (row >= sz){                                                     
        cout<<"33"<<endl;
	return true;
    }
    cout<<"board size before for loop is: "<<sz;
	for (unsigned alpha = 0; alpha<=sz+4; alpha++)                                    
    { 
	cout<<"44"<<endl;
        col=rand()%(sz);        
 	cout<<"board size before isSafe is: "<<board.size();                       
        if ( isSafe(board, row, col) )
			{
			cout<<"55"<<endl;
				board[row][col]=true;                                    
            
			if ( solveNQueensUtil(board, row + 1) == true )          
                return true;
            
				board[row][col]=false;
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
cout<<"5"<<endl;
cout<<"board size in isSafe is: "<<board.size();
for(unsigned i=0;i<=(unsigned)row;i++)
{
cout<<"77"<<endl;
for(unsigned j=0;j<board.size();j++)
	{
cout<<"88"<<endl;
//	if(board[i][j] == true) 
//	{
cout<<"99"<<endl;
	//if(abs(row-(int)i) == abs(col-(int)j))	return false;
//	}
	}
cout<<"101"<<endl;
	if(board[i][col] == true)	
	return false;
cout<<"100"<<endl;
}
cout<<"66"<<endl;
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
//cout<<"6"<<endl;
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
FUNCTION: void initBoard(vector<vector<bool>>& board,int n)
PARAMETERS: board, size of board 
RETURNS:none 
NOTES: initializes row-column  arrray to false
*****************************************************************/

void initBoard(vector<vector<bool>>& board,const unsigned& n)
{
cout<<n<<endl;
for(unsigned i=0;i<n;i++)
{
vector <bool> eachRow;
cout<<"9"<<endl;
for(unsigned j=0;j<n;j++)
{
cout<<"10"<<endl;
eachRow.push_back(false);
}
board.push_back(eachRow);
}
cout<<"8"<<endl;
srand(time(NULL));
}
