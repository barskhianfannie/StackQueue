#ifndef LIST_CLASS_H
#define LIST_CLASS_H

#include<iostream>
using namespace std;
#include "../Linked_Lists/Includes/Linked_List_Functions/lnkd_lst_fnc.h"


template <typename T>
class List
{
public:
    class Iterator{
    public:
        friend class List;                              //give access to list to access _ptr
        Iterator():_ptr(nullptr){                         //default ctor
        }


        Iterator(node<T>* p): _ptr(p)                      //Point Iterator to where p is pointing to
        {

        }

        Iterator next()
        {
            assert(_ptr);
            return _ptr->_next;
        }

        T& operator *()                      //dereference operator // item  RETURN _PTR->_ITEM;
        {
            return _ptr->_item;
        }

        T* operator ->()                        //member access operator // address
        {
            return &_ptr->_item;
        }

        bool is_null()                                //true if _ptr is NULL
        {
            if(_ptr == nullptr)
                return true;
            else
                return false;
        }


        friend bool operator !=(const Iterator& left, const Iterator& right) //true if left != right
        {
            if(left._ptr != right._ptr)
                return true;
            else
                return false;
        }

        friend bool operator ==(const Iterator& left, const Iterator& right) //true if left == right
        {
            if(left._ptr->_next == right._ptr)
                return true;
            else
                return false;
        }

        Iterator& operator++()                       //member operator: ++it; or ++it = new_value
        {
            _ptr = _ptr ->_next;
            return *this;
        }

        friend Iterator operator++(Iterator& it, int unused)    //friend operator: it++
        {
            assert(it._ptr);
            Iterator temp = it;
            it = it.next();
            return temp;
        }

    private:
        node<T>* _ptr;                          //pointer being encapsulated
    };

    List();                                                     //CTOR
    //BIG 3:
    ~List();
    List(const List<T> &copyThis);
    List& operator =(const List& rhs)
    {

        if(this != &rhs)
        {
            clear_list(_head_ptr);
            _head_ptr = copy_list(rhs._head_ptr);
        }
        return *this;
    }

    Iterator InsertHead(T i);                           //insert at the head of list    //DONE
    Iterator InsertAfter(T i, Iterator iMarker);        //insert after marker   //DONE
    Iterator InsertBefore(T i, Iterator iMarker);       //insert before marker  //DONE
    Iterator InsertSorted(T i);                         //insert in a sorted list    // DONE

    T Delete(List<T>::Iterator iMarker);                        //delete node pointed to by marker // DONE
    void Print() const;
    Iterator Search(const T &key);                              //return Iterator to node [key] //DONE
    Iterator Prev(Iterator iMarker);                            //previous node to marker   // DONE

    T& operator[](int index);                                  //return item at position index    // DONE
    Iterator Begin() const;                                     //Iterator to the head node //DONE
    Iterator End() const;                                       //Iterator to NULL          //DONE
    Iterator LastNode() const;                                  //Iterator to the last node     //DONE


    template <typename U>
    friend ostream& operator <<(ostream& outs, const List<U>& list)
    {
        print_list(list._head);
        return outs;
    }


private:
    node<T>* _head_ptr;
};

//============================================================================================
//                          BIG THREE
//============================================================================================

//DEFAULT CONSTRUCTOR
template <typename T>
List<T>:: List()
{

    _head_ptr = NULL;
}

//DESTRUCTOR
template <typename T>
List<T>::~List()
{

    if(_head_ptr != NULL) clear_list(_head_ptr);
}

//COPY CONSTRUCTOR
template <typename T>
List<T>::List(const List<T> &copy_this)
{

    _head_ptr = copy_list(copy_this._head_ptr);

}

//============================================================================================
//                      FUNCTIONS DEFINED
//============================================================================================

template <typename T>
typename List<T>:: Iterator List<T>::InsertHead(T item)
{
    return insert_head(_head_ptr, item);
}

template <typename T>
typename List<T>:: Iterator List<T>:: InsertAfter(T item, Iterator iMarker)
{
    return insert_after(_head_ptr, iMarker._ptr, item);
}

template <typename T>
typename List<T>:: Iterator List<T>:: InsertBefore(T i, Iterator iMarker)
{
    return insert_before(_head_ptr, iMarker._ptr, i);
}

template <typename T>
typename List<T>:: Iterator List<T>:: Begin() const
{
    return _head_ptr;
}

template <typename T>
typename List<T>:: Iterator List<T>:: LastNode() const
{
    return last_node(_head_ptr);
}

template <typename T>
typename List<T>:: Iterator List<T>:: End() const
{
    return nullptr;
}

template <typename T>
typename List<T>:: Iterator List<T>:: Search(const T &key)
{
    return search_list(_head_ptr, key);
}

template <typename T>
T& List<T>::operator[](int index)
{
    return at(_head_ptr, index);
}

template <typename T>
T List<T>::Delete(List<T>::Iterator iMarker)
{
    if(_head_ptr == nullptr)
    {
        return delete_head(iMarker._ptr);
    }else{
        return delete_node(_head_ptr, iMarker._ptr);
    }
}

template <typename T>
typename List<T>:: Iterator List<T>:: InsertSorted(T i)
{
    return insert_sorted(_head_ptr, i); //Assuming it is in Descending Order for testing purposes
}

template <typename T>
void List<T>:: Print() const
{
    print_list(_head_ptr);
}

#endif // LIST_CLASS_H
