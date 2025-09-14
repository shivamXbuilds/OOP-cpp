#include <iostream>

int main() {
    // Allocate memory for a single integer
    int *ptr_int = new int;
    *ptr_int = 25;
    std::cout << "Dynamically allocated int: " << *ptr_int << std::endl;
    delete ptr_int; // Free the memory

    // Allocate memory for an array of integers
    int *ptr_arr = new int[3];
    ptr_arr[0] = 1;
    ptr_arr[1] = 2;
    ptr_arr[2] = 3;
    std::cout << "Second element of dynamic array: " << ptr_arr[1] << std::endl;
    delete[] ptr_arr; // Use delete[] for arrays

    ptr_int = nullptr; // Good practice to nullify pointers after deleting
    ptr_arr = nullptr;

    return 0;
}
