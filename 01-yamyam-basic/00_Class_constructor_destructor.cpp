#include <iostream>

class Test
{
public:
    int a;
    int b;

    //생성자
    //객체를 생성할 때, 자동으로 호출해주는 함수
    // Test()
    // {
    //     a = 0;
    //     b = 0;
    // }

    //member Initialize
    //생성과 동시에 초기화
    Test()
        : a(0), b(0)
    {
    }

    //함수 오버로딩(Overloading) 가능
    Test(int num1, int num2)
        : a(num1), b(num2)
    {
    }

    //소멸자
    //메모리에서 해제될 때 호출되는 함수
    ~Test()
    {
        a = 0;
        b = 0;
    }
};

int main()
{
    Test t1;
    t1.a = 0;
    t1.b = 0;


    Test t2(5, 10);

    return 0;
}