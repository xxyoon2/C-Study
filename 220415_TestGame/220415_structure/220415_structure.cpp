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

// ���⿡ ����ü ����
struct student
{
    string name;
    int age;
    string homeTown;
    int pride;
    score studentScore;
}wooga;     // �߰�ȣ �����ݷ� ���� student�� ������ �̸� �������� �� �ִ�.
// name, age, korScore, rank��� ���� ������ �������ִ� student ����ü�� �����Ѵ�.


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

int main()  // �츮�� �����ִ� ������ �Լ�
{
    /*
        ���α׷��� ���� : (�޸�, CPU, ��ũ)
        getch()
        1.������
        2.������
        3.��ü������

        [�߻�ȭ]
         : ���� ����(����)�� ����ȭ/��ȣȭ/����ȭ�ؼ� ǥ���� ��
        �ڵ忡�� �߻�ȭ�� �ʿ��� ���� : �ᱹ �ڵ�� ����� ��� ���̱� ������
        C���� �ڵ带 �߻�ȭ�ϴ� ���� ���Ǵ� ���ѻ� : �迭, ����ü, �Լ�
        �ٸ� ����� �ڵ带 �ؼ��ϱ� ���ؾ��ϰ�
        �ٸ� ������ �Բ� �������� �ڵ带 ����� ���ؾ� ��
        - �迭 : �Ӽ��� ������ ���� ���� �����͸� �̸��� ������ ������ ���ӵ� ��ȣ��
            ���� �����Ǿ������� ǥ�������ν� �߻�ȭ��
        - ����ü : ������(�ڷ���)�� ������ ���̴� �����ͳ��� ��� �߻�ȭ
        - �Լ� : ���μ���(�ڵ�)�� Ư�� ��� ������ ��� �߻�ȭ
        �־��� �߻�ȭ - �߻�ȭ �ܰ踦 ��½�Ű�� ����
        ����)
            string a, b, c; // chldkr
            string a[3];    //���� �ͺ��ٴ� �� ����
            string name1, name2, name3; //�ƴϸ� �̷� �����ε���
            string studentName[3];  //���� �ͺ��� �ǵ��� ����ϰ� �巯���� ������ ���� �߻�ȭ
    */
    /*
        [����ü]
         : ������ ��� ���� ����ü
         Ư�� �������� ������ ���� �������� ���� �� ���� ��
         studentName[10], studentAge[10], studentKorScore[10]   ....    //�л��� ~
         �̸�, ����, ��������, ���� ����� '�л�'�̶�� ����ü�� ��� ���

         1. ����ü�� �����ϴ� ��ġ : ����ü�� ���Ǵ� �Լ��� �տ��� ����(�Լ��� �ٱ��� ��)

         2. ����ü ������ ���
         strict ����ü ������
         {
            ����ü �ȿ� �� ���� ������
            (���� ���ÿ� ������ �̸�, ����, ��������, �������� �ֵ��� ����������.)
         };
         ����ü�� ������ �츮�� ���Ӱ� ���� �����͸�

         ����ü �ȿ� �� �� �ִ� ��������
         int/bool/float���� �⺻�ڷ����� ��� �� �� ����
         string���� Ŭ������ ����
         �迭�� ����
         �ռ� ������ ����ü�� ���������� ����

         3. ����ü�� ����� �ʱ�ȭ
         �⺻������ ����ü ������ ������ ��� ������ ����� ����
         int a[3] = {1, 2, 3};
         ����ü ������ ������ ���� ����� ���ÿ� �ʱ�ȭ�� �� �ִ�.

         player.HP = player.HP - monster[n].dmg;
         �ּ� ���� �ڵ带 ����� ���� ������Ե� ��� ������ �������� Ȯ����

    */

#pragma region �ǽ�1
    /*student heeyoung;
    heeyoung.name = "����";
    heeyoung.age = 24;
    heeyoung.homeTown = "����";
    heeyoung.pride = 20000000;*/

    /*
        �ǽ�
        student ����ü�� ����� �ڱ� �ڽ��� ������ �Է��غ���.
    */

    /*student jiyoon;
    jiyoon.name = "������";
    jiyoon.age = 24;
    jiyoon.homeTown = "����";
    jiyoon.pride = 99999999;
    jiyoon.studentScore.eng = 0;
    cout << jiyoon.name << jiyoon.age << jiyoon.homeTown << jiyoon.pride  << jiyoon.studentScore.eng << endl;*/
#pragma endregion

    //score myScore = { 50, 80, 90 }; // �迭�� �ʱ�ȭ�ϵ� ����ü ������ �ʱ�ȭ�� �� �ִ�.
    ////monster a = { "���", 79, 55.12f, true, 100 }; // ex)
    //cout << myScore.kor << endl << myScore.eng << endl << myScore.math << endl;

#pragma region �ǽ�2
    /*
        �ǽ�2 : ���� ������Ʈ
        ����� �� �ִ� ��� ��ҿ� ����ü�� Ȱ���ؼ� �ҽ� �ڵ带 ����
        tile : ���������� �ְ�(��, ��, ����)
        player : �Ƿε�
        �÷��̾ ��� ������ �ִ���, �÷��̾��� �Ƿε��� ������ (�� -1, �� -3, ���� 0)
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

    //���� ��ǥ �������� ����
    for (int i = 0; i < 2; i++)
    {
        monster[i].x = rand() % 9 + 1;
        monster[i].y = rand() % 19 + 1;
    }

    //�� �ʱ�ȭ
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

        //�� ���
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

        //Ż������ & ���ӿ��� ����
        if ((player.x == exit.x) && (player.y == exit.y))
        {
            cout << "<<Ż�⿡ �����ϼ̽��ϴ�.>>" << endl;
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

        //���� �̵�
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

        //�����̰�
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
