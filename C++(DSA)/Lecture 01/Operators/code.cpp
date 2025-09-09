#include <iostream>
using namespace std;

// Arithmathic operator (+ , - , * , / , %)

// int main() {
//     int a = 10, b = 5;
//     int sum = a + b;
//     int difference = a - b;
//     int product = a * b;
//     int division = a / b;
//     int modulo = a % b;
//     cout << "sum = " << sum << endl;
//     cout << "difference = " << difference << endl;
//     cout << "product = " << product << endl;
//     cout << "division = " << division << endl;
//     cout << "Modulo = " << modulo << endl;
//     return 0;
// }


// Relational Operator (<, <=, >, >=, ==, !=)

// int main() {
//     // cout << (3 < 5) << endl; // true -> 1;
//     // cout << (3 > 5) << endl; // false -> 0;
//     // cout << (3 <= 5) << endl; //true -> 1;
//     cout << (3 != 5) << endl; 
//     return 0;
// }


// Logical Operator (OR-> ||, AND -> &&, NOT-> !)

// int main() {
//     cout << !(3 < 1) << endl;
//     cout <<( (3 > 1 ) || (3 < 1) )<< endl;
//     return 0;
// }


//Qs 1.  Sum of 2 numbers


int main() {
    int a, b;
    cout << "a : ";
    cin >> a;

    cout << "b : ";
    cin >> b;

    cout << "Sum = " << (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "product = " << (a * b) << endl;
    cout << "division = " << (a / b) << endl;
    cout << "modulo = " << (a % b) << endl;
    
    return 0;
}


// Unary Operators 

// int main() {
//     int a = 10;

//     // int b = a++; // kaam fir update;
//     // int b = ++a; // update -> kaam
//     int b = a--;
//     cout << "a : " <<  b << endl; // 10
//     cout << "b : " <<  a << endl; // 9

//     return 0;
// }