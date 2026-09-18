# 연결 리스트 직접 구현

[학습 목차](00_수강목록.md) · [관련 실습](../../../01-yamyam-basic/MakingLinkedList.cpp) · [템플릿 기초](cpp-template-basics-guide.md) · [AddNode 기초](cpp-addnode-linked-list-guide.md)

## 구조

연결 리스트는 각 노드가 데이터와 이웃 노드의 주소를 보관하는 선형 자료구조입니다. 양방향 리스트라면 이전 노드와 다음 노드를 각각 가리키는 포인터가 필요하며, 컨테이너는 첫 노드(`head`), 마지막 노드(`tail`), 개수(`count`)를 일관되게 관리해야 합니다.

```cpp
template <typename T>
struct Node {
    T data;
    Node* prev;
    Node* next;
};
```

| 연산 | head·tail 유지 시 핵심 | 시간 복잡도 |
| --- | --- | --- |
| `push_back` | 이전 tail의 next와 새 노드의 prev를 연결 후 tail 이동 | O(1) |
| `push_front` | 이전 head의 prev와 새 노드의 next를 연결 후 head 이동 | O(1) |
| 전체 순회 | 별도 current 포인터를 다음 노드로 이동 | O(N) |
| 소멸 | next를 먼저 저장한 뒤 현재 노드를 delete | O(N) |

## `std::list`와 직접 구현

직접 구현은 포인터 연결과 객체 수명을 배우는 데 유용합니다. 실제 사용에서는 요구가 맞으면 표준 컨테이너를 우선 고려합니다. `std::list`는 양방향 연결 리스트이지만, 임의 접근이 O(1)이 아니며 노드별 할당과 캐시 지역성 비용도 함께 고려해야 합니다.

## 현재 실습 코드 상태

`MakingLinkedList.cpp`는 `ya::list<T>`와 `std::list<int>` 사용 예제를 함께 둔 초안입니다.

| 항목 | 상태 |
| --- | --- |
| 생성자 | head·tail을 nullptr로 초기화 |
| 노드 | `data`, `back` 하나만 선언되어 있어 양방향 연결에 필요한 두 방향 연결이 없음 |
| 첫 `push_back` | 새 노드를 head와 tail로 설정 |
| 이후 `push_back` | 새 노드를 tail에 대입한 뒤 `tail = tail->back`으로 nullptr가 됨. 기존 tail과 새 노드가 연결되지 않음 |
| 소멸자 | 비어 있어 동적 노드를 해제하지 않음 |
| 실행 결과 | 미기록 |

따라서 현재 구현은 노드가 이어진 리스트를 만들지 못하고, 여러 번 추가하면 할당된 노드를 잃어버릴 수 있습니다. 이 문서는 상태를 기록한 것이며 소스 코드는 변경하지 않았습니다.

## 안전한 소멸 흐름

직접 소유한 단방향 노드 연결을 해제할 때는 현재 노드를 지우기 전에 다음 주소를 보관합니다.

```cpp
for (Node* current = head; current != nullptr; ) {
    Node* next = current->next;
    delete current;
    current = next;
}
head = nullptr;
tail = nullptr;
```

## 다음 확인 항목

- [ ] 노드에 이전·다음 연결이 모두 필요한지 먼저 결정
- [ ] `push_back` 3회 뒤 head부터 모든 값을 순회 출력
- [ ] tail이 마지막 노드를 가리키는지 확인
- [ ] 소멸자에서 모든 동적 노드를 한 번씩 해제

정리일: 2026-09-18. 원본: Obsidian Vault의 `cpp-linked-list-implementation-guide.md`. 코드 실행 결과는 기록되지 않았습니다.