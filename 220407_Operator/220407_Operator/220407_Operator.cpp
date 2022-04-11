#include <iostream>

using namespace std;

int main()
{
    /*
        연산자
        데이터를 가공(연산)하는 모든 명령에 필요한 것들
        1) 어떤 종류의 연산자들이 있는지?
        2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
        3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

        1. 사칙연산 : 산술연산자(좌측부터 연산)
        + : 더하기
        - : 빼기
        * : 곱하기
        / : 나누기     11 / 3 = 3
        % : 나머지     11 % 3 = 2

        우선순위
        *, /, %   >   +, -

        2. 대입연산자(우측부터 연산)
        = : 왼쪽 항에 오른쪽 항의 값을 대입한다.(복사한다)
            대입연산자의 우측에 있는 실행문부터 연산을 함

        3. 복합대입연산자
        += : a += b; => a = a + b;
        -+ : a -= b; => a = a - b;
        *= : a *= b; => a = a * b;
        /= : a /= b; => a = a / b;
        %= : a %= b; -> a = a % b;  (a, b는 정수형타입이어야 한다.)

        4. 증감연산자(대입연산자를 쓰지는 않았지만 값이 변하는 경우)
        특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
        변수의 앞이나 뒤에 ++ 혹은 -- 붙여서 사용한다.
        a++;
        ++a;
        b--;
        --b;

        5. 관계연산자
        두 값을 비교한 결과가 참(1, true, 0빼고 모두 다)인지 거짓(0, false)인지 반환하는 연산자
        < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
        > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
        <= : a <= b : 왼쪽 항의 값이 오른쪽 항의 값보다 작거나 같으면 참을 반환한다.
        >= : a >= b : 왼쪽 항의 값이 오른쪽 항의 값보다 크거나 같으면 참을 반환한다.
        == : a == b : 왼쪽 항의 값과 오른쪽 항의 값이 같을 때, 참을 반환한다.
        != : a != b : 왼쪽 항의 값과 오른쪽 항의 값이 다른 때, 참을 반환한다.
    */

    int left_value = 11 + 3;
    int right_value = 4;    //값으로 0을 넣으면 나눗셈에서 런타임 에러 발생

    cout << "<사칙연산>" << endl;
    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl;

    /*
        사칙연산은 계산해서 값이 나오지만 복합대입연산자는 계산하고 값을 저장하는 것.
        그래서 cout << left_data += right_data << endl; 은 불가능

        하지만 괄호를 치면 그 안에서 연산이 끝나고 값이 나와 가능함
        cout << (left_data += right_data) << endl;

        값이 바뀌는게 싫다면 복합대입연산자를 쓰면 안되고 사칙연산으로 처리해야함.
    */
    int left_data = 7;
    int right_data = 4;

    cout << "\n<복합대입연산>" << endl;

    cout << left_data;
    left_data += right_data;
    cout << " += " << right_data << " => " << left_data << endl;

    cout << left_data;
    left_data -= right_data;
    cout << " -= " << right_data << " => " << left_data << endl;

    cout << left_data;
    left_data *= right_data;
    cout << " *= " << right_data << " => " << left_data << endl;

    cout << left_data;
    left_data /= right_data;
    cout << " /= " << right_data << " => " << left_data << endl;

    cout << left_data;
    left_data %= right_data;
    cout << " %= " << right_data << " => " << left_data << endl;


    cout << "\n<증감연산자>" << endl;
    //증감연산자의 위치에 주의할 것!
    //left_data++;
    cout << left_data++ << endl;    //출력 : 3, 메모리 : 4
    //++left_data;
    cout << ++left_data << endl;    //메모리 : 5, 출력 : 5

    //--left_data;
    cout << --left_data << endl;    //메모리 : 4, 출력 : 4
    //left_data--;
    cout << left_data-- << endl;    //출력 : 4, 메모리 : 3

    /*
        실습
        1) 고객의 나이를 입력받아서 미성년자(19세 이하)이면 true를 출력
        성인이면 false를 출력

        2) 아까 입력 받은 나이를 기준으로, 주민등록증 발급 대상(20살만)이면 true를
        아니면 false를 출력

        3) 아홉수(1의 자리가 9수인지)인지 확인해서 true, false 출력
    */

    int customerAge;

    cout << "-----------------------------------" << endl;
    cout << "\n[고객님의 나이를 입력해주세요.]\n" << "나이 : ";
    cin >> customerAge;

    /*
        std::boolalpha
        boolalpha는 관계연산자의 결과를 True or False로 출력해줌.
        스트림에 저장이 되므로 변경하지 않는 이상 계속 유지됨.
        다시 숫자로 돌리려면 noboolalpha를 출력 전 쓰면 됨.
        그냥 cout << boolalpha; 으로도 설정 가능
    */

    cout << "...................................\n" << endl;
    //cout << boolalpha;
    cout << "미성년자인가 : " << boolalpha << (customerAge <= 19) << endl;
    cout << "주민등록증 발급 대상인가 : " << (customerAge == 20) << endl;
    cout << "아홉수인가 : " << (customerAge % 10 == 9) << endl;
    cout << "\n-----------------------------------" << endl;
}