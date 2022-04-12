#include <iostream>
#include <string>

using namespace std;

//주석 : 실행(컴파일) 되지 않고 설명만을 위해서 사용되는 문법
/*
    주
    석
*/

/*
    C++ 문법 사용할 때 주의해야 할 점
    1. 대/소문자를 구분해야 한다.
    2. 띄어쓰기를 통해 요소를 구분한다.
    3. 실행문의 마무리는 세미콜론(;)로 한다.

    [변수] : 변할 수 있는 수, 변하는 수. 데이터를 저장할 메모리공간을 할당받는다.
    데이터타입 변수명;
    -초기화
    데이터타입 변수명 = 10;
    데이터타입 변수명 = 'a';
    데이터타입 변수명 = "Hello";

    [데이터타입]
    1. 정수형 (... , -3, -2, -1, 0, 1, 2, ...)
        int
        short
        long
        long long
        __int8
        __int16
        __int32
        __int64 ...
    2. 실수형
        float
        double
        long double
    3. 문자형
        char
    4. 문자열
        string

    [변수명(표기법)]
    1. 헝가리안 표기법
        : 변수명 가장 앞에 데이터타입 약자를 접두어로 붙인다.
        int nMaxCount = 10;
    2. 카멜 표기법
        int maxCount = 10;
    3. 파스칼 표기법
        int MaxCount = 10;

    int token_max_count = 10;

    -변수명만 보고도 이게 어떻게 쓰려는 변수다, 알 수 있도록 해야함.

    1. 대소문자를 구분한다.
    2. 알파벳, 숫자, _(언더바)만 사용한다.
        2-1. 숫자는 가장 앞에 올 수 없다.

    [변수의 4가지 속성]
    1) 이름 : input_key  2) 크기 : 4byte  3) 값 : 10   4) 메모리주소 : 000000D4BACFFA24

    [연산자]
    데이터를 가공(연산)하는 모든 명령에 필요한 것들
    1) 어떤 종류의 연산자인가
    2) 우선순위 : 어떤 순서로 연산이 되는가
    3) 결합순서 : 좌측부터 연산하는가, 우측부터 연산하는가

    1. 사칙연산 : 산술연산자 (좌측부터 연산된다.)
        + : 더하기
        - : 빼기
        * : 곱하기
        / : 나누기     11 / 3 -> 3 (몫)
        % : 나머지     11 % 3 -> 2 (나머지)

        * / %   >   + -
    2. 대입연산자 (우측부터 연산된다.)
        = : 왼쪽 항에 오른쪽 항의 값을 대입(복사)한다.
    3. 복합대입연산자
        += : a += b;    -> a = a + b;
        -= : a -= b;    -> a = a - b;
        *= : a *= b;    -> a = a * b;
        /= : a /= b;    -> a = a / b; (b == 0, 런타임에러 발생)
        %= : a %= b;    -> a = a % b; (데이터 타입이 정수형이 아닐 경우)
    4. 증감연산자
        특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용하는 연산자
        변수명 앞이나 뒤에 ++ / -- 를 붙여서 사용
    5. 관계연산자
        두 항의 값을 비교한 결과가 참(1, true) 또는 거짓(0, false)으로 반환되는 연산자
        a < b
        a > b
        a <= b
        a >= b
        a == b
        a != b
    6. 논리연산자
        왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산한 후 두 값을 비교해 참과 거짓을 반환
        && : 논리곱(AND 연산자)
            a && b  - a의 결과값이 참이고 b의 결과값이 참이면 1을 반환
        || : 논리합(OR 연산자)
            a || b  - ad의 결과값이 참이거나 b의 결과값이 참이면 1을 반환
        ! : 논리부정(NOT 연산자)
            !a      - a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환
        
    7. 삼항연산자(특정 조건에 따라 실행이 될 수도, 안 될 수도 있다.)
        a ? b : c;  - a의 결과값이 참이면 b실행문이 동작, 거짓이면 c 실행문이 동작


    [난수(랜덤값)]
    rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환됨(정수형값)
    함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해짐
    기본적으로 seed는 1로 세팅되어있음
    프로그램을 시작할 때마다 seed값을 바꿔줘야함
    srand(time(NULL));
*/

/*
    실습1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성
    실습2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성
    실습3. 프로그램을 실행하면 내부적으로 1 ~ 10 사이의 숫자가 정답으로 정해진다. 
        유저가 1 ~ 9 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력
*/

int main()
{   
    srand(time(NULL));  //unsinged int 형식을 매개변수로 받음

    int input_key = 10;

    cout << input_key++ << endl;    //10
    cout << ++input_key << endl;    //12
    cout << input_key-- << endl;    //12
    cout << --input_key << endl;    //10    

    float testFloat1 = 5.4f;
    //float testFloat2 = 5.4;
    char testCharacter = 'a';
    string testString = "Hello";

    //cin >> input_key;
    
    cout << (10 > 5) << endl;   //1
    cout << (10 < 5) << endl;   //0
    cout << ((10 < 5) == 0) << endl;    //1

    cout << !1 << endl;
    cout << -300 << endl;

    (10 > 5) ? cout << "10이 5보다 크다" << endl : cout << "10이 5보다 작다." << endl;

    cout << rand() << endl;


    //실습1
    cout << "------------------------" << endl;
    cout << rand() % 5 + 3 << endl;
    cout << "------------------------" << endl;

    //실습2
    int minNum, maxNum;

    cout << "\n------------------------" << endl;
    cout << "최솟값을 입력하시오.\n: ";
    cin >> minNum;

    cout << "최댓값을 입력하시오.\n: ";
    cin >> maxNum;

    cout << rand() % maxNum + minNum << endl;
    cout << "------------------------" << endl;

    //실습3
    int answer, userAnswer;
    answer = rand() % 10;

    cout << "\n------------------------" << endl;
    cout << "1 ~ 10 사이의 숫자를 입력하시오.\n : ";
    cin >> userAnswer;

    (userAnswer == answer) ? cout << "정답입니다.^^\n" : cout << "틀렸습니다. 분발하세요.\n";
    cout << "------------------------" << endl;

    /*
        1. 스플랜더 룰을 조사
        2. 프로그래밍 한다면 어떤 요소가 있을지, 구조 설계
    */
    //int numberofplayer; //플레이어수 입력받는 변수
    //int nobilitytile = 10;

    ////플레이어 이름
    //string player1 = "aa";
    //string player2 = "bb";
    //string player3 = "cc";
    //string player4 = "dd";

    ////플레이어 명성 포인트
    //int player1famepoint = 0;
    //int player2famepoint = 0;
    //int player3famepoint = 0;
    //int player4famepoint = 0;

    ////토큰
    //int emeraldtoken = 7;
    //int diamondtoken = 7;
    //int sapphiretoken = 7;
    //int onyxtonken = 7;
    //int rubytoken = 7;
    //int goldtoken = 5;

    ////플레이어 토큰
    //int player1emeraldtoken = 0;
    //int player2emeraldtoken = 0;
    //int player3emeraldtoken = 0;
    //int player4emeraldtoken = 0;

    //int player1diamondtoken = 0;
    //int player2diamondtoken = 0;
    //int player3diamondtoken = 0;
    //int player4diamondtoken = 0;

    //int player1sapphiretoken = 0;
    //int player2sapphiretoken = 0;
    //int player3sapphiretoken = 0;
    //int player4sapphiretoken = 0;

    //int player1onyxtonken = 0;
    //int player1onyxtonken = 0;
    //int player1onyxtonken = 0;
    //int player1onyxtonken = 0;

    //int player1rubytoken = 0;
    //int player2rubytoken = 0;
    //int player3rubytoken = 0;
    //int player4rubytoken = 0;

    //int player1goldtoken = 0;
    //int player2goldtoken = 0;
    //int player3goldtoken = 0;
    //int player4goldtoken = 0;

    ////레벨 카드(개발 카드)
    //int level1card = 40;
    //int level2card = 30;
    //int level3card = 20;

    ////플레이어 귀족타일수
    //int palyer1nobilitytile = 0;
    //int palyer2nobilitytile = 0;
    //int palyer3nobilitytile = 0;
    //int palyer4nobilitytile = 0;

    //int playerturn; //플레이어 차례 지정

    //int deckx;
    //int decky;
    
    
}