# 학습 로드맵

목표: 게임 프로그래밍에 필요한 C++ 기반 지식을 직접 구현·검증하고, 면접에서 동작 원리와 선택 이유를 설명하기.

권장 순서는 아래와 같습니다. 각 체크는 개념 설명, 직접 실습, 필요한 검증, 노트 정리까지 끝난 뒤 표시합니다. 초기 폴더 생성은 학습 완료로 계산하지 않습니다. 강의의 실제 목차와 순서는 수강 자료에 맞춰 조정합니다.

## 1. Yamyam Basic — 01-yamyam-basic
- [ ] OOP: 클래스, 캡슐화, 상속, 다형성
- [ ] Hash: 해시 함수와 충돌 처리
- [ ] Recursion: 종료 조건과 호출 스택
- [ ] Linked List: 연결과 삭제, 메모리 수명
- [ ] Vector: 동적 배열, size/capacity, 재할당
- [ ] Stack / Queue
- [ ] Tree / Graph 기본 표현
- [ ] DFS / BFS

## 2. Yamyam Advanced — 02-yamyam-advanced
- [ ] 시간·공간 복잡도와 상각 분석
- [ ] STL 컨테이너·반복자·알고리즘
- [ ] BST / Heap
- [ ] Binary Search
- [ ] Union-Find
- [ ] Sorting
- [ ] Dynamic Programming
- [ ] Dijkstra와 적용 조건
- [ ] Balanced Tree 기본 원리

## 3. Modern C++ — 03-modern-cpp
- [ ] RAII와 객체 수명
- [ ] Smart Pointer와 소유권
- [ ] Copy / Move와 Rule of Zero/Five
- [ ] const와 참조
- [ ] Lambda
- [ ] Template

아래 단계의 세부 항목은 대화에서 정한 분야를 구체화한 시작용 제안입니다.

## 4. 공간 알고리즘 — 04-spatial-algorithms
- [ ] 좌표·거리·경계 영역의 표현
- [ ] Grid / Spatial Hash
- [ ] Quadtree / Octree 기본 원리
- [ ] 범위 검색과 충돌 후보 탐색 비교

## 5. 성능 — 05-performance
- [ ] 프로파일링과 재현 가능한 측정
- [ ] Cache Locality와 연속 메모리
- [ ] 동적 할당 비용과 객체 풀
- [ ] 개선 전후 비교 및 가독성·메모리 사용량 절충

## 6. OS·동시성 — 06-os-concurrency
- [ ] 프로세스·스레드·가상 메모리
- [ ] 스택·힙과 객체 수명 구분
- [ ] Race Condition / Deadlock
- [ ] Mutex / Condition Variable / Atomic 기초
- [ ] 작은 생산자·소비자 예제

## 7. 설계 패턴 — 07-design-patterns
- [ ] SOLID 기본 원리와 적용 비용
- [ ] Strategy / State
- [ ] Observer / Command
- [ ] Factory와 생성 책임
- [ ] 패턴 적용 전후 비교, 불필요한 추상화 식별

## 8. Unreal C++ — 08-unreal-cpp
- [ ] UObject·리플렉션·GC 기본 원리
- [ ] Actor / Component / Gameplay Framework
- [ ] Blueprint와 C++ 역할 분리
- [ ] Enhanced Input / UMG
- [ ] 서버 권한·Replication·RPC 기초
- [ ] 작은 플레이 가능 실습과 패키징

## 통합 프로젝트 — projects
- [ ] 작은 프로젝트 하나 선택하고 완료 기준 작성
- [ ] 자료구조·알고리즘 선택 근거 기록
- [ ] 구현 및 필요한 기능 검증
- [ ] 병목 측정과 개선 또는 측정상 개선 불필요 판단
- [ ] README, Obsidian 회고, 면접 설명 정리

## 주제 완료 기준
- 내 말로 핵심 원리와 사용 조건을 설명한다.
- 직접 구현하거나 최소한의 재현 예제를 실행한다.
- 적용되는 경계 조건과 실패 사례를 확인한다.
- 관련되는 경우 시간·공간 복잡도와 대안을 비교한다.
- 게임 개발 적용 예시와 면접 답변을 적는다.
- 미해결 질문을 기록하고 다음 복습 시점을 정한다.