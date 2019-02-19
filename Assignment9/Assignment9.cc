/*
*
* File: prog11.cc
* Name : Adhitya Kondabathini
* Zid :  z1789141
* Date : 4-20-2016
* ----------------------------------------------------
* C++ program for the most powerful piece in the game of chess is the queen, which can move any number
* of squares in any direction, horizontally, vertically, or diagonally. For example, the queen
* shown in the following chessboard of size N = 8 can move to any of the marked squares.
*
*
*/
#include "prog9.h"

 /*
*
* class main
*---------------------------------------------------------
* In this main function N is declared and it is called in  solveNQueens function. 
*
*
*/
 int main() 
 {
        unsigned i=1;
 	while(i<=8){
 	    cout<<"Board Size = "<<i<<endl;
 	    solveNQueens(i);
 	    i++;
    }
 	return 0;
 }
 /*
*
* class main
*---------------------------------------------------------
* In this main function N is declared and it is called in  solveNQueens function. 
*
*
*/
 
 void solveNQueens ( const unsigned& n )
 {
       	cout<<"inside solveNQueens"<<endl;	
              vector<vector<bool>> board(n, vector<bool>(n));
		initBoard(board);
			
			
			if(solveNqueensUtil(board,0))
				{
					cout<<"inside if loop of solveNQueens"<<endl;
					printBoard(board);                                              
				}
			else
				{
					cout<<"Solution does not exists"<<endl<<endl;                       
				}
	
 }
 
  /*
*
* class main
*---------------------------------------------------------
* In this main function N is declared and it is called in  solveNQueens function. 
*
*
*/
 void initBoard(vector< vector< bool >>& board)
 {
 	cout<<"inside initBoard "<<endl;
	srand(time(0));
        unsigned boardSize=board.size();	
	for(unsigned i=0;i<boardSize;i++){
			//cout<<"inside for loop of initBoard "<<endl;                                             
			vector <bool> row;                                                            
        
			for(unsigned j=0; j<boardSize;j++){ 
			row.push_back(false);                                        
    			}
		board.push_back(row);                                             
	}
 }
 
 /*
*
* class main
*---------------------------------------------------------
* In this main function N is declared and it is called in  solveNQueens function. 
*
*
*/
 bool solveNqueensUtil ( vector < vector < bool > >& board, const unsigned& row )
 {
    cout<<"inside solveNqueensUtil"<<endl;
    int col;
    unsigned boardSize=board.size();
    cout<<"board size in solveNqueensUtil is: "<<boardSize<<endl;
    if (row >= boardSize){                                                     
        cout<<"inside if row >= of solveNqueesUtil"<<endl;
	return true;
    }else
{
    
	//for (unsigned alpha = 0; alpha<=N+4; alpha++)  
        for (unsigned i = 0; i<=boardSize+4; i++)
                                  
    { 
	cout<<"inside for loop of solveNqueensutil"<<endl;
        col=randVal(0, board.size()-1);       
        cout<<"column is: "<<col<<endl;                        
        if ( isSafe(board, row, col) )
			{
				cout<<"inside if isSafe of solveNqueensUtil"<<endl;
				board[row][col]=true;                                    
            
			if ( solveNqueensUtil(board, row + 1) == true )          
                return true;
            
				board[row][col]=false;
			}
    }
}
    return false;                                                     
 }

  /*
*
* class main
*---------------------------------------------------------
* In this main function N is declared and it is called in  solveNQueens function. 
*
*
*/
 bool isSafe ( const vector < vector < bool > >& board, const int& row, const int& col )
 {
    int S=board.size();
    int i, j;
    cout<<"inside isSafe"<<endl;
	for (i = 0; i <= row; i++)                                        
    {
        if (board[i][col] )
        return false;
    }
    
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)                
    {
        if (board[i][j])
        return false;
    }
    
	for (i = row, j = col; j >= 0 && i < S; i++, j--)                
    {
        if (board[i][j])
        return false;
    }
    
	for (i = row, j = col; j <S && i>=0; i--, j++)                   
    {
        if (board[i][j])
        return false;
    }
    return true;                                                 
 
 }
/*
 void printBoard(vector< vector<bool> > &board)
 {
 	for(unsigned alpha=0;alpha<N;alpha++){   
	
	    for(unsigned k=0;k<N;k++)    
	        cout<<" ---";  
		
		cout<<endl; 
			
		                                    
        for(unsigned beta=0; beta<N;beta++){
        	if(board[alpha][beta]==true){
					
        		cout<<"| Q ";
			}
			if(board[alpha][beta]==false){
        		cout<<"|   ";
			}
		}
		cout<<"|";
		cout<<endl;
	}
	for(unsigned k=0;k<N;k++)    
	    cout<<" ---";
	cout<<endl<<endl;
 }*/

 
  /*
*
* class main
*---------------------------------------------------------
* In this main function N is declared and it is called in  solveNQueens function. 
*
*
*/

 int randVal(int l, int h)
{
	cout<<"inside randval"<<endl;
	return (rand() % (h - l + 1) + l);
}
 
  /*
*
* class printBoard
*---------------------------------------------------------
* PrintBoard function is used to display the chessboard with queen at right position.
*
*
*/
 void printBoard( const vector < vector < bool > >& board)
{
	cout<<"inside printboard";
	int n=board.size();
	
	for (int alpha = 0; alpha <n; alpha++)
	{
		cout<<" "<<setfill('-')<<setw(6*n)<<"\n";
		  int beta=1;
		while(beta<=n)
			{
				cout<<"|"<<"     ";
				beta++;
			}
			
			cout<<"|"<<endl;
			
			for(  int b=0; b<n; b++)
			{
				if(board[alpha][b]==true)
				{
					cout<<"|"<<"  "<<"Q"<<" "<<" ";
				}
			
			else
				{
					cout<<"|"<<"  "<<" "<<" "<<" ";
				}
			}

			cout<<"|"<<"\n";
			beta=1;

			while(beta<=n)
			{
				cout<<"|"<<"     ";
				beta++;
			}
			cout<<"|"<<endl;
		}
		
		cout<<" "<<setfill('-')<<setw(6*n)<<"\n";
		cout<<endl<<endl;
}
