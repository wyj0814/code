﻿#ifndef __GAME_H__
#define __GAME_H__



#include <stdio.h>
#include <time.h>
#include <stdlib.h>





#define ROW 3
#define COL 3



void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);



char IsWin(char board[ROW][COL], int row, int col);

//IsWin

//'X'--µçÄÔÓ®

//'0'--Íæ¼ÒÓ®

//'Q'--Æ½¾Ö

//' '--¼ÌÐø



int IsFull(char board[ROW][COL], int row, int col);



#endif //__GAME_H__



