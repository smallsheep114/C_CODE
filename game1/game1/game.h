#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3//ROW---3
#define COL 3//COL---3

void InitBoard(char board[ROW][COL], int row, int col);// 声明初始化函数
void DisplayBoard(char board[ROW][COL], int row, int col);//声明打印函数
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
