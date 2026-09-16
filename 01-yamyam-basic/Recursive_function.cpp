#include <iostream>

void ABC()
{

}

int arr[5] = {1, 2, 3, 4, 5};
char path[10] = "";

void test(int level)
{
    /* std::cout << x;
    ABC(); */

    //진입 후 특정 구간에서 Return
    /* if(path[0] == 'A')
    {
        return;
    } */

    //무한히 호출되는 함수를 방지해야 하는 것이 우선
    if (level == 3)
    {
        std::cout << path << std::endl;
        return;
    }

    for (size_t i = 0; i < 3; i++)
    {
        if(level == 0 && ('A' + i) == 'A')
            continue;
        
        path[level] = 'A' + i;
        test(level + 1);
        path[level] = 0;
    }
    
    
}

char name[10] = "KTH";
void run(int level)
{
    if (level == 3)
    {
        std::cout << path;
        std::cout << std::endl;

        return;
    }

    /* path[level] = 'A';
    run(level + 1);
    path[level] = 0;

    path[level] = 'B';
    run(level + 1);
    path[level] = 0; */

    for (size_t i = 0; i < 2; i++)
    {
        //path[level] = 'A' + i;
        path[level] = name[i];
        run(level + 1);
        path[level] = 0;
    }
}


int main()
{
    test(3);

    run(0);

    int arr[2][2][5] = {};

    for (size_t z = 0; z < 2; z++)
    {
        for (size_t y = 0; y < 2; y++)
        {
            for (size_t x = 0; x < 5; x++)
            {
                arr[z][y][x] = 1;
            }
        }
    }

    int arrA[2][5];
    int arrB[2][5];

    for (size_t y = 0; y < 2; y++)
    {
        for (size_t x = 0; x < 5; x++)
        {
            arrA[y][x] = 1;
        }
    }

    for (size_t y = 0; y < 2; y++)
    {
        for (size_t x = 0; x < 5; x++)
        {
            arrB[y][x] = 1;
        }
    }


    return 0;
}