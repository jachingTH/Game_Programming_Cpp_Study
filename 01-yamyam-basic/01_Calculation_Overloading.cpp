#include <iostream>

//연산자 오버로딩
//함수 이름 대신 여러가지 기호 사용

struct Vector2
{
    int x;
    int y;

    Vector2(int _x, int _y)
        : x(_x), y(_y)
    {
    }

    Vector2 operator+(Vector2 other)
    {
        return Vector2(x + other.x, y + other.y);
    }
};

int main()
{
    Vector2 v1 = {1, 2};
    Vector2 v2 = {3, 4};

    //Vector2 ret(v1.x + v2.x, v1.y + v2.y);
    Vector2 ret = v1 + v2;
    // == ret v1.operator+(v2);


    return 0;
}