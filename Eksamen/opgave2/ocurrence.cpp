#include "ocurrence.h"
#include <vector>
#include <iostream>
// opgave 2a
int ocurrence(std::vector<int> list, int target) {
    int count = 0;

    for (int item : list) {
        if (item == target) {
            count++;
        }
    }
    return count;
}

// opgave 2c
void ocurrence(int* values, int size, int target, int* result) {
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (values[i]==target)
        {
            count++;
        }
        
    }
    *result = count;
}