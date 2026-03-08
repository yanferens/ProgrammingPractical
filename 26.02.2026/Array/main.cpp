#include "array.h"
#include <iostream>
#include <stdexcept>

DynArray getArray() {
    std::cout << "Enter size: ";
    size_t size;
    std::cin >> size;
    DynArray array(size);
    for (size_t i = 0; i < size; i++) {
        std::cout << "Enter element: ";
        std::cin >> array[i];
    }
    return array;
}

int findMax(DynArray& array) {
    if (array.getsize() == 0) {
        throw std::runtime_error("Array is empty");
    }
    int max = array[0];
    for(size_t i =1; i < array.getsize(); i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    DynArray array = getArray();
    {DynArray array2 = array;}
    int max = findMax(array);
    std::cout << "Max element: " << max << std::endl;
}