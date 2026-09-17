# AddNode, 동적 할당과 연결 리스트 순회

[학습 목차](00_수강목록.md) · [실습 코드](../../../01-yamyam-basic/AddNode_LinkedList.cpp)

## 핵심

연결 리스트의 삽입은 연결을 바꾸는 작업입니다. head가 비어 있으면 새 노드가 head와 tail이 되고, 이후에는 tail의 next에 새 노드를 붙인 뒤 tail을 새 노드로 이동합니다.

| 작업 | head만 유지 | head와 tail 유지 |
| --- | --- | --- |
| 마지막 노드 찾기 | 매 삽입마다 순회: O(N) | tail 사용: O(1) |
| 첫 노드 추가 | head 설정 | head와 tail 모두 설정 |
| 이후 추가 | 마지막까지 이동 후 연결 | tail->next 연결 후 tail 이동 |

동적 할당한 노드는 소유자가 명확해야 하며, 리스트를 끝낼 때 모든 노드를 해제해야 합니다. 학습용 직접 구현에서는 delete 순회를 연습할 수 있지만, 실무에서는 RAII 컨테이너와 스마트 포인터를 우선 검토합니다.

## 현재 코드 상태

`AddNode_LinkedList.cpp`에는 head와 tail, 첫 노드 추가, 이후 노드 연결이 있습니다.

| 항목 | 상태 |
| --- | --- |
| 첫 AddNode | data 설정, next를 nullptr로 설정 |
| 두 번째 이후 AddNode | 새 노드를 연결하고 tail 이동 |
| 두 번째 이후 data | 함수 인자 data를 새 노드에 대입하지 않음 |
| 출력·순회 | 없음 |
| 해제 | 없음. 현재 프로세스 종료 전에는 직접 해제하지 않음 |

즉 `AddNode(3), AddNode(4), AddNode(5)` 후 첫 노드만 data가 3이고 나머지 노드 값은 지정되지 않은 상태입니다. 문서에서는 코드를 바꾸지 않았습니다.

## 순회와 해제의 기본 형태

순회는 head를 지키고 임시 포인터를 이동합니다. 해제는 다음 노드 주소를 먼저 보관한 뒤 현재 노드를 delete해야 합니다.

```cpp
Node* current = head;
while (current != nullptr) {
    Node* next = current->next;
    delete current;
    current = next;
}
head = nullptr;
tail = nullptr;
```

이 예제는 학습 목적의 직접 관리 방식입니다. delete 후에는 해당 포인터를 역참조하지 않습니다.

## 다음 확인 항목

- [ ] 모든 새 노드에 data가 저장되는지 확인
- [ ] AddNode 3회 후 3, 4, 5 순회 출력
- [ ] head가 첫 노드를 계속 가리키는지 확인
- [ ] 해제 순회를 추가해 동적 노드를 모두 반환

관련: [구조체 포인터와 노드](cpp-struct-pointer-linked-list-guide.md) · [DAT·해시·패턴](cpp-dat-hashtable-guide.md).

정리일: 2026-09-17. Obsidian의 AddNode·동적 할당·리스트 순회 노트 2개를 통합 정리했습니다. 코드 실행 결과는 기록되지 않았습니다.