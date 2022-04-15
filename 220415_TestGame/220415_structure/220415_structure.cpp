#include <iostream>
#include <conio.h>]
#include <Windows.h>

using namespace std;

struct score
{
    int kor;
    int eng;
    int math;
};

// 여기에 구조체 정의
struct student
{
    string name;
    int age;
    string homeTown;
    int pride;
    score studentScore;
}wooga;     // 중괄호 세미콜론 전에 student의 변수를 미리 선언해줄 수 있다.
// name, age, korScore, rank라는 하위 변수를 가지고있는 student 구조체를 정의한다.


struct coordinate
{
    int x;
    int y;
};

struct area 
{
    int forest = -1;
    int swamp = -3;
    int plain = 0;
};

struct characters
{
    char player = 'O';
    char monster = 'M';
    char exit = 'E';
    char wall = '@';
    char forest = '^';
    char swamp = '_';
    char plain = ',';
};

int main()  // 우리가 쓰고있는 유일한 함수
{
    /*
        프로그래밍 기초 : (메모리, CPU, 디스크)
        getch()
        1.절차적
        2.구조적
        3.객체지향적

        [추상화]
         : 실제 세게(현상)를 간략화/기호화/보편화해서 표현한 것
        코드에서 추상화가 필요한 이유 : 결국 코드는 사람이 찍는 것이기 떄문에
        C언어에서 코드를 추상화하는 데에 사용되는 삼총사 : 배열, 구조체, 함수
        다른 사람이 코드를 해석하기 편리해야하고
        다른 사람들과 함께 공동으로 코드를 만들기 편리해야 함
        - 배열 : 속성이 동일한 여러 개의 데이터를 이름과 순서를 지정한 연속된 번호로
            서로 연관되어있음을 표시함으로써 추상화됨
        - 구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화
        - 함수 : 프로세스(코드)를 특정 기능 단위로 묶어서 추상화
        최악의 추상화 - 추상화 단계를 상승시키는 과정
        예시)
            string a, b, c; // chldkr
            string a[3];    //위엣 것보다는 좀 낫다
            string name1, name2, name3; //아니면 이런 식으로든지
            string studentName[3];  //위의 것보다 의도가 명료하게 드러나기 때문에 좋은 추상화
    */
    /*
        [구조체]
         : 변수를 모아 놓은 집합체
         특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때
         studentName[10], studentAge[10], studentKorScore[10]   ....    //학생의 ~
         이름, 나이, 국어점수, 석차 등등을 '학생'이라는 구조체로 묶어서 사용

         1. 구조체를 정의하는 위치 : 구조체가 사용되는 함수의 앞에서 정의(함수의 바깥쪽 위)

         2. 구조체 정의의 방법
         strict 구조체 변수명
         {
            구조체 안에 들어갈 하위 변수들
            (위의 예시에 따르면 이름, 나이, 국어점수, 석차같은 애들이 하위변수다.)
         };
         구조체는 일종의 우리가 새롭게 만든 데이터명

         구조체 안에 들어갈 수 있는 하위변수
         int/bool/float같은 기본자료형은 모두 들어갈 수 있음
         string같은 클래스도 가능
         배열도 가능
         앞서 생성된 구조체의 하위변수도 가능

         3. 구조체의 선언과 초기화
         기본적으로 구조체 변수의 개념은 배경 변수의 개념과 동일
         int a[3] = {1, 2, 3};
         구조체 변수도 다음과 같이 선언과 동시에 초기화할 수 있다.

         player.HP = player.HP - monster[n].dmg;
         주석 없이 코드를 배우지 않은 사람에게도 어느 정도의 가독성이 확보됨

    */

#pragma region 실습1
    /*student heeyoung;
    heeyoung.name = "권희영";
    heeyoung.age = 24;
    heeyoung.homeTown = "쾅주";
    heeyoung.pride = 20000000;*/

    /*
        실습
        student 구조체를 사용해 자기 자신의 정보를 입력해보자.
    */

    /*student jiyoon;
    jiyoon.name = "전지윤";
    jiyoon.age = 24;
    jiyoon.homeTown = "원주";
    jiyoon.pride = 99999999;
    jiyoon.studentScore.eng = 0;
    cout << jiyoon.name << jiyoon.age << jiyoon.homeTown << jiyoon.pride  << jiyoon.studentScore.eng << endl;*/
#pragma endregion

    //score myScore = { 50, 80, 90 }; // 배열을 초기화하듯 구조체 변수를 초기화할 수 있다.
    ////monster a = { "고블린", 79, 55.12f, true, 100 }; // ex)
    //cout << myScore.kor << endl << myScore.eng << endl << myScore.math << endl;

#pragma region 실습2
    /*
        실습2 : 과제 업데이트
        사용할 수 있는 모든 요소에 구조체를 활용해서 소스 코드를 개선
        tile : 지형정보를 넣고(숲, 늪, 평지)
        player : 피로도
        플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지 (숲 -1, 늪 -3, 평지 0)
    */

    srand(time(NULL));

    char consoleGameMap[12][22];
    coordinate player = { 1, 1 };
    coordinate exit;
    coordinate monster[2];
    area mapArea;
    characters ch;
    int playerHP = 50;
    char inputUserKey = ' ';
    int turn = 0;

    exit.x = rand() % 9 + 1;
    exit.y = rand() % 19 + 1;

    //몬스터 좌표 랜덤으로 지정
    for (int i = 0; i < 2; i++)
    {
        monster[i].x = rand() % 9 + 1;
        monster[i].y = rand() % 19 + 1;
    }

    //맵 초기화
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            if ((i == 0) || (j == 0) || (i == 11) || (j == 21))
                consoleGameMap[i][j] = ch.wall;
            else if ((i < 4))
                consoleGameMap[i][j] = ch.forest;
            else if ((i < 7))
                consoleGameMap[i][j] = ch.swamp;
            else
                consoleGameMap[i][j] = ch.plain;
        }
    }

    consoleGameMap[exit.x][exit.y] = ch.exit;

    while (1) {
        turn++;

        //맵 출력
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 22; j++)
            {
                if (i == player.x && j == player.y)
                    cout << ch.player;
                else if (i == monster[0].x && j == monster[0].y)
                    cout << ch.monster;
                else if (i == monster[1].x && j == monster[1].y)
                    cout << ch.monster;
                else
                    cout << consoleGameMap[i][j];

                if (i == player.x && j == player.y)
                {
                    switch (consoleGameMap[i][j])
                    {
                    case '^' :
                        playerHP += mapArea.forest;
                        break;
                    case '_' :
                        playerHP += mapArea.swamp;
                        break;
                    case ',' :
                        playerHP += mapArea.plain;
                        break;
                    }
                }
                    
            }
            cout << endl;
        }

        cout << "HP : " << playerHP << endl;

        //탈출조건 & 게임오버 조건
        if ((player.x == exit.x) && (player.y == exit.y))
        {
            cout << "<<탈출에 성공하셨습니다.>>" << endl;
            break;
        }
        else if (playerHP == 0)
        {
            cout << "<< YOU DIED >>" << endl;
            break;
        }
        else if ((player.x == monster[0].x) && (player.y == monster[0].y))
        {
            cout << "<< YOU DIED >>" << endl;
            break;
        }
        else if ((player.x == monster[1].x) && (player.y == monster[1].y))
        {
            cout << "<< YOU DIED >>" << endl;
            break;
        }

        inputUserKey = _getch();

        //몬스터 이동
        if (turn % 2 == 0)
        {
            for (int i = 0; i < 2; i++)
            {
                if (player.x != monster[i].x)
                {
                    if (player.x > monster[i].x)
                        monster[i].x++;
                    else
                        monster[i].x--;
                }
                else if (player.y != monster[i].y)
                {
                    if (player.y > monster[i].y)
                        monster[i].y++;
                    else
                        monster[i].y--;
                }
            }
        }

        //움직이게
        switch (inputUserKey)
        {
        case 'w':
        case 'W':
            player.x -= 1;
            break;
        case 'a':
        case 'A':
            player.y -= 1;
            break;
        case 's':
        case 'S':
            player.x += 1;
            break;
        case 'd':
        case 'D':
            player.y += 1;
            break;
        }

        system("cls");
    }


#pragma endregion
}
