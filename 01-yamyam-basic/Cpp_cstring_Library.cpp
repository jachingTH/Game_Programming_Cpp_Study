#include <iostream>

int num = 0;

void dfs(int level)
{
    if(level == 3)
    {
        return;
    }

    /* dfs(level + 1);
    dfs(level + 1); */
    /* std::cout << level; */

    for (size_t i = 0; i < 2; i++)
    {
        num++;
        dfs(level + 1);
        num--;
    }
}


int main()
{

#pragma region cstring // 목록 시작
    // cstring

    char nameA[10] = "ABC";
    char nameB[10] = "ABC";

    /* int flag = 0;
    for (size_t i = 0; i < 10; i++)
    {
        if (nameA[i] != nameB[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {

    } */


    //문자열 비교 함수
    //같음 = 0
    //다름 = 0이 아닌 다른 값
    if (strcmp(nameA, nameB) == 0)
    {
        int a = 0;
    }

    //문자열 길이
    int len = strlen(nameA);

    //문자열 복사
    //strcpy_s(nameC, nameA);

#pragma endregion // 목록 끝

    // 재귀호출 깊이
    dfs(0);
    std::cout << num;

    // 재귀호출 너비

    return 0;
}