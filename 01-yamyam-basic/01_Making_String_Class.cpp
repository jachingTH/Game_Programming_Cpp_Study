#include <iostream>
#include <string>

//문자열

class MyString
{
public:
    MyString(const char* str)
    {
        for (int i = 0; i<256; i++)
        {
            this -> str[i] = '\0';
        }

        for (int i = 0; i < 256; i++)
        {
            if (str[i] == '\0')
            {
                 break;
            }
            this->str[i] = str[i];
        }
    }

    // void operator=(const char* str)
    // {

    // }

    int size()
    {

        return len +1;
    }

    int operator+=(const char* str)
    {
        int idx = 0;

        for (int i = len; i < 256; i++)
        {
            if (str[i] == '\0')
            {
                break;
            }
            this->str[i] = str[i];
        }
    }

private:
    char str[256];
    int len;
};

int main()
{
    std::string str = "Hello, World!";

    int len = str.size();

    MyString str2 = "ABCD";
    len = str2.size();

    str2 = "EFGH";

    return 0;
}