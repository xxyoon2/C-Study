#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    rand();     //0 ~ 32767 % 5

    //cout << sizeof(rand()) << endl; // rand() 반환 값의 크기는 4byte이다.

    /*
        실습1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성
        실습2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성
        실습3. 프로그램을 실행하면 내부적으로 1 ~ 10 사이의 숫자가 정답으로 정해진다.
            유저가 1 ~ 9 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력
    */
#pragma region 실습1
    //실습1
    //int rand_num = 3 + rand() % 5;

#pragma endregion
#pragma region 실습2
    /*
    //입력
    int input_min_number;
    int input_max_number;
    cin >> input_min_number;
    cin >> input_max_number;

    //처리
    rand_num = input_min_number + rand() % (input_max_number - input_min_number + 1);

    //출력
    cout << "실습 2 : " << input_min_number + rand() % (input_max_number - input_min_number + 1) << endl;
    */
#pragma endregion
#pragma region 실습3
    /*
    //입력
    int input_quiz_number;
    //int correct_number = (rand() % 9 - 1 + 1) + 1;

    //cout << correct_number << endl;
    cin >> input_quiz_number;

    //처리
    int correct_number = (rand() % 9 - 1 + 1) + 1;

    cout << correct_number << endl;
    //출력 : true, false
    (input_quiz_number == correct_number) ? cout << "true" << endl : cout << "false" << endl;
    */
#pragma endregion

    /*
        [제어문]     데이터(타입)/연산자/<제어구조>

        1. 조건문 : 특정 조건에 따라서 실행문을 실행할 지 안 할 지 제어 : if / switch
            1) if문
            if (조건식1)
            {
                실행문1;
            }
            else if (조건식2)
            {
                실행문2
            }
            else
            {
                실행문3;
            }
            조건이 참이라면 실행. 위에서 아래로 조건이 맞는지 비교.

            2) switch문
            switch (정수형 변수)
            {
                case 정수1:
                    실행문1;
                    break;
                case 정수2:
                    실행문2;
                    break;
                default:    // 해당하는 정수값이 없을 때
                    실행문3;
                    break;
            }
        2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : while / for
            1) while문
            while (조건식)
            {
                실행문;
                조건식을 바꾸는 실행문;       // while문을 중단시키는 첫번째 방법

                if (조건식)
                {
                    break;                   // while문을 중단시키는 두번째 방법
                }
            }
            조건식이 참이면 실행문이 반복적으로 계속 실행됨.

            2) do-while문
            do
            {
                실행문;
            }
            while (조건식);
            while문은 한 번도 실행되지 않을 수 있지만 do-while문은 무조건 한 번은 실행된다.

            3) for문
            for((1)초기식; (2)조건식; (3)증감식)
            {
                (4)실행문;
            }
            (1) -> (2) -> (4) -> (3) -> (2) -> (4) -> (3) -> ...
            조건식의 결과값이 false(0)가 나올때까지 반복
    */
#pragma region if문_실습1
    /*
        조건문 실습1)
        정수를 하나 입력 받아서 입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력
        10 이하 9 초과이면 "9보다 큽니다." 출력
        9 이하 6 초과이면 "6보다 큽니다." 출력
        그 이외에는 "6보다 작거나 같습니다." 출력
    */

    /*
    //입력
    int inputNum;

    cout << "숫자를 입력하세요.\n : ";
    cin >> inputNum;

    //처리

    //출력
    if (inputNum > 10)
    {
        cout << "입력된 숫자가 10보다 큽니다." << endl;
    }
    else if (10 >= inputNum && inputNum > 9)
    {
        cout << "입력된 숫자가 9보다 큽니다." << endl;
    }
    else if (inputNum > 6)
    {
        cout << "입력된 숫자가 6보다 큽니다." << endl;
    }
    else
    {
        cout << "6보다 작거나 같습니다." << endl;
    }
    */
#pragma endregion
#pragma region switch문_실습2
    /*
        조건문 실습2)
        당신의 고향은 어디입니까?
        1. 서울   2. 양평   3. 광주   4. 대전   5. 제주도

        _1
        안녕하세요. 당신의 고향은 서울이군요.

        5개 중에 선택해주세요.
    */
    /*
        int chooseNum;

        cout << "당신의 고향은 어디입니까?" << endl;
        cout << "1. 서울   2. 양평   3. 광주   4. 대전   5. 제주도" << endl;;
        cin >> chooseNum;

        switch (chooseNum)
        {
            case 1:
                cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
                break;
            case 2:
                cout << "안녕하세요. 당신의 고향은 양평이군요" << endl;
                break;
            case 3:
                cout << "안녕하세요. 당신의 고향은 광주이군요" << endl;
                break;
            case 4:
                cout << "안녕하세요. 당신의 고향은 대전이군요" << endl;
                break;
            case 5:
                cout << "안녕하세요. 당신의 고향은 제주도이군요" << endl;
                break;
            default:
                cout << "1 ~ 5번 중 골라주세요." << endl;
                break;
        }

        if (chooseNum == 1)
        {
            cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
        }
        else if (chooseNum == 2)
        {
            cout << "안녕하세요. 당신의 고향은 양평이군요" << endl;
        }
        else if (chooseNum == 3)
        {
            cout << "안녕하세요. 당신의 고향은 광주이군요" << endl;
        }
        else if (chooseNum == 4)
        {
            cout << "안녕하세요. 당신의 고향은 대전이군요" << endl;

        }
        else if (chooseNum == 5)
        {
            cout << "안녕하세요. 당신의 고향은 제주도이군요" << endl;
        }
        else
        {
            cout << "1 ~ 5번 중 골라주세요." << endl;
        }
    */
#pragma endregion
#pragma region while문_실습3


    /*cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;

    int repeat_count = 0;*/
    /*
    while (repeat_count < 5)   // 조건식에 1을 넣고 중단시키는 실행문을 넣지 않으면 한정된 컴퓨터 메모리를 다 사용할 때까지 반복하다가 강제종료됨
    {
        cout << repeat_count + 1 << ". Hello World" << endl;

        repeat_count++;
    }
    */
    /*
    while (1)
    {
        cout << repeat_count + 1 << ". Hello World" << endl;

        repeat_count++;

        if (repeat_count > 5)
        {
            break;
        }
    }
    */
    /*
    do
    {
        cout << repeat_count + 1 << ". Hello World" << endl;
        repeat_count++;
    } while (repeat_count < 5);
    */
    /*
        반복문 실습1)
        while문을 써서 정답을 맞출 때까지 반복되는 프로그램으로 수정
    */

    int input_quiz_number = 0;
    int correct_number = (rand() % 9) + 1;
    //cout << correct_number << endl;

    /*while (input_quiz_number != correct_number)
    {
        cout << "1 ~ 10 사이의 숫자를 맞춰보시오.\n : ";
        cin >> input_quiz_number;

        if (input_quiz_number != correct_number)
        {
            cout << "틀렸습니다." << endl;
        }
    }

    cout << "정답입니다. 축하드립니다. 뿌이뿌이뿌이~~~";*/
    /*
    while (input_quiz_number != correct_number)
    {
        //int input_quiz_number;
        //입력
        cout << "숫자를 맞춰 보세요 : ";
        cin >> input_quiz_number;

        //출력
        (input_quiz_number == correct_number) ? cout << "true" << endl : cout << "false" << endl;

        if(input_quiz_number == correct_number)
        {
            break;
        }
    }
    */
#pragma endregion
#pragma region for문_실습4
    /*
        for문 실습1.
        10부터 1까지 차례대로 출력되는 코드를 작성해보자.
        10
        9
        8
        ...
        1

        for문 실습2.
        100미만의 3의 배수를 차례대로 출력되는 코드를 작성해보자.
        3
        6
        9
        12
        15
        ...
        99

        for문 실습3.
        1000미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자.
        1
        2
        4
        8
        ...
        512

    */

    /*
        실습4.
        구구단을 출력해보자.
        
        4_1.
        구구단 2단을 차례대로 출력해 보자.
        2 * 1 = 2
        2 * 2 = 4
        2 * 3 = 6
        ...
        2 * 9 = 18
        
        4_2.
        구구단 2단~9단을 차례대로 출력해 보자.

        2단
        
        3단

        ...

        9단

        4_3. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해 보자.
        2단  3단  4단
        5단  6단  7단
        8단  9단
    */

    /*
    for (int i = 0; i < 5; i++)
    {
        cout << "Hell World :)" << endl;
    }

    //실습1
    for (int i = 10; i > 0; i--)
    {
        cout << i << endl;
    }

    //실습2
    for (int i = 3; i < 100; i += 3)
    {
        cout << i << endl;
    }

    //실습3
    for (int i = 1; i < 1000; i *= 2)
    {
        cout << i << endl;
    }
    */

    //실습4
    //4_1
    for (int i = 1; i < 10; i++)
    {
        cout << "2 * " << i << " = " << 2 * i << endl;
    }

    //4_2
    //for (int i = 2; i < 10; i++)
    //{
    //    for (int j = 1; j < 10; j++)
    //        cout << i << " * " << j << " = " << i * j << endl;

    //    cout << endl;
    //}

    //4_3
    for (int i = 2; i < 10; i += 3)
    {
        for (int j = 1; j < 10; j++) 
        {
            /*cout << (i + (j - 1) % 3) << " * " << j << " = " << (i + (j - 1) % 3) * j << "          ";
            if ((j - 1) % 3 == 2)
            {
                cout << endl;
            }*/

            for (int k = 0; k < 3; k++)
                if (i + k < 10)
                    cout << (i + k) << " * " << j << " = " << (i + k) * j << "          ";

            /*cout << i << " * " << j << " = " << i * j << "          ";
            cout << (i + 1) << " * " << j << " = " << (i + 1) * j << "          ";
            if ((i + 2) != 10)
                cout << (i + 2) << " * " << j << " = " << (i + 2) * j << "          ";*/
            //cout << endl;
        }
        cout << endl;
    }
    

    /*
        별찍기
        1)
        *
        **
        ***
        ****
        *****
        
        2)
               *
              ** 
             *** 
            **** 
           ***** 
           
        3)
        *****
        ****
        ***
        **
        * 
        
        4)
        *****
         ****
          ***
           **
            * 
            
        5)
            *
           ***
          *****
         *******
        *********
        
        6)
        *********
         *******
          *****
           ***
            *
            
        7)
            *
           ***
          *****
         *******
        *********
         *******
          *****
           ***
            *
    */

    //1
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //2
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) >= 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    //3
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) <= 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    //4
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i <= j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    //5
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (((i + j) <= 7) || (i < j))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //6
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if ((j < i) || (i + j) >= 9)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    //7
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (((i + j) < 4) || ((j - i) >= 5) || ((i - j) >= 5) || ((i + j) >= 13))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
#pragma endregion
}