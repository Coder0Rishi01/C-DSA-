#include <iostream>
#include <vector>
using namespace std;

                            // Sorting Algorithm

// 1. Bubble sort 

void bubbleSort(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        bool isSwap = false;

        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) { // Array is already sorted  
            return;
        }
    }
}

void  printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
}


// 2. Selection sort 
 
void selectionSort(int arr[], int n) {  // O(n^2)

    for(int i=0; i<n-1; i++) {
        int smallestIdx = i; // unsorted part starting 

        for(int j = i+1; j<n; j++) {
           if(arr[j] < arr[smallestIdx]) {
            smallestIdx = j;
           }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}


// 3. Insertion sort 

void insertionSort(int arr[], int n) {  // O(n^2)

    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr; // placing the curr el in its correct position
    }
}


int main() {    
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    //bubbleSort(arr, n);
    //selectionSort(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}