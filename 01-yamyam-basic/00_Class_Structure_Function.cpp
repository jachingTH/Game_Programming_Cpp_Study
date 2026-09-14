#include <iostream>
#include<cstring>

struct People
{
public:
    int age; 
    int height;
//private:
    char name[256];
};
//사용자 정의 자료형

class cPeople
{
    //접근제한 지정자
public:
    void Addage (/* const cPeople* const this */) //const
    {
        /* (*this) */age += 1;

        /* this; */
    }

    int age;
    int height;

private:
    char name[256];
};

void Addage(People& p1)
{
    p1.age += 1;
}

//구조체와 클래스의 차이
// 구조체 디폴트 = public
// 클래스 디폴트 = private

int main()
{
    //자료구조
    // 구조체, 클래스 차이점
    People taehyun;

    taehyun.age = 24;
    taehyun.height = 120;
    strcpy(/* &taehyun.name[0] */taehyun.name, "KTH");

    Addage(taehyun);

    cPeople taehyun2;

    int num2 = 100;

    int* const p = &num2;
    //초기화된 주소를 바꿀 수 없다.

     const int* p2 = &num2;
     //값을 바꿀 수 없다.

     const int* const pp = &num2;
     //값, 주소를 바꿀 수 없다.

    return 0;
}