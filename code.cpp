#include <iostream> 
#include <vector>
using namespace std;

    // Memory Address

// int main() {
//    float price = 100.23;
//    float* ptr = &price;

//    cout << ptr << endl;

//     cout << &price << endl;

//     return 0;
// }


    //     Pointer To pointer

// int main() {
//     // int a = 10;
//     // int* ptr = &a;

//     // int** parPtr = &ptr;

//     // cout << &ptr << endl;
//     // cout << parPtr << endl;

//     // (*Derefrence operator*)
//     // cout << *(&a) << endl;
//     // cout << *(ptr) << endl;

//     // (NULL pointer) 
//     int** ptr = NULL;
//     cout << ptr << endl;
//     return 0;

// }

    // *(Predict output)*

// int main() {
//     int a = 5;
//     int* p = &a;
//     int** q = &p;

//     cout << *p << endl;
//     cout << **q << endl;
//     cout << p << endl;
//     cout << *q << endl;

//     return 0;
// }


 
// pass by Reference 

// void changA(int* ptr) { // pass by reference using pointers
//    *ptr = 20;
    
// }

// void changA(int &b) { // pass by reference using alias
//     b = 20;
// }

// int main() {
//     int a = 10;
//     changA (&a);
//     changA (a);

//     cout << "inside main fnx = " << a << endl; // 20


//     return 0;
// }


            //  Pointer Arithmetic

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;
//     //ptr--;
//     ptr = ptr + 2; // 2int => 8B
//     cout << ptr << endl; // hexadecimal => +4

//     return 0; 
// }


                // Subtract pointer

// int main() {
//     int arr[] = {1, 2, 3, 4, 5} ;
    
//     int* ptr2; // 100
//     int* ptr1 = ptr2 + 2; // 108

//     cout << ptr1 - ptr2 << endl; // 2

//     return 0;
// }


                //  compare pointer

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     int* ptr1;
//     int* ptr2;

//     cout << ptr1 << endl;
//     cout << ptr2 << endl;

//     cout << (ptr1 < ptr2) << endl;

//     return 0;
// }



                    // Predict output this Qs

int main() {
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;

    return 0;
}