#include <iostream>
using namespace std;

// decimal to Binary  

// int decToBinary(int decnum) {
//     int ans = 0, pow = 1;

//     while(decnum > 0) {
//         int rem = decnum % 2;
//         decnum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }

//     return ans;
// }

// int main() {
//     int decNum = 50;

//     for(int i=1; i<=10; i++) {
//         cout << decToBinary(i) << endl;
//     }
//     // cout << decToBinary(decNum) << endl;

//     return 0;
// }


// Binary to decimal 

int binToDecimal(int binNum) {
    int ans = 0, pow = 1;

    while(binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans; // Dicimal from 
}

int main() {
    cout << binToDecimal(1100101) << endl;
    return 0;
}