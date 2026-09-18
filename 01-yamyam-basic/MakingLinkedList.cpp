#include <iostream>
#include <list>

namespace ya
{
    template <typename T> 
    class list
    {
    public:
        struct Node
        {
            T data;
            Node *back;
            //Node *front;
        };

        //생성자 : 객체가 생성될 때(메모리 할당), 자동으로 호출
        list()
        {
            mHead = nullptr;
            mTail = nullptr;
        }

        //소멸자 : 객체가 사라질 때(메모리에서 해제), 자동으로 호출 
        ~list()
        {
            
        }

        void push_back(T data)
        {
            if (mHead == nullptr)
            {
                mHead = new Node();
                mHead->data = data;
                mHead->back = nullptr;
                //mHead->front = nullptr;

                mTail = mHead;
            }
            else
            {
                mTail = new Node();
                mTail->data = data;
                mTail->back = nullptr;
                //mTail->front = nullptr;

                mTail = mTail->back;
            }
        }

    private:
        Node *mHead;
        Node *mTail;
    };
} // namespace ya


int main()
{
    std::list<int> stlList;
    stlList.push_back(10);
    stlList.push_back(20);
    stlList.push_front(-10);

    ya::list<int> yaList;
    yaList.push_back(1);
    yaList.push_back(2);
    yaList.push_back(3);

    int *p = new int;

    return 0;
}