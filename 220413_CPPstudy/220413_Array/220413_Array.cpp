#include <iostream>
#include <string>
#include <conio.h>  //_getch();

using namespace std;

/*
    [boolean타입]
     : true / false 를 나타내고 싶을 때 쓰는 타입
    bool is_alive = false;

    [배열 (자료구조)]
     : 같은 데이터타입의 여러 변수를 하나의 묶음으로 나타낸 것
     배열의 데이터타입에 대한 동일한 크기로 메모리상에 연속된 공간이 할당 됨
     배열명이 메모리 시작 주소이다.

    [2차원 배열 및 다차원 배열]
     : 배열이 (개념적으로) 2중으로, 다중으로 구성되어 있는 것.
     1차원 배열 : int student_nums[5];             //5개의 int
       -> 5명의 학생이 있다.
     2차원 배열 : int student_nums[3][10];         //15개의 int
       -> 3개 반에 각각 5명의 학생이 있다. 
     3차원 배열 : int student_nums[4][3][5];       // 60개의 int
       -> 4개 학년에 각각 3개 반이 존재, 각 반에 5명의 학생이 있다.

    [(엔터 없이) 문자 하나를 입력받는 방법]
    _getch();
    입력받은 key의 아스키코드값을 반환

    [(데이터)형변환] : 데이터타입을 변환한다.
    -묵시적 형변환 : 알아서 자동으로 형변환이 되는 것.
    -명시적 형변환 : 문법을 써서 강제적으로 형변환 시키는 것
*/

int main()
{
    //int input_key = _getch();
    //cout << input_key << endl;
    //char input_key_char = _getch();
    //cout << (int)input_key_char << endl;    //출력하는 시점에서 강제적으로 형변환을 시킨다

    //float test_float = 5.4f; //(float)5.4;

    //int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 12 };

    ///*cout << nums << endl;
    //cout << &(nums[1]) << endl;
    //cout << &(nums[2]) << endl;
    //cout << &(nums[3]) << endl;*/
    ////cout << nums[10] << endl;   //허용되지 메모리에 접근했기 때문에 문법적으로는 이상 없으나 에러가 발생함

    ///*for (int i = 0; i < 10; i++)
    //{
    //    cout << &(nums[i]) << endl;
    //}*/

    //int student_nums[3][5] = { { 1, 2, 3, 4, 5 },
    //                           { 6, 7, 8, 9, 10 },
    //                           { 11, 12, 13, 14, 15 } };

    //// 순서대로 출력하는 코드
    //cout << student_nums[0][0] << endl;
    //cout << &(student_nums[0][0]) << endl;

    ////cout << student_nums[0][6] << endl; // [1][1]
    ////cout << student_nums[0][5] << endl; // [1][0]


    //for (int i = 0; i < 3; i++)
    //{

    //    for (int j = 0; j < 5; j++)
    //    {
    //        cout << student_nums[i][j] << endl;
    //    }

    //}

#pragma region 실습1
    /*
        실습1. string형 배열변수 5개짜리를 선언하고
        반복문을 통해 학생의 이름을 입력받는다.

        입력을 다 받고나서 1 ~ 5 사이의 값을 입력하면 해당 학생의 이름이 출력 됨

        예시)
            1번째 학생의 이름을 입력하세요 : _
            2번째 학생의 이름을 입력하세요 : _
            3번째 학생의 이름을 입력하세요 : _
            4번째 학생의 이름을 입력하세요 : _
            5번째 학생의 이름을 입력하세요 : _
            
            1 ~ 5 사이의 번호를 입력하세요 : _3
            3번째 학생의 이름은 ...입니다.
    */
   
    /*string students_name[5];
    int chooseNum;

    for (int i = 1; i <= 6; i++)
    {
        if (i == 6)
        {
            cout << "----------------------------------" << endl;
            cout << "1 ~ 5 사이의 번호를 입력하세요 : ";
            cin >> chooseNum;

            cout << chooseNum << "번째 학생의 이름은 " << students_name[chooseNum - 1] << "입니다." << endl;
        }
        else
        {
            cout << i << "번째 학생의 이름을 입력하세요 : ";
            cin >> students_name[i - 1];

        }
    }*/

    /*cout << "1 ~ 5 사이의 번호를 입력하세요 : ";
    cin >> chooseNum;

    for (int i = 0; i < 5; i++)
    {
        if (chooseNum - 1 == i)
            cout << i + 1 << "번째 학생의 이름은 " << students_name[i] << "입니다." << endl;
    }*/
#pragma endregion
#pragma region 실습2
    /*
        실습.
        구구단의 결과를 저장하는 2차원 배열을 하나 선언하고, 
        이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장하고,
        두 수를 입력받아서 적합한 결과값을 출력해보자.

        예시)
            (결과 저장 완료)
            몇 단을 볼까요? : _4
            몇을 곱할가요? : _7

            4 * 7 = 28
    */
    /*int GuGuDan[8][9];
    int GuGu, Dan;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            GuGuDan[i][j] = (i + 2) * (j + 1);
        }
    }

    cout << "[ 결과 저장 완료 ]" << endl;
    cout << "몇 단을 볼까요? : ";
    cin >> GuGu;
    cout << "몇을 곱할까요? : ";
    cin >> Dan;

    cout << GuGu << " * " << Dan << " = " << GuGuDan[GuGu - 2][Dan - 1] << endl;*/

    /*int gugu_db[8][9];
    int input_dan;
    int input_su;

    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            gugu_db[j][i] = (j + 2) * (i + 1);
        }
    
    }
    cout << "(결과 저장 완료)" << endl;
    cout << "몇 단을 볼까요? : ";
    cin >> input_dan;
    cout << "몇을 곱할까요? : ";
    cin >> input_su;

    cout << input_dan << " * " << input_su << " = " << gugu_db[input_dan - 2][input_su - 1] << endl;*/

    /*for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            cout << gugu_db[j][i] << "\t";
        }
        cout << endl;

    }*/

#pragma endregion
//다시 해보기
#pragma region 실습3
/*
    실습.
    A ~ Z(65 ~ 90) 키 중 하나를 정답으로 설정.
    유저는 한 개의 키를 입력해서 설정된 값을 맞춤.
    유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
    틀리면 남은 기회를 보여주고 5번 틀리면 정답을 알려주고 게임오버

    + 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 줌

    + 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정(97 ~ 122)
*/

    /*srand(time(NULL));
    
    int quizAnswer = (rand() - 64) % 26 + 64;
    char inputUserAnswer;
    int answerChance = 4;

    cout << "a ~ z 중 하나의 알파벳을 입력하시오. : ";
    cin >> inputUserAnswer;

    cout << (char)quizAnswer << endl;

    for (int chance = 4; chance > 0; chance--)
    {
        if ((int)inputUserAnswer == quizAnswer)
            cout << "WOW ~~정답입니다." << endl;
        else
        {
            cout << "우우 ~~~~~ 틀렸습니다. 기회는 " << chance << "번 남았습니다. 다시 도전해보세요 : ";

            if ((int)inputUserAnswer < quizAnswer)
                cout << "[힌트 : 뒤에 있습니다.]" << endl;
            else
                cout << "[힌트 : 앞에 있습니다.]" << endl;

            answerChance--;
        }

        cin >> inputUserAnswer;
    }
    cout << "당신은 Loser입니다. 정답은" << (char)quizAnswer << "였습니다.";*/
#pragma endregion
#pragma region 실습4
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
    */
    
    srand(time(NULL));

    char consoleGameMap[10][10];
    int playerX = 0, playerY = 0;
    int exitX, exitY;
    char inputUserKey = ' ';

    exitX = rand() % 10;
    exitY = rand() % 10;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
                consoleGameMap[i][j] = '#';
        }
    }
    consoleGameMap[playerX][playerY] = 'O';
    consoleGameMap[exitX][exitY] = 'E';

    while (1) { 
        
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << consoleGameMap[i][j];
            }
            cout << endl;
        }

        if (consoleGameMap[playerX][playerY] == consoleGameMap[exitX][exitY])
            break;

        cout << inputUserKey;
        inputUserKey = _getch();
        consoleGameMap[playerX][playerY] = '#';
        if (inputUserKey == 'w' || inputUserKey == 'W')
        {
            playerX -= 1;
        }
        else if (inputUserKey == 'a' || inputUserKey == 'A')
        {
            playerY -= 1;
        }
        else if (inputUserKey == 's' || inputUserKey == 'S')
        {
            playerX += 1;
        }
        else
        {
            playerY += 1;
        }
        
        consoleGameMap[playerX][playerY] = 'O';

        system("cls");
    }

    cout << "<<탈출에 성공하셨습니다.>>" << endl;

#pragma endregion
}