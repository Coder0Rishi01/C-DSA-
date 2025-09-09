#include <iostream>
using namespace std;

// int main() {
//     int age;
//     cout << "enter age ";
//     cin >> age;

//     if(age >= 18) {
//         cout << "you can vote";
//     } else {
//         cout << "you can't vote";
//     }

//     cout << endl;

//     return 0;
// }

// int main() {
//     int n;
//     cout << "Enter number : ";
//     cin >> n;

//     if(n%2 == 0) {
//         cout << "even\n";
//     } else {
//         cout << "odd\n";
//     }

//     return 0;
// }


// else if condition

// int main() {
//     int marks;
//     cout << "Enter marks : ";
//     cin >> marks;

//     if(marks >= 90) {
//         cout << "A";
//     } else if (marks >= 80 && marks < 90) {
//         cout << "B";
//     } else {
//         cout << "C";
//     }

//     cout << endl;

//     return 0;
// }

// /Qs 1.  Find character lowercase and uppercase 

// int main() {  // Rule 1.
//     char ch;
//     cout << "Enter character : ";
//     cin >> ch;

//     if(ch >= 'a' && ch <= 'z') { // using by logical uperator (&&)
//         cout << "lowercase\n";
//     } else {
//         cout << "uppercase\n";
//     }

//     return 0;
// }



int main() { // solve by rule 2
    char ch;
    cout << "Enter char : ";
    cin >> ch;

    if(ch >= 65 && ch <= 90) {
        cout << "uppercase\n";
    } else {
        cout << "lowercase\n";
    }

    return 0;
}