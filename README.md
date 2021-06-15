# Enhanced Arrays
 Creating a base array and enhancing it with vector-like features

This lab is to create a ckass that implements an enhanced array class. A review of arrays, classes, and exceptions. 

Base Lab

void resize(int size) - resize the array to the new size, copying values as needed.If the newsize is less than or equal to the current size, do nothing 

void append(int value) –add value at the next available location in the array. If the nextlocation is greater than or equal to the current size of the array, create a new array of size*2 and copy all values to it. The first value should be added at index 0 and so forth. This will require keeping track of the next available location

int getLast() –return the value at the previously available location. If the array is empty, throw an out_of_range exception.

void insertAt(int index, int value) –insert value at index location, shifting all values at that location or higher up one.If this shift would cause elements to be stored past the end of the array, create a new array of size * 2 and copy all values to it. If index is less than 0, greater than the largest location containing valid data, or greater than the array size, throw an out_of_range(IndexError)exception.

int removeAt(int index) – save the value at index location, shifting all values at that location or higher down one position. Return the saved value. If index is less than 0, greater than the largest location containing valid data, or greater than the array size, throw an out_of_range(IndexError)exception.

bool findRemove(int value) – if value is in the array,remove it while maintaining the same array order. Return true if value is in the array, false otherwise.

Advanced Lab

int getAt(int index) - return the value at index location. If index is less than 0 or greater than array size. Throw an out_of_range exception (indexError). This may return a value from a location that was not previously set. 

void setAt(int index, int value) - Store value at index location. If index is less than 0 or greater than the array size, throw an out_of_range exception (IndexError). Make sure that any following appends will not overwrite this value. 