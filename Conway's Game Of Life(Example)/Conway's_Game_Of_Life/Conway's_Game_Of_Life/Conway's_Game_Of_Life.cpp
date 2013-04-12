// Conway's_Game_Of_Life.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(void)
{
	srand(time(NULL));
	bool board[100][100];
	bool cboard[100][100];
	ifstream filein;
	ofstream fileout;
	filein.open("RUNS");
	int runs = 0;
	filein >> runs;
	runs++;
	filein.close();
	fileout.open("RUNS");
	fileout << runs;
	fileout.close();
	string filename = "Record" + static_cast<ostringstream*>(&(ostringstream() << runs))->str() + ".txt";
	fileout.open(filename);
	for(int i = 1; i < 100; i++)
	{
		for(int j = 1; j < 100; j++)
		{
			board[i][j] = (rand() % 100) <= 35 ? true : false;
		}
	}
	while(false == false)/*lol or while(true):)*/
	{
		for(int i = 1; i < 100; i++)
		{
			for(int j = 1; j < 100; j++)
			{
				int alive = 0;
				alive += board[i][j+1];
				alive += board[i][j-1];
				alive += board[i+1][j];
				alive += board[i-1][j];
				alive += board[i+1][j+1];
				alive += board[i-1][j+1];
				alive += board[i+1][j-1];
				alive += board[i-1][j-1];
				cboard[i][j] = ((board[i][j] && (alive == 3 || alive == 4))||(!board[i][j] && alive == 3)) ? true : false;
			}
		}
		for(int i = 1; i < 100; i++)
		{
			for(int j = 1; j < 100; j++)
			{
				board[i][j] = cboard[i][j];
			}
		}
		for(int i = 1; i < 100; i++)
		{
			for(int j = 1; j < 100; j++)
			{
				if(board[i][j])
				{
					cout << "+";
					fileout << "+";
				}
				else 
				{
					cout << " ";
					fileout << " ";
				}
			}
			cout << endl;
			fileout << endl;
		}
		for(int i = 0; i < 100; i++) fileout << "_";
		fileout << endl;
		Sleep(1000);
		system("CLS");
	}
	return 0;
}

