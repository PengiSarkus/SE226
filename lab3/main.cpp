#include <iostream>
using namespace std;
void swapValues(int* p1,int*p2) {
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *arr << endl;
        arr++;
    }

}
int findMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
void reverseArray(int* arr, int size) {
    for (int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}
int* createArray(int size) {
    int* arr = new int[size];
    return arr;
}
void deleteArray(int* arr) {
    delete[] arr;
}

int main() {
    cout << "Creating dynamic array..." << endl;
    cout << "Enter array size: " << endl;
    int size;
    cin >> size;
    int* arr = createArray(size);
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Array elements: " << endl;
    printArray(arr, size);
    cout << endl;
    cout << "Maximum element : " << findMax(arr, size) << endl;
    cout << "-------------------------------------";
    cout << endl;
    cout << "Swapping two Arrays" << endl;
    cout << "Before swapping" << endl;
    int a = 10;
    int b = 20;
    cout << "a = " << a << " " << "b = " << b << endl;
    swapValues(arr, arr);
    cout << "After swapping" << endl;
    cout << "a = " << a << " " << "b = " << b << endl;
    cout << "-------------------------------------";
    cout << "Reversing Array" << endl;
    reverseArray(arr, size);
    cout << "After reversing Array" << endl;
    printArray(arr, size);
    cout << endl;
    cout << "-------------------------------------";
    cout << "Deleting Array" << endl;
    deleteArray(arr);
    cout << "Memory released successfully." << endl;



    return 0;
}
