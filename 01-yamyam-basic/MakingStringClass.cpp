#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include <vector>

#define _CRT_SECURE_NO_WARNINGS

namespace ya
{
    class string
    {
    public:
        string() 
            :mStr(nullptr) //초기화 (멤버 이니셜라이즈)
        {
            //mStr = nullptr; //대입
        }

        string(const char* str) 
            :mStr(nullptr) //초기화 (멤버 이니셜라이즈)
        {
            //mStr = nullptr; //대입

            int len = strlen(str);
            mLen = len;
            mStr - new char[len +1];

            //strcpy(mStr, str);

            for (size_t i = 0; i < len; i++)
            {
                mStr[i] = str[i];
            }
            mStr[len] = '\0';
        }

        ~string()
        {
            delete[] mStr; 
        }

        void operator+=(const char* str)
        {
            int newLen = mLen + strlen(str);
            char* newStr = new char[newLen + 1];

            int idx = 0;

            for (size_t i = 0; i < mLen; i++)
            {
                newStr[idx++] = mStr[i];
            }

            for (size_t i = 0; i <= strlen(str); i++)
            {
                newStr[idx++] = str[i];
            }

            char *deletStr = mStr;
            mStr = newStr;

            delete deletStr;
            mLen = newLen;
        }

        int length()
        {
            return mLen;
        }

        void erase()
        {
            for (size_t i = 0; i < mLen; i++)
            {
                mStr[i] = 0;
            }
        }

    private:
        char *mStr;
        int mLen;
    };
}

int main()
{
    std::string hello = "Hello";
    std::cout << hello;

    hello += "World";

    hello.size();
    hello.length();
    hello.erase();

    ya::string yaHello;
    // = ya::string yaHello = ya::string();


    ya::string yaHello = "Hello";
    yaHello += "World";
    // = ya::string yaHello(Hello);

    yaHello.length();

    //동적 배열
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);
    vector.push_back(1);
    vector[0] = 100;

    return 0;
}