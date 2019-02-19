#ifndef N_QUEEN_PROB
#define N_QUEEN_PROB
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

void solveNQueens( const unsigned& );
void initBoard( vector<vector<bool>>& , const unsigned& );
bool solveNQueensUtil( vector<vector<bool>>& , const unsigned& );
void printBoard( const vector<vector<bool>>& );
bool isSafe ( const vector<vector<bool>>&, const int&, const int& );
#endif
