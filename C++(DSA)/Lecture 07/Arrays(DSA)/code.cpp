#include <iostream>
using namespace std;

/* Arrays in loop */

// int main() {
//     int size = 5;
//     int marks[size];

//     for(int i=0; i<size; i++) {
//         cin >> marks[i];
//     }

//     // Loop : 0 to size-1

//     for(int i=0; i<size; i++) {
//         cout << marks[i] << endl;
//     }

//     return 0;
// }

 

 /* we fine out smallest / largest in an array */

// int main() {
//     int nums[] = {5, 15, 22, 1, -15, 25};
//     int size = 6;

//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;
//     int smallIndex = 0;
//     int largIndex = 0;

//     for(int i=0; i<size; i++) {
//         if(nums[i] < smallest) {
//             smallest = nums[i];
//             smallIndex = i;
//         }

//         if(nums[i] > largest) {
//             largest = nums[i];
//             largIndex = i;
//         }

//         // smallest = min(nums[i], smallest);
//         // largest = max(nums[i], largest);
//     }

//     cout << "small Index = " << smallIndex << endl;
//     cout << "smallest = " << smallest << endl;
//     cout << "larg Index = " << largIndex << endl;
//     cout << "largest = " << largest << endl;

//     return 0;
// }


/* pass by refrence */

// void changeArr(int arr[], int size) {
//     cout << "in function\n";
//     for(int i=0; i<size; i++) {
//         arr[i] = 2* arr[i];
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3};
//     changeArr(arr, 3);

//     cout << "in main\n";

//     for(int i=0; i<3; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl; 
//     return 0;
// }


/* liner search */

// int linerSearch(int arr[], int sz, int target) {

//     for(int i=0; i<sz; i++) {
//         if(arr[i] == target) { // FOUND 
//             return i;
//         }
//     }
//     return -1;  // NOT FOUND
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 2;

   

//     cout << linerSearch(arr, sz, target) << endl;

//     return 0;
// }



/* Reverse an Array */
// solve it 2 pointer  approach     

int reverseArray(int arr[], int sz) {
    int start = 0, end = sz - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start ++;
        end--;
    }
}

int main() {
    int arr[] = {1, 5, 8, 9, 6};
    int sz = 5;
    reverseArray(arr, sz);

    for(int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}