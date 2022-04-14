#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    /*
       콘솔용 탈출 게임
       10 * 10 크기의 맵을 구성한다. (2차원 배열)
       플레이어(0, 0)가 존재
       탈출지점이 존재
       WASD(상하좌우)키입력을 통해 플레이어를 이동시킨다.
       탈출 지점은 (0, 0)을 제외하고 랜덤 설정
       플레이어(O)가 탈출지점(E)에 도달하면 "탈출에 성공했습니다." 출력되고, 프로그램 종료
       system("cls");  //화면을 싸그리 지워줌

       #O########
       ##########
       ##########
       ##########
       ##########
       ##########
       ##########
       ##########
       #######E##
       ##########


       +)
       1. 맵 가로 20으로 확장
       2. 몬스터 생성
       3. 몬스터는 플레이어가 있는 방향으로 움직임(2턴당 한 번 이동)

       ++)
       1. 22*12로 가장자리 테두리에 벽 생성(플레이어와 몬스터가 뚫지 못함)
       2. 장애물 생성(플레이어와 몬스터가 장애물 뚫지 못함)
   */

    srand(time(NULL));

    char consoleGameMap[12][22];
    int playerX = 1, playerY = 1;
    int exitX, exitY;
    int monsterX[2] = {};
    int monsterY[2] = {};
    char inputUserKey = ' ';
    int turn = 0;
    
    exitX = rand() % 9 + 1;
    exitY = rand() % 19 + 1;

    //몬스터 좌표 랜덤으로 지정
    for (int i = 0; i < 2; i++)
    {
        monsterX[i] = rand() % 9 + 1;
        //cout << monsterX[i] << endl;
        monsterY[i] = rand() % 19 + 1;
        //cout << monsterY[i] << endl;
    }


    //맵 초기화
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            if ((i == 0) || (j == 0) || (i == 11) || (j == 21))
                consoleGameMap[i][j] = '@';
            else
                consoleGameMap[i][j] = '-';
        }
    }

    consoleGameMap[exitX][exitY] = 'E';

    while (1) {
        turn++;

        //맵 값
        consoleGameMap[playerX][playerY] = 'O';
        consoleGameMap[exitX][exitY] = 'E';
        consoleGameMap[monsterX[0]][monsterY[0]] = 'M';
        consoleGameMap[monsterX[1]][monsterY[1]] = 'M';


        //맵 출력
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 22; j++)
            {
                cout << consoleGameMap[i][j];
            }
            cout << endl;
        }

        //탈출조건 & 게임오버 조건
        if ((playerX == exitX) && (playerY == exitY))
        {
            cout << "<<탈출에 성공하셨습니다.>>" << endl;
            break;
        }
        else if ((playerX == monsterX[0]) && (playerY == monsterY[0]))
        {
            cout << "<< YOU DIED >>" << endl;
            break;
        }
        else if ((playerX == monsterX[1]) && (playerY == monsterY[1]))
        {
            cout << "<< YOU DIED >>" << endl;
            break;
        }


        cout << inputUserKey;
        inputUserKey = _getch();

        //위치 지정해주기 전에 초기화
        consoleGameMap[playerX][playerY] = '-';
        consoleGameMap[monsterX[0]][monsterY[0]] = '-';
        consoleGameMap[monsterX[1]][monsterY[1]] = '-';

        //몬스터 이동
        if (turn % 2 == 0)
        {
            for (int i = 0; i < 2; i++)
            {
                if (playerX != monsterX[i])
                {
                    if (playerX > monsterX[i])
                        monsterX[i]++;
                    else
                        monsterX[i]--;
                }
                else if (playerY != monsterY[i])
                {
                    if (playerY > monsterY[i])
                        monsterY[i]++;
                    else
                        monsterY[i]--;
                }
            }
        }

        //움직이게
        switch (inputUserKey)
        {
        case 'w':
        case 'W':
            playerX -= 1;
            break;
        case 'a':
        case 'A':
            playerY -= 1;
            break;
        case 's':
        case 'S':
            playerX += 1;
            break;
        case 'd':
        case 'D':
            playerY += 1;
            break;
        }

        system("cls");
    }
}