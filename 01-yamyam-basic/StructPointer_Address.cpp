#include <iostream>

int main()
{
    //포인터 복습

    //숫자 저장 -> int
    //글자 저장 -> char
    //주소값 저장 = 포인터 타입

    unsigned int addressNumber = 0;
    //주소 = 숫자, 따라서 int에 저장해도 괜찮음.

    int a = 0;
    addressNumber = (unsigned int)&a;

    //포인터 변수에 * 
    // => 해당 주소에 위치(변수)로 이동할 수 있다 or 가리킨다 의미

    //구조체 포인터 선언

    struct Vector2
    {  
        int x;
        int y;
    };

    Vector2 p1;

    Vector2 *vp = &p1;

    (*vp).x = 100;
    (*vp).y = 100;

    // *(vp.x) = 200;
    // . 연산자가 * 연산자보다 우선순위 높음
    // 제대로 구조체 변수에 접근 X

    // -> 포인터 연산자
    (*vp).x = 100;
    vp->x = 100;

    int hp = 100;
    int mp = 100;

    // 추가 확장 편리
    // 유지보수 편리

    struct Status
    {
        int hp;
        int mp;
    };

    Status stat;
    stat.hp = 100;
    stat.mp = 100;  

    struct Node
    {
        int data;
        Node *next;
    };

    Node* head;
    Node n1;
    Node n2;
    Node n3;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    std::cout << head->data;
    std::cout << head->next ->data;
    std::cout << head->next->next->data;

    return 0;
}