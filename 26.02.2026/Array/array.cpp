#include "array.h"
#include <stdexcept>
#include <iostream>

DynArray::DynArray(size_t size) : size(size) {
    data = new int[size];
    std::cout << "Cons: " << this << ", data: " << data << std::endl;
}

DynArray::~DynArray() {
    std::cout << "Des: " << this << ", data: " << data << std::endl;
    delete[] data;
}
int& DynArray::operator[](size_t index) {
    return data[index];
}

int& DynArray::at(size_t index) {
    if (index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

size_t DynArray::getsize() {
    return size;
}

DynArray::DynArray(const DynArray& other) {
    std::cout << "Cons: " << this << " copy of " << &other << std::endl;
    *this = other;
}

DynArray& DynArray::operator=(const DynArray& other) {
    std::cout << "Assign: " << this << " copy of " << &other << std::endl;
    if (this == &other) {
        return *this;
    }
    delete[] data;
    size = other.size;
    data = new int[size];
    for (size_t i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
    return *this;
}


// Prob #3:
// Create DynArray - dynamic array:
// - size is determined at creation time
// - can arr[i] = ...; (have proper operator[]) or at()
// - properly creates and handle dynamic data