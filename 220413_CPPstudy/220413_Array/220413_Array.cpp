#include <iostream>
#include <string>

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

*/

int main()
{
    int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 12 };

    /*cout << nums << endl;
    cout << &(nums[1]) << endl;
    cout << &(nums[2]) << endl;
    cout << &(nums[3]) << endl;*/
    //cout << nums[10] << endl;   //허용되지 메모리에 접근했기 때문에 문법적으로는 이상 없으나 에러가 발생함

    /*for (int i = 0; i < 10; i++)
    {
        cout << &(nums[i]) << endl;
    }*/

    int student_nums[3][5] = { { 1, 2, 3, 4, 5 },
                                { 6, 7, 8, 9, 10 },
                                { 11, 12, 13, 14, 15 } };

    // 순서대로 출력하는 코드
    cout << student_nums[0][0] << endl;
    cout << &(student_nums[0][0]) << endl;

    cout << student_nums[0][6] << endl; // [1][1]
    cout << student_nums[0][5] << endl; // [1][0]


    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << student_nums[i][j] << endl;
        }

    }

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
    int GuGuDan[8][9];
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

    cout << GuGu << " * " << Dan << " = " << GuGuDan[GuGu - 2][Dan - 1] << endl;
#pragma endregion
}