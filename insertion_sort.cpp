#include <iostream>
using namespace std;


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}


void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}


int main() {
    int size;
    
    
    cout << "Enter the number of elements: ";
    cin >> size;

    int array[size]; 

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    insertionSort(array, size);

    cout << "Sorted array in ascending order:\n";
    printArray(array, size);

    return 0;
}
