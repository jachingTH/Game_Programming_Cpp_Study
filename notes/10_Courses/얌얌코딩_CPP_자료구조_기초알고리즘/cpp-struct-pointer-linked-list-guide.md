# 구조체 포인터와 연결 리스트 노드

[학습 목차](00_수강목록.md) · [주소·노드 실습](../../../01-yamyam-basic/StructPointer_Address.cpp)

## 구조체 포인터

구조체 객체의 주소를 `Vector2*`처럼 보관하면 `(*pointer).member` 또는 `pointer->member`로 멤버에 접근합니다. `->`는 포인터를 통한 멤버 접근 표기입니다.

| 표현 | 의미 |
| --- | --- |
| `&value` | value의 주소 |
| `*pointer` | pointer가 가리키는 객체 |
| `(*pointer).x` | 역참조 후 x 멤버 접근 |
| `pointer->x` | 위 표현의 간결한 표기 |

주소를 `unsigned int`에 저장하는 것은 64비트 환경에서 포인터 크기와 맞지 않을 수 있으므로 주소는 포인터 타입으로 유지합니다. 주소를 정수로 다뤄야 하는 특별한 경우에는 `std::uintptr_t`처럼 목적에 맞는 타입을 검토합니다.

## 노드 연결

연결 리스트의 노드는 데이터와 다음 노드를 가리키는 포인터를 가집니다.

```cpp
struct Node {
    int data;
    Node* next;
};
```

head는 첫 노드를 가리키고, 마지막 노드의 `next`는 `nullptr`입니다. 순회는 head를 바꾸지 않고 별도 포인터를 이동합니다.

```cpp
for (Node* current = head; current != nullptr; current = current->next) {
    // current->data 사용
}
```

## 현재 실습 코드 상태

`StructPointer_Address.cpp`에는 `n1 → n2 → n3` 연결과 `head`를 통한 데이터 접근이 있습니다. 다만 `n3.next`를 `nullptr`로 초기화하지 않았으므로 이후 일반적인 순회를 추가하려면 먼저 끝 표식을 넣어야 합니다. 현재는 세 노드의 data를 직접 접근할 뿐, 전체 순회를 실행하지 않습니다.

## 다음 확인 항목

- [ ] n3.next를 nullptr로 설정하고 current 포인터로 1, 2, 3 출력
- [ ] head는 유지한 채 current만 이동하는지 확인
- [ ] `->`와 `(*p).member`의 결과 비교
- [ ] 포인터 주소를 정수에 저장하지 않고 포인터 타입으로 유지

관련: [동적 할당과 AddNode](cpp-addnode-linked-list-guide.md) · [클래스·구조체](cpp-class-struct-guide.md).

정리일: 2026-09-17. Obsidian의 구조체 포인터·노드 연결 노트 2개를 통합 정리했습니다.