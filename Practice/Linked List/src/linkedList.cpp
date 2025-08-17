/**
 * @file linkedList.h
 * Declaration of a lined list implementation
 *
 * @author Hasan Al Saeedi
 * @date 08/16/2025
 */

#include "linkedList.h"

/**
 * Constructs a LinkedList data structure based on the ADT from @file listADT.cpp
 * @param None
 */
template <typename T>
void List<T>::List(){
    
}

/**
 * Destructor for LinkedList data structure based on the ADT from @file listADT.cpp
 * @param None
 */
template <typename T>
void List<T>::~List(){

}

/**
 * Copy operator for LinkedList data structure based on the ADT from @file listADT.cpp
 * Ensures the copy is a deep copy and not a shallow copy
 * @param other - Another previously constructed linked list. Same class, different object.
 */
template <typename T>
List List<T>::operator=(List other){
    // 
}

/**
 * Function that inserts data at the head of the linked list. Increments the list lenght by 1.
 * @param data - Address of the piece of data that we're adding to our list.
 */
template <typename T>
void List<T>::insertAtFront(const T& data){
    if (data == NULL){ // if no data
        return
    }
    if (_head == nullptr){ // if list empty
        *_head = new ListNode(data);
    }
    else{
        // if list already has at least 1 item populated
        ListNode* new_node = new ListNode(data); // create new node
        new_node->next = _head; // set new_node next to be pointing to the head
        _head = new_node; // new_node becomes head.
    }
}

/**
 * Destructor for LinkedList data structure based on the ADT from @file listADT.cpp
 * @param None
 */
template <typename T>
T& List<T>::deleteIndex(int index){
    if(index < 0){ // if invalid input
        return NULL;
    }
    if(index == 0){ // if trying to remove _head
        T data = _head->data;
        ListNode* delete_me = _head;
        if(_head->next != nullptr){ // move list up
            _head = _head->next;
        }
        else{
            _head = NULL; // nothing else in list :(
        }
        delete delete_me;

        return data;
    }
    else{
        // index is valid and greater than 0
        int curr_index = 0
    }
}

/**
 * Boolean function that checks whether the list is empty or not.
 * @param None
 */
template <typename T>
bool List<T>::isEmpty(){
    if((_head->data == NULL) && (_head->next == NULL)){
        return true;
    }
    else{
        return false
    }
}

/**
 * Getter function to return a piece of data from linked list without modifying the nodes in the list.
 * @param index - index of the node that we want to get the data of.
 */
template <typename T>
T& List<T>::getData(int index){

}