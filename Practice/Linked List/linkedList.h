/**
 * @file linkedList.h
 * Declaration of a lined list implementation
 */

#pragma once //preprocessor directive used in header files to ensure that the file is included only once in a single compilation unit

template <typename T>
class List
{
    public:
    
        List();
        ~List();
        List operator=(List other);

        void insertAtFront(const T& t);
        T& deleteIndex(int index);
        bool isEmpty();
        T& getData(int index);


    private:

        class ListNode{
            T& data;
            ListNode* next;
            ListNode(T& data) : data(data), next(nullptr) {}
        };

        ListNode* _head;
};

// #include "linkedList.cpp"