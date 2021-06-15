//
// Created by Dcisn on 4/2/2021.
//

#ifndef DSARRAYS_ARRAYINT_H
#define DSARRAYS_ARRAYINT_H
#include <string> // std::string, std::to_string

class ArrayInt {
private:
    int * ptr;
    int size;
    static int count;

public:
    ArrayInt(int size = 10){(size < 1) ? this->size = 10 : this->size = size; ptr = new int [ size ];}
    ~ArrayInt(){delete [] ptr;}
    int getSize(){return size;}
    void append(int value);
    int getLast();
    void deleteLast();
    void resize(int size);
    std::string listElements();
    void insertAt(int index, int value);
    void removeAt(int index);
    bool findRemove(int value);
    bool find(int value);
    int findLargest();
    void removeLargest();
    void setAt(int index, int value);
    int getAt(int index);
};


#endif //DSARRAYS_ARRAYINT_H
