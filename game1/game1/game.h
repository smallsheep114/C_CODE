#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3//ROW---3
#define COL 3//COL---3

void InitBoard(char board[ROW][COL], int row, int col);// ������ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//������ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
