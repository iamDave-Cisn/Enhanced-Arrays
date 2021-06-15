//
// Created by Dcisn on 4/2/2021.
//

#include "ArrayInt.h"
#include <stdexcept> // out_of_range


int ArrayInt::count = 0;

void ArrayInt::append(int value)
{
    if (count >= size)
    {
        const int UPDATE_SIZE = size*2;
        resize(UPDATE_SIZE);
    }
    if (count < size)
    {
        ptr[count] = value;
        count++;
    }
}

int ArrayInt::getLast()
{
    if ( count <= 0)
        throw std::out_of_range("Array is empty");

    int lastNumberInArray;
    lastNumberInArray = ptr[count-1];
    return lastNumberInArray;
}

void ArrayInt::deleteLast()
{
    if ( count <= 0)
        throw std::out_of_range("Array is empty");
    else
        count--;
}

void ArrayInt::resize(int size)
{
    if (size < this->size)
        return;
    if (count <= this->size or this->size < size)
    {
        this->size = size;
        int *tempArray = new int[size];
        for (int i = 0; i < size; i++)
        {
            tempArray[i] = ptr[i];
        }
        delete[] ptr;
        ptr = tempArray;
    }
}
std::string ArrayInt::listElements()
{
    std::string listElementsAsString;

    for(int i = 0; i < count; i++)
        listElementsAsString += std::to_string ( ptr[i] ) + ", ";

    return listElementsAsString;
}
void ArrayInt::insertAt(int index, int value)
{
    const int RESIZE = this->size * 2;

    if (index > size)
        throw std::out_of_range("Out of Array Bounds");
    if (count >= size)
        resize(RESIZE);

    if (count < size)
    {
        for (int i = count; i >= index; i--)
        {
            ptr[i + 1] = ptr[i];
        }
        ptr[index] = value;
        count++;
    }
}

void ArrayInt::removeAt(int index)
{
    if (count <= 0)
        throw std::out_of_range("Array is empty");

    for(int i = index; i <= count; i++)
        ptr[i] = ptr[i+1];
    count--;
}
bool ArrayInt::findRemove(int value)
{
    bool done = false;
    for (int i = 0; i < count and !done; i++) {
        if (ptr[i] == value) {
            for (int j = i; j <= count; j++) {
                ptr[j] = ptr[j+1];
            }
            done = true;
            count--;
        }
    }
    return done;
}
bool ArrayInt::find(int value)
{
    bool found = false;

    for (int i = 0; i < count and !found; i++)
    {
        if (ptr[i] == value)
            found = true;
    }
    return found;
}
int ArrayInt::findLargest()
{
    int largest = ptr[0];
    for (int i = 1; i <= count; i++)
    {
        if (largest < ptr[i])
            largest = ptr[i];
    }
    return largest;
}
void ArrayInt::removeLargest()
{
    if (count <= 0)
        throw std::out_of_range("empty Array");

    int largest = findLargest();
    int index;
    bool done = false;
    for (int i = 0; i <= count and !done; i++)
    {
        if (ptr[i] == largest)
        {
            index = i;
            for (int j = index; j <= count; j++)
                ptr[j] = ptr[j+1];
            done = true;
            count--;
        }
    }
}
void ArrayInt::setAt(int index, int value)
{
    if (index < 0 or index > size)
        throw std::out_of_range("Out of bounds");

    ptr[index] = value;
    if (index < count )
        count = index;
}
int ArrayInt::getAt(int index)
{
    if (index < 0 or index > size)
        throw std::out_of_range("Out of bounds");

    int value = ptr[index];
    return value;
}


