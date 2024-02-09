#include <iostream>

using namespace std;

bool sortedArray(const int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] > array[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int array1[] = {15, 11, 13, 16, 12, 10, 14};
    int array2[] = {11, 14, 13, 10, 11, 16, 15};
    int array3[] = {10, 11, 12, 13, 14, 15, 16};

    cout << "Array 1 is sorted: "<< boolalpha << sortedArray(array1, 5)<< endl;
    cout << "Array 2 is sorted: "<< boolalpha << sortedArray(array2, 5)<< endl;
    cout << "Array 3 is sorted: "<< boolalpha << sortedArray(array3, 5)<< endl;

    return 0;
}

