#include "prog9.h"


void solveNQueens (const unsigned& n){

vector <vector<bool>>& board;
board.resize(n);
for(int i=0;i<n;i++){
board[i].resize(n);
}
board=initBoard(board);
cout<<"Board Size = "<<n;
for(unsigned i=0;i<n;i++){
solveNqueensUtil(board,i
}
}

vector <vector<bool>>& initBoard(vector <vector<bool>>& board){

int seed=0;
srand(seed);
for(int i=0;i<n;i++){
for(int k=0;k<board[i].size();k++)
{
board[i][k]=false;
}
}
return board;
}

bool solveNqueensUtil(vector <vecto<bool>>& board, const unsigned& row){

bool safe=false;
int seed=1;
srand(seed);
int randNum = rand()%((board.size());
for(int i=0;i<board[row].size();i++){
if(i==randNum){
safe=isSafe(board,row,randNum);
}
}
if(safe){
if(row<board().size()-1){
return solveNqueensUtil(board,row+1);
}
}
}

bool isSafe(const vector <vector<bool>>& board, const int& row, const int& col){

for(int i=0;i<n;i++){
for(int k=0;k<board[i].size();k++)
{

}
}
}
