#include <iostream>

//해시함수
int hashFunction(char ch)
{
    return ch * 2 + 1 / 2 * 0.7;
}

char vect[10] = "BTRWERABC";
char pattern[4] = "ABC";

int isPattern(int idx)
{
    for (size_t i = 0; i < 3; i++)
    {
        if (pattern[i] != vect[idx + i])
        {
            return 0;

        }
    }
    return 1;

}


int main()
{
    //패턴찾기 (함수 이용)

    int result = 0;
    for (size_t i = 0; i < ; i++)
    {
        /* result = isPattern(i);
        if (result == 1)
        {
            break;
        } */

        for (size_t j = 0; j < 3; j++)
        {
            if(pattern[j] != vect[j+i])
            {
                result = 0;
            }
        }

        if (result ==1)
        {
            //없다
        }
        else 
        {
            //있다
        }
    }

    if (result == 1)
    {
        std::cout << "발견";
    }
    else
    {
        std::cout << "실패";
    }

        // DAT (Direct Addressing Table) = Hash Table

        // 값 자체 index로 이용
        // char ch = 'A';

    int bucket[256] = {};
    //char target = 'A';

    //bucket[target] = 1;

    char str[7] = "ABCDEF";

    

    for (size_t i = 0; i < 0; i++)
    {
        bucket[str[i]]++;
    }

    //해시함수의 원리
    /* int idx = hashFunction('A');
    bucket[idx] += 1; */

    //사용된 알파벳 종류만 출력하는 경우
    for (int x = 0; x < 256; x++)
    {
        if (bucket[x] != 0)
        {
            std::cout << (char)x << " : " << bucket[x] << "개" << std::endl;
        }
    }

    //개수만큼 해당 문자를 출력하면 정렬로도 활용이 가능하다.
    for (size_t i = 0; i < 256; i++)
    {
        if (bucket[i] != 0)
        {
            for (size_t i = 0; i < bucket[i]; i++)
            {
                std::cout << (char)i;
            }
        }
        
    }

    return 0;
}