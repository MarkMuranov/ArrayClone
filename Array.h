//
// Created by Mark Muranov on 2/5/24.
//

#pragma once

#include <iostream>

template<typename T, size_t size>
class Array
{
public:
    class Iterator
    {
    public:
        Iterator(Array* aParent, size_t anIndex)
            : parent(aParent), index(anIndex) {}

        Iterator& operator++()
        {
            ++index;
            return *this;
        }

        T& operator*()
        {
            return (*parent)[index];
        }

        bool operator==(const Iterator& other)
        {
            return index == other.index && parent == other.parent;
        }

        bool operator!=(const Iterator& other)
        {
            return !(*this == other);
        }

    protected:
        size_t index;
        Array* parent;

    };

    Iterator begin()
    {
        return Iterator(this, 0);
    }

    Iterator end()
    {
        return Iterator(this, size);
    }


    T& operator[](size_t index)
    {
        return data[index];
    }

    size_t getSize() { return size; }


protected:
    T data[size];

};