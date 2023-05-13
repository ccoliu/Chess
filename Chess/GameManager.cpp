//File : GameManager.cpp
//Name : �B�[�� ���R�� �f�@�p ���|�h
//First Update:2023/5/3
//Last Update:2023/5/12
//Description:Chess

#include "GameManager.h"


GameManager::GameManager()
{
	bd = Board();
}

void GameManager::StartGame()
{
	cout << "You can choose who will play first: " << endl;
	cout << "1. White" << endl;
	cout << "2. Black" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		bd.starting_color = ChessMan::Color::white;
	}
	else
	{
		bd.starting_color = ChessMan::Color::black;
	}
	cin.ignore();
	while (true)
	{
		view.printBoard();
		player.playerMove(bd.starting_color);
	}
}

void GameManager::printBoard()
{
	view.printBoard();
}