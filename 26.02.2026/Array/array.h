#pragma once

#include <cstddef>
class DynArray {
private:
    int* data = nullptr;
    size_t size;
public:
    DynArray(size_t size);
    ~DynArray();
    int& operator[](size_t index);
    int& at(size_t index);
    size_t getsize();
    DynArray(const DynArray& other);
    DynArray& operator=(const DynArray& other);
};




