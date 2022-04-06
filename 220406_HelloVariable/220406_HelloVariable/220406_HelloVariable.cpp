/*
    변수
    1)  이름  2)  크기  3)  값   4)  메모리주소
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //float testNum1 = 2.8f;
    ///*
    //    float - floating point 부동소수점 약자
    //    f로 float형이라고 표기. 쓰지 않으면 경고가 뜸
    //    f를 붙이지 않으면 기본적으로 double형으로 취급
    //*/
    ///*
    //    1)    이름 : testNum1   2)  크기 : 4byte      3)  값 : 2.8     4)  메모리주소 : 000000C8FBAFF894
    //    16진수 16자리로 메모리가 표현됨
    //*/
    //double testNum2 = 2.8;

    //cout << sizeof(testNum1) << endl;

    //cout << &testNum1 << endl;
    //cout << testNum2 << endl;
    /*
        실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일 축하메시지를 출력하는 프로그램을 만들어보자.

        예시)
        상대방 이름을 입력하세요.
        _권희영

        본인의 이름을 입력하세요
        _전지윤

        상대방 나이를 입력하세요.
        _24

        전지윤 : 권희영님 24살 생일을 축하합니다.
    */
    /*
        변수가 필요함
        데이터타입 변수명;
    */

    string your_name;
    cout << "상대방 이름을 입력하세요." << endl;
    cin >> your_name;

    string my_name;
    cout << "본인의 이름을 입력하세요." << endl;
    cin >> my_name;

    int your_age;
    cout << "상대방 나이를 입력하세요." << endl;
    cin >> your_age;

    cout << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다." << endl;

    // 내가 짠 코드
    /*string name1, name2;
    int age;

    cout << "system : 상대방 이름을 입력해라.\n>";
    cin >> name1;
    cout << endl;

    cout << "system : 상대방 나이를 입력해라.\n>";
    cin >> age;
    cout << endl;

    cout << "system : 본인의 이름을 입력해라.\n>";
    cin >> name2;
    cout << endl;

    cout << "system : <<<<<<" << name2 << "님이 " << name1 << "님의 " << age << "살 생일을 축하드림.>>>>>>" << endl;*/

}