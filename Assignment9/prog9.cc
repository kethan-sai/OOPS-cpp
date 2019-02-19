/**************************************************************************
FILE           : prog9.cc
AUTHOR         : Lakshmi Chaitanya Rayala
Z-ID           : z1808662
DUE DATE       : 11/04/2016
PURPOSE        : This file has the functionality of N aueens problem
****************************************************************************/

#include "prog9.h"/*Header file for N queens problem*/

unsigned N=1;/*insitial value for number of queens*/

/*Main function where execution of code starts*/
int main()
{
        while(N<=8)
        {       
            cout<<"\n Board Size = "<<N<<endl;/*Displays chess board size for each queens number*/
            solveNQueens(N);
            N++;/*increment for next number of queens*/
        }
	return 0;
}

/*sub-routine to create a two-dimensional vector of vectors of type bool*/
void solveNQueens ( const unsigned& n )
{
	if(n>=1){
	vector< vector<bool> > board;
        initBoard(board);/*calling initializing default chess board with given size*/
        if(solveNQueensUtil(board,0))
        {
                printBoard(board);
        }else{
		cout<<"Solution does not exists"<<endl;
 	}
	}
}

/*sub-routine that determines if the location on chess board is safe for queen*/
bool isSafe ( const vector < vector < bool > >& board, const int& row, const int& col )
{                                         
    int sz=board.size();/*Get size of chess board*/
    int i, j;
        for (i = 0; i <= row; i++)/*checks whether a queen is present in a row*/
    {
        if (board[i][col] )
        return false;
    }

        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)/*checks if a queen is present in a current field*/
    {
        if (board[i][j])
        return false;
    }

        for (i = row, j = col; j >= 0 && i < sz; i++, j--)/*checks if a queen is present in a diagonal*/
    {
        if (board[i][j])
        return false;
    }

        for (i = row, j = col; j < sz && i>=0; i--, j++)/*checks if a queen is present in a diagonal*/
    {
        if (board[i][j])
        return false;
    }
    return true;/*returns a success operator if a queen can be placed in a loaction*/
}

/*Initialize chess board with given size and all values to zero*/
void initBoard(vector< vector<bool> > &board)
{
        vector <bool> r;
        for(unsigned i=0;i<N;i++)
        {                                                             
        for(unsigned j=0; j<N;j++)
        {
        r.push_back(false);/*putting values into each field of chess board*/ 
        }
        board.push_back(r);/*putting vector of bool values to other vector of 2D*/                                              
        }
        srand(time(0));/*RNG to set to default position*/
}

/*Recursibe sub-routine to check if queen can be placed on (i,j) location*/
bool solveNQueensUtil ( vector < vector < bool > >& board, const unsigned& row )
{

    int col;
    unsigned boardSize=board.size();/*Gets chess board size*/
    if (row >= boardSize){
        return true;
    }else{
        
    for (unsigned i = 0; i<=boardSize+4; i++)
    {
        col=rand()%(boardSize);/*Using RNG to get random column*/
        if ( isSafe(board, row, col) )/*calling isSafe to check if queen can be placed in location (i,j)*/
        {
                board[row][col]=true;
                /*Back-tracking is done usng this if condition*/ 
                if ( solveNQueensUtil(board, row + 1) == true ){
                	return true;
		}
                board[row][col]=false;
        }
    }
    }
    return false;
}

/*Prints N queens chess board*/
void printBoard(const vector <vector <bool> >& board)
{          
	int n=board.size();
        for (int i = 0; i <n; i++)
        {
                cout<<" "<<setfill('-')<<setw(6*n)<<"\n";/*sets 6 - for a row of a box*/
                int j=1;
                while(j<=n)
                        {
                                cout<<"|"<<"     ";/*sets a | for a column of a box*/
                                j++;
                        }

                        cout<<"|"<<endl;

                        for(  int k=0; k<n; k++)
                        {
                                if(board[i][k]==true)
                                {
                                        cout<<"|"<<"  "<<"Q"<<" "<<" ";
                                }

                                else
                                {
                                        cout<<"|"<<"  "<<" "<<" "<<" ";
                                }
                        }

                        cout<<"|"<<"\n";
                        j=1;

                        while(j<=n)
                        {
                                cout<<"|"<<"     ";
                                j++;
                        }
                        cout<<"|"<<endl;
         }

         cout<<" "<<setfill('-')<<setw(6*n)<<"\n";
         cout<<endl<<endl;
}                                                
