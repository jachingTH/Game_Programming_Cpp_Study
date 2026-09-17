# Yamyam Basic — C++ 자료구조 및 기초 알고리즘

[전체 로드맵](../ROADMAP.md) · [학습 목차](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/00_수강목록.md) · [학습 기록](../STUDY_LOG.md)

학습 범위: OOP, Hash, 재귀, Linked List, Vector, Stack, Queue, Tree, Graph, DFS/BFS. 현재 기록은 OOP 기초와 배열·문자열 기초입니다.

## 주제와 코드 바로 찾기

| 주제 | 설명 | 실제 코드 |
| --- | --- | --- |
| 멀티패러다임 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-multi-paradigm-guide.md) | 아래 클래스 실습의 독립 함수·멤버 함수 비교 |
| 클래스·구조체 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-class-struct-guide.md) | [소스](00_Class_Structure_Function.cpp) |
| 생성자·소멸자 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-constructor-destructor-guide.md) | [소스](00_Class_constructor_destructor.cpp) |
| 연산자 오버로딩 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-operator-overloading-guide.md) | [소스](01_Calculation_Overloading.cpp) |
| MyString | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-string-class-guide.md) | [작성 중](01_Making_String_Class.cpp) |
| 마스킹·인덱스 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-masking-flag-index-guide.md) | [작성 중](02_Masking_Flag_Count_Index_ETC.cpp) |
| DAT·해시·패턴 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-dat-hashtable-guide.md) | [실습 초안](03_DAT.cpp) |
| cstring | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-cstring-library-guide.md) | [빈 코드 파일](Cpp_cstring_Library.cpp) |
| 방향·포인터·2D 패턴 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-coding-techniques-direct-pointers-patterns-guide.md) | [실습 초안](CodingStyle_InCpp_Direct_doublePtr_searchPattern2DArr.cpp) |
| 3차원 배열·재귀 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-recursion-guide.md) | [실습 초안](Recursive_function.cpp) |
| 구조체 포인터·노드 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-struct-pointer-linked-list-guide.md) | [소스](StructPointer_Address.cpp) |
| AddNode·연결 리스트 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-addnode-linked-list-guide.md) | [실습 초안](AddNode_LinkedList.cpp) |

## 실습 진행 상태

- 클래스: 참조 전달, 멤버 함수, 포인터 const 예제가 있습니다. 멤버 함수 호출 검증은 미기록입니다.
- 생성자: 기본·인자 생성자와 소멸자가 있습니다. 호출 순서 관찰은 미기록입니다.
- 연산자: operator+가 Vector2를 반환하도록 구현되었습니다. 결과 출력·원본 보존 검증은 미기록입니다.
- MyString: 생성자와 `size`, `operator+=` 초안을 작성했습니다. `len` 초기화, 반환형, 버퍼 경계는 확인이 필요합니다.
- 마스킹·인덱스: 마스크 선택, 탐색, 문자열 비교 예제가 있습니다. count와 `getSum`의 동작은 확인이 필요합니다.
- DAT: 패턴 탐색·DAT·해시 함수 초안이 추가되었습니다. 현재 문법 오류가 있어 빌드 전 단계입니다.
- 방향·포인터·2D 패턴: 방향 배열·이중 포인터·패턴 비교가 작성되어 있으나 중복 변수 선언으로 빌드 전 단계입니다.
- 재귀·3D 배열: 경로 선택·가지치기·3차원 배열 채우기 초안이 있습니다. 결과 검증은 미기록입니다.
- cstring: 관련 학습 노트는 있으나 코드 파일은 비어 있습니다.
- 구조체 포인터·노드: 주소 연결과 head 접근 코드가 있습니다. 마지막 next 초기화와 순회 검증은 미기록입니다.
- AddNode·연결 리스트: head/tail로 노드를 연결합니다. 두 번째 이후 노드 data 설정과 해제 순회는 미구현입니다.
- 2026-09-14에는 노트 정리와 소스 대조를 수행했습니다. 코드 실행과 테스트는 수행하지 않았습니다.

## 실행 안내

VS Code의 기존 `.vscode/tasks.json`은 `C:\msys64\mingw64\bin\g++.exe`로 현재 파일을 빌드하도록 설정되어 있습니다. 실습마다 main이 있으므로 각 cpp를 개별적으로 빌드합니다. 설정에 C++ 표준 옵션은 명시되어 있지 않습니다. 컴파일러 설치·실행 여부는 이번 정리에서 재검증하지 않았습니다.

실습 파일을 열고 빌드 작업을 실행한 뒤, 생성된 실행 파일 또는 디버거로 결과를 확인합니다. 현재 코드에는 결과 출력이 없거나 구현 중인 함수가 있으므로, 조용히 종료되어도 기능 검증 완료를 의미하지 않습니다.

## 다음 작업

1. 클래스 실습에서 초기화한 객체로 멤버 함수를 호출해 보기.
2. 생성자·소멸자의 값과 호출 순서 관찰하기.
3. operator+의 결과와 원본 보존을 확인하기.
4. MyString의 길이·버퍼 경계·+= 동작을 정하고 확인하기.
5. count·getSum 계약을 정하고 마스킹·문자열 비교 결과를 확인하기.
6. DAT 패턴 탐색의 경계와 버킷 순회 조건을 완성한 뒤 확인하기.
7. 재귀 경로 수와 가지치기 결과, 3차원 배열 인덱스를 확인하기.
8. AddNode 3회 뒤 모든 data를 순회 출력하고 마지막 next를 확인하기.
9. 확인한 결과만 STUDY_LOG와 해당 정리 문서에 기록하기.

CodingStyle_InCpp_Direct_doublePtr_searchPattern2DArr.cpp는 관련 Obsidian 노트가 아직 없어 목차에 포함하지 않았습니다. 내용이 정리되면 별도 주제로 연결합니다.
