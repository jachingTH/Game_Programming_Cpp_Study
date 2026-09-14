#include <iostream>

int arr[5] = {1, 2, 3, 4, 5};

int isExist(int find)
{
    for (size_t j = 0; j < 5; j++)
        {
            if (arr[j] == find)
            {
                return 1;
            }
        }
    return 0;
}

void printResult(int num, int flag)
{
    if (flag == 1)
    {
        std::cout << "Found!" << std::endl;
    }
    else
    {
        std::cout << "Not found!" << std::endl;
    }
}

int getSum(int* arr, int idx, int arrSize)
{
    int sum = 0;

    for (size_t i = idx; i < arrSize; i++)
    {
        sum += arr[idx];
    }

    return sum;
}

int isSame(char* strA, char* strB)
{
    int len = 0;
    /* for (size_t i = 0; i < 256, i++)
    {
        if (strA[i] == '\0')
        {
            len = i;
            break;
        }
    } */

    for (size_t i = 0; i < 256; i++)
    {
        if (strA[i] != strB[i])
        {
            return 0;
        }
    }

    return 1;
}



int main()
{
    //1. 비트 배열을 이용하여 마스킹 해보기

    int vect[6] = {1, 2, 3, 4, 5, 6};
    int mask[6] = {0, 0, 0, 1, 1, 1};
    int result[6] = {};

    // typedef unsigned __int64 SIZE_XXXXX;

    for (size_t i = 0; i < 6; i++)
    {
        if (mask[i] == 1)
        {
            result[i] = vect[i];
            std::cout << result[i] << " ";
        }
    } 

    //다중 flag 및 다중 count

    int count = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    int finds[3] = {1, 2, 3};

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            count = 0;
            if (arr[j] == finds[i])
            { 
                count++;
            }
        }
        std::cout << "count : " << count << std::endl;
    }

    int flag = 0;

    for (size_t i = 0; i < 3; i++)
    {
        flag = isExist(finds[i]);

        printResult(finds[i], flag);
    }

    //BaseIndex, OffsetIndex 개념 설명
    
    /* **1. 저수준 메모리 / 포인터 관점**

CPU 메모리 주소 계산 원리와 동일.

* **공식:** `TargetAddress = BaseAddress + (Offset * sizeof(Type))`
* **C++ 배열 접근 실체:**
```cpp
int arr[5] = {10, 20, 30, 40, 50};
int val = arr[2]; // *(arr + 2) 변환. arr = Base, 2 = Offset.

```

* Base는 배열 첫 원소 메모리 주소 고정. Offset은 떨어진 칸 수 의미.

---

**2. 렌더링 파이프라인 (DirectX / Vulkan) 관점**

수많은 3D 메쉬를 GPU 메모리에 올릴 때 버퍼 수백 개 만들면 드로우콜 병목 발생. 해결책: **거대 단일 버퍼(Mega Buffer) 병합**.

* **Index Buffer 구조 예시:**
* 메쉬 A (삼각형 2개): 인덱스 6개 (0 ~ 5번 슬롯)
* 메쉬 B (삼각형 3개): 인덱스 9개 (6 ~ 14번 슬롯)


* **메쉬 B 렌더링 시 인덱스 매핑:**
* `BaseIndex` = 6 (글로벌 버퍼 안 메쉬 B 시작점).
* `OffsetIndex` = 0 ~ 8 (메쉬 B 내부 로컬 인덱스 번호).
* GPU 참조 위치 = `BaseIndex(6) + OffsetIndex`.


* **DirectX 함수 매핑:**
```cpp
// DrawIndexed(인덱스수, 시작인덱스위치, 기준버텍스위치);
context->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
// StartIndexLocation == BaseIndex 역할.
```

---

**3. 공간 분할 / 청크(Chunk) 시스템 관점**

오픈월드 2D 타일맵 또는 복셀(마인크래프트식) 데이터 관리 시 다차원 배열 대신 1차원 배열 평탄화(Flattening) 사용.

```cpp
// 16x16 크기 청크 관리
const int CHUNK_SIZE = 256; // 16 * 16

// 5번 청크 내부 로컬 좌표 (x: 3, y: 2) 타일 접근
int chunkID = 5;
int localX = 3;
int localY = 2;

// 기준 인덱스: 청크 덩어리 시작 위치
int BaseIndex = chunkID * CHUNK_SIZE; // 5 * 256 = 1280

// 오프셋 인덱스: 청크 내부 상대적 위치
int OffsetIndex = (localY * 16) + localX; // (2 * 16) + 3 = 35

// 전체 타일 배열 최종 접근
int FinalIndex = BaseIndex + OffsetIndex; // 1315번 슬롯

```
---

**4. 분리 사용 시 핵심 이점**

* **데이터 모듈화:** 메쉬/청크 데이터 파일 저장 시 항상 `0`번 기준 로컬 인덱스로 저장 가능. 전역 인덱스 재계산 불필요.
* **인스턴싱 및 재배치 용이:** 동일 메쉬 데이터 복사본 생성 없이 `BaseIndex`만 다른 값 전달해 다중 출력 가능.
* **캐시 효율 극대화:** 데이터 연속 메모리 블록(Contiguous Memory) 적재. CPU/GPU 캐시 미스 감소. */


    //getSum(int index) 함수 만들기

    int arrB[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    getSum(arrB, 3, 9);

    //IsSame() 함수 만들기

    char strA[256] = "Hello";
    char strB[256] = "Hello";

    if (isSame(strA, strB))
    {
        std::cout << "같다";
    }

    return 0;
}