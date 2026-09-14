# Yamyam Basic — C++ 자료구조 및 기초 알고리즘

[전체 로드맵](../ROADMAP.md) · [학습 목차](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/00_수강목록.md) · [학습 기록](../STUDY_LOG.md)

학습 범위: OOP, Hash, 재귀, Linked List, Vector, Stack, Queue, Tree, Graph, DFS/BFS. 현재 기록은 OOP 기초 주제입니다.

## 주제와 코드 바로 찾기

| 주제 | 설명 | 실제 코드 |
| --- | --- | --- |
| 멀티패러다임 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-multi-paradigm-guide.md) | 아래 클래스 실습의 독립 함수·멤버 함수 비교 |
| 클래스·구조체 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-class-struct-guide.md) | [소스](00_Class_Structure_Function.cpp) |
| 생성자·소멸자 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-constructor-destructor-guide.md) | [소스](00_Class_constructor_destructor.cpp) |
| 연산자 오버로딩 | [정리](../notes/10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-operator-overloading-guide.md) | [작성 중](01_Calculation_Overloading.cpp) |

## 실습 진행 상태

- 클래스: 참조 전달, 멤버 함수, 포인터 const 예제가 있습니다. 멤버 함수 호출 검증은 미기록입니다.
- 생성자: 기본·인자 생성자와 소멸자가 있습니다. 호출 순서 관찰은 미기록입니다.
- 연산자: operator+가 void 반환·빈 본문 상태입니다. 노트의 완성 예제와 실제 구현을 구분합니다.
- 2026-09-14에는 노트 정리와 소스 대조를 수행했습니다. 코드 실행과 테스트는 수행하지 않았습니다.

## 실행 안내

VS Code의 기존 `.vscode/tasks.json`은 `C:\msys64\mingw64\bin\g++.exe`로 현재 파일을 빌드하도록 설정되어 있습니다. 실습마다 main이 있으므로 각 cpp를 개별적으로 빌드합니다. 설정에 C++ 표준 옵션은 명시되어 있지 않습니다. 컴파일러 설치·실행 여부는 이번 정리에서 재검증하지 않았습니다.

실습 파일을 열고 빌드 작업을 실행한 뒤, 생성된 실행 파일 또는 디버거로 결과를 확인합니다. 현재 코드에는 결과 출력이 없어 창이 조용히 종료되어도 기능 검증 완료를 의미하지 않습니다.

## 다음 작업

1. 클래스 실습에서 초기화한 객체로 멤버 함수를 호출해 보기.
2. 생성자·소멸자의 값과 호출 순서 관찰하기.
3. operator+를 구현하고 결과 및 원본 보존 확인하기.
4. 확인한 결과만 STUDY_LOG와 해당 정리 문서에 기록하기.

새 실습이 많아지면 주제별 하위 폴더를 사용합니다. 현재 소스 파일명과 위치는 유지합니다.