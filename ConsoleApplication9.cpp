#include <iostream>

// Завдання 1
void copyArray(int* source, int* destination, int size) {
    for (int* srcPtr = source, *dstPtr = destination; srcPtr < source + size; ++srcPtr, ++dstPtr) {
        *dstPtr = *srcPtr;
    }
}

// Завдання 2
void reverseArray(int* arr, int size) {
    for (int* left = arr, *right = arr + size - 1; left < right; ++left, --right) {
        int temp = *left;
        *left = *right;
        *right = temp;
    }
}

// Завдання 3
void copyArrayReverse(int* source, int* destination, int size) {
    for (int* srcPtr = source + size - 1, *dstPtr = destination; srcPtr >= source; --srcPtr, ++dstPtr) {
        *dstPtr = *srcPtr;
    }
}

int main() {
    int size;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> size;

    
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    int* arr3 = new int[size];

   
    std::cout << "Введіть елементи першого масиву: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr1[i];
    }

    // Завдання 1
    copyArray(arr1, arr2, size);
    std::cout << "Скопійований масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // Завдання 2
    reverseArray(arr1, size);
    std::cout << "Масив у зворотному порядку: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    // Завдання 3
    copyArrayReverse(arr1, arr3, size);
    std::cout << "Скопійований масив у зворотному порядку: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}
