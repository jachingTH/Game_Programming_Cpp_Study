#include <iostream>

int map[5][5] =
    {
        1, 3, 1, 5, 1,
        2, 3, 1, 3, 1,
        4, 4, 5, 3, 2,
        1, 2, 4, 3, 2,
        1, 1, 3, 2, 1

};

int pattern[2][2] =
    {
        3, 1,
        3, 1
    };

int isPattern(int dy, int dx)
{
    for (size_t y = 0; y < 2; y++)
    {
        for (size_t x = 0; x < 2; x++)
        {
            if (map[dy + y][dx + x] != pattern[y][x])
            {
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    //방향을 표현하기 위한 코딩 방법

    int arr1[3][3] =
        {
            1, 2, 3,
            4, 5, 6,
            7, 8, 9
        };

    int direct[4][2] =
        {
            -1, 0,
            1, 0,
            0, -1,
            0, 1

        };

    int x = 1;
    int y = 1;

    int sum = 0;
    for (size_t i = 0; i < 4; i++)
    {
        int newX = x + direct[i][1];
        int newY = y + direct[i][0];

        if (newX >= 0 && newX <= 2 && newY >=0 && newY <= 2)
        {
            sum += arr1[newY][newX];
        }
        
    }

    int a = 0;

    // 2중 포인터 변수

    // 포인터 변수 = 주소값을 저장하는 변수 타입 (끝) -> 2중 포인터 -> *() -> *(a+1) -> a[1]
    // int 변수 = 정수형 숫자 저장 변수 타입
    // char 변수 = 문자형 글자 저장 변수 타입

    int a = 100;
    int *p = &a;
    int **pp = &p;

    *(*pp) = 200;


    // 구조체, 클래스를 이용한 배열
    struct ABC
    {
        int a;
        int b;
    };

    ABC abc[3];

    abc[0].a = 100;

    // 패턴찾기 -> 2중 FOR문에서 패턴찾기

    int map[5][5] =
    {
        1, 3, 1, 5, 1,
        2, 3, 1, 3, 1,
        4, 4, 5, 3, 2,
        1, 2, 4, 3, 2,
        1, 1, 3, 2, 1
    };

    for (size_t y = 0; y < 4; y++)
    {
        for (size_t x = 0; x < 4; x++)
        {
            int ret = isPattern(y, x);
            if (ret == 1)
            {
                //존재한다.
                int a = 0;
            }
        }
    }

    return 0;
}