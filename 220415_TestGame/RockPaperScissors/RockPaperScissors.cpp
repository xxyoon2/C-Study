﻿// ConsoleApplication3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h> // _getch
#include <stdlib.h> // time 
#include <windows.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int player_num;
	int monster_num;

	bool p_win = false;
	bool m_win = false;

	int empty = 0;

	int p_row = 0;
	int p_col = 0;
	int m_row = 0;
	int m_col = 0;

	char bingo[3][3];

	for (int i = 0; i < 3; i++) // 필드 넣기
		for (int j = 0; j < 3; j++)
			bingo[i][j] = 'c';



	for (int i = 0; i < 3; i++) // 필드에 찍기
	{
		for (int j = 0; j < 3; j++)
			cout << bingo[i][j];
		cout << endl;
	}


	while (1)
	{
		cout << "a : 사용자의 말 | b : 몬스터의 말 | c : 빈칸 " << endl << endl;
		cout << "왼쪽 위부터 0 1 2 이다. 숫자를 넣으시오" << endl;

		cin >> player_num;

		p_row = player_num / 3; // 가로
		p_col = player_num % 3; // 세로

		cout << p_row << endl;
		cout << p_col << endl;

		Sleep(1000);


		if ((bingo[p_row][p_col] == 'c')) // 플레이어 말이 놓을 수 있는가?
		{
			bingo[p_row][p_col] = 'a'; // 플레이어 말

			system("cls");

			for (int i = 0; i < 3; i++) // 플레이어 차례 후 필드 찍기
			{
				for (int j = 0; j < 3; j++)
					cout << bingo[i][j];
				cout << endl;
			}

			cout << "몬스터 차례 " << endl;

			Sleep(1000);


			while (1) // 몬스터 말 두기
			{
				//srand(time(NULL));
				monster_num = rand() % 9;

				m_row = monster_num / 3; // 가로
				m_col = monster_num % 3; // 세로


				if (bingo[m_col][m_row] == 'c') // 몬스터가 말을 두려는 곳이 c로 비어있으면
				{
					bingo[m_col][m_row] = 'b'; // 말을 둔다
					break;
				}
				else // 안비어있다.
				{
					for (int i = 0; i < 3; i++) // 안 비어 있는데 놓을 수 있는 곳도 없어서 나와야 할때
						for (int j = 0; j < 3; j++)
							if (bingo[i][j] == 'c')
								empty++;

					if (empty == 9)
						break;

					empty = 0;
				}


			}

			Sleep(1000);

			system("cls");

			for (int i = 0; i < 3; i++) // 몬스터 말 놓고 필드 찍기
			{
				for (int j = 0; j < 3; j++)
					cout << bingo[i][j];
				cout << endl;
			}

			// 탐색 후 빙고 됬는 지 출력

			for (int i = 0; i < 3; i++) // 012 345 789
				if ((bingo[i][0] == bingo[i][1]) && (bingo[i][1] == bingo[i][2]))
					if (bingo[i][0] == 'a')
					{
						//cout << "빙고! 사용자가 이겼습니다." << endl;
						p_win = true;
					}
					else if (bingo[i][0] == 'b')
					{
						//cout << "빙고! 몬스터가 이겼습니다." << endl;
						m_win = true;
					}
					else // 이경우는 '_'가 되었을 때 즉 _ _ _ 인 경우는 아무것도 안하기
						;


			for (int i = 0; i < 3; i++) // 036 147 258
				if ((bingo[0][i] == bingo[1][i]) && (bingo[1][i] == bingo[2][i]))
					if (bingo[0][i] == 'a')
					{
						//cout << "빙고! 사용자가 이겼습니다." << endl;
						p_win = true;
					}
					else if (bingo[0][i] == 'b')
					{
						//cout << "빙고! 몬스터가 이겼습니다." << endl;
						m_win = true;
					}
					else // 이경우는 '_'가 되었을 때 즉 _ _ _ 인 경우는 아무것도 안하기
						;

			if ((bingo[0][0] == bingo[1][1]) && (bingo[1][1] == bingo[2][2])) // 대각선(\) 로 승리 0 4 8
				if (bingo[0][0] == 'a')
					p_win = true;
				else if (bingo[0][0] == 'b')
					m_win = true;
				else
					;

			if ((bingo[0][2] == bingo[1][1]) && (bingo[1][1] == bingo[2][0])) // 대각선(/) 로 승리 246
				if (bingo[0][2] == 'a')
					p_win = true;
				else if (bingo[0][2] == 'b')
					m_win = true;
				else
					;

			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					if (bingo[i][j] == 'c')
						empty++;

			if (empty == 9) // 무승부 종료
			{
				cout << "둘 수 있는 자리가 없습니다. 무승부" << endl;
				break;
			}

			if (p_win)
			{
				cout << "빙고! 사용자가 이겼습니다." << endl;
				break;
			}
			if (m_win)
			{
				cout << "빙고! 몬스터가 이겼습니다." << endl;
				break;
			}

			empty = 0;
			p_row = 0;
			p_col = 0;
			m_row = 0;
			m_col = 0;
			// 전체 탐색 후 빈칸 (_) 이 없을 때 무승부로 끝나기.

		}

		else // 플레이어 말을 둘 수 없음 C가 아닌 a나 b가 자리하고 있음
		{
			empty = 0;
			p_row = 0;
			p_col = 0;
			m_row = 0;
			m_col = 0;
			cout << "그곳엔 둘 수 없습니다.";
		}

	}

}