/**************************************************************************
FILE: prog8.h
AUTHOR:SusmithaMuvva   
Z-ID:  Z1778707
DUE DATE: 10/29/2015
PURPOSE: This file is used as a header file for the source file prog8.cc.
This has the function prototypes  declared.
****************************************************************************/
#ifndef HEA8
#define HEA8
#include <iostream>
#include <string>
#include <vector>
#endif
void solveNQueens(const unsigned& n);
void initBoard(vector<vector<bool>>& board, int);
bool solveNQueensUtil(vector<vector<bool>>& board, const unsigned& row);
bool isSafe(const vector<vector<bool>>& board, const int& row, const int& col);
void printBoard(const vector<vector<bool>>& board);
int random(int low, int high);

