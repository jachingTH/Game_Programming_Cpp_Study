# 클래스·구조체, 멤버 함수, this와 const

[학습 목차](00_수강목록.md) · [실습 코드](../../../01-yamyam-basic/00_Class_Structure_Function.cpp)

## 빠른 요약

`struct`와 `class`는 모두 데이터와 함수를 가진 타입을 만들 수 있습니다. 기본 멤버 접근과 기본 상속 접근이 다릅니다. [C++ 초안: 접근 제어](https://eel.is/c++draft/class.access)

| 항목 | struct | class |
| --- | --- | --- |
| 기본 멤버 접근 | public | private |
| 기본 상속 접근 | public | private |
| 멤버 함수·생성자 사용 | 가능 | 가능 |

단순 데이터 묶음에 struct, 규칙을 지키는 인터페이스에 class를 쓰는 것은 관례입니다. 기능상 강제되는 구분은 아닙니다.

## 캡슐화와 접근 제한

- public: 외부에서 접근할 수 있는 인터페이스.
- private: 해당 클래스의 멤버와 friend가 접근 가능.
- protected: 파생 클래스에서도 정해진 접근 규칙에 따라 사용 가능.

핵심은 상태 변경 경로를 제한해 규칙을 지키는 것입니다. private가 소스 코드나 메모리를 보안상 숨기는 기능은 아니며, private를 붙이는 것만으로 개방·폐쇄 원칙이 완성되는 것도 아닙니다. [접근 제어 규칙](https://eel.is/c++draft/class.access)

## this와 const

일반적인 비정적 멤버 함수에서 this는 호출 대상 객체를 가리킵니다. `age += 1`은 해당 객체의 멤버를 사용합니다.

| 표현 | 의미 |
| --- | --- |
| const int* p | p를 통해 대상 값을 변경할 수 없음 |
| int* const p | p가 보관하는 주소를 변경할 수 없음 |
| const int* const p | 위 두 제한을 함께 적용 |

this의 타입은 일반 멤버 함수에서 `T*`, const 멤버 함수에서 `const T*`입니다. this는 재대입할 수 있는 포인터 변수가 아닌 prvalue 표현식이므로 `T* const` 변수라고 설명하면 부정확합니다. 숨겨진 객체 주소를 전달한다는 설명은 호출을 이해하기 위한 모델이며 ABI의 인자 배치 자체를 보장하는 문법은 아닙니다. [C++ 초안: this](https://eel.is/c++draft/expr.prim.this)

const 멤버 함수는 this를 통한 일반 멤버 변경을 제한하지만 mutable 멤버 등 예외가 있으므로 “아무 상태도 절대 바꿀 수 없음”으로 확대하지 않습니다.

## 현재 코드와 확인할 점

| 코드에서 확인한 내용 | 상태·다음 확인 |
| --- | --- |
| People의 age를 24로 설정한 뒤 Addage에 참조 전달 | 코드상 증가 후 25가 예상됨. 실행 결과는 미기록 |
| cPeople::Addage 멤버 함수 선언 | main에서는 호출하지 않음 |
| cPeople taehyun2 선언 | age 초기화 없이 Addage를 호출하는 실습은 피해야 함 |
| 포인터 const 조합 3종 | 선언은 있으나 재대입·역참조 변경 실험은 없음 |

## 원문에서 보완한 점

- 기본 상속 접근 차이도 포함했습니다.
- this의 타입과 포인터 상수 설명을 바로잡았습니다.
- 멤버 사이에는 정렬을 위한 패딩이 있을 수 있습니다. 객체 크기를 멤버 크기의 단순 합으로 단정하지 않습니다. [클래스 멤버 배치](https://eel.is/c++draft/class.mem.general)

## 다음 실습과 면접 질문

- 객체를 초기화한 후 멤버 함수를 호출하고 값의 변화를 확인하기.
- 세 가지 포인터 선언에서 허용·금지되는 변경을 각각 설명하기.
- 질문: struct에도 private와 멤버 함수를 쓸 수 있는데 class를 선택하는 이유는?

관련: [멀티패러다임](cpp-multi-paradigm-guide.md) · [생성자·소멸자](cpp-constructor-destructor-guide.md) · [연산자 오버로딩](cpp-operator-overloading-guide.md).

원본: Obsidian Vault의 `10_Courses/얌얌코딩_CPP_자료구조_기초알고리즘/cpp-class-struct-guide.md`.
정리일: 2026-09-14. 영상 URL·번호·수강 날짜 미확인. 코드 실행은 이번 정리에서 수행하지 않았습니다.