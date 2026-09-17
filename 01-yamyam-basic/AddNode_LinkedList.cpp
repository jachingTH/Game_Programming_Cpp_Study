#include <iostream>

struct Node
{
    int data;
    Node *next;
};

Node* head = nullptr;
Node *tail = nullptr;

void AddNode(int data)
{
    if (head == nullptr)
    {
        // 헤드에 추가
        head = new Node;
        head->data = data;
        head->next = nullptr;

        tail = head;
    }
    else
    {
        // 제일 마지막 노드 뒤에 추가
        tail->next = new Node;
        tail->next->next = nullptr;

        tail = tail->next;
    }
}

int main()
{
        // 자료구조
        //  Data Structure
        // 여러 자료들을 저장하는 방법

        // 대표적인 자료구조 : 배열, 링크드리스트, 큐, 스택, 그래프, 트리

        // 노드
        // 데이터를 저장하는 최도 단위

        // 링크드리스트
        // 한 노드가 노드를 가리키고 있는 자료구조

        // 배열 vs 링크드 리스트
        // 배열 단점
        // 유연성 X, 배열 크기 변환시 연산 많아짐

        // 링크드 리스트는 실행도충 데이터 변경 O, 큰 부담 X

    // 동적 할당
    // 프로그램 실행 중간(runtime)에 사용자(프로그래머 X, 유저)가 직접
    // 메모리 할당을 결정하게 해서 필요한 만큼 런타임중에 메모리를 할당한다.

        // 지역 변수
        // 스택 영역에 할당
        // 해당 지역 벗어나면 자동 해제
        // Node node;

        /* int *p;
        p = new int;
        new Node; */

        // 동적 할당을 하게 되면 메모리상 힙 영역에 할당
        // 메모리에서 사라지지 않음
        // 메모리 해제 명령어 실행 전까지 존재

        // new 연산자 동적 할당
        // => 해당 변수 크기만큼 힙 영역에 할당 + 할당된 곳의 시작 주소 반환

        /* *p = 3;

        delete p;

        Node* pp = new Node;
        pp->data = 3;

        delete pp; */

        AddNode(3);
        AddNode(4);
        AddNode(5);

        return 0;
}