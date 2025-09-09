#include <iostream>
using namespace std;

// // Functions definition 
//  int printHellow () {
//      cout << "hello\n";
//      return  3;
     
//  }

// int main() {
//     // Function call / invoke 
//     // int val = printHellow();
    
//     cout << printHellow() << endl;

//     return 0;
// }


/* Sum of 2 number */

// Function 
// int sum(int a, int b) {
//     int s = a + b;
//     return s;
// }

// // min of 2 number 
// int minofTwo(int a, int b) { // parameters 
//     if(a < b) {
//         return a;
//     } else {
//         return b;
//     }
// }

// int main() {
//     cout << "min = "<< minofTwo(5 , 3) << endl; // arguments
//     cout << "Sum = " << sum(10, 23)<< endl; 
//     return 0;
// }



 /* practice Questions */

 // Qs 1. Sum of 2 numbers from 1 to N;

//  int sumN(int n) {
//     int sum = 0;

//     for(int i=1; i<=n; i++) {
//         sum += i;
//     }

//     return sum;
//  }

//  int main() {
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;

//     return 0;
//  }


/* Qs 2. Calculate N factorial */ 

int factorialN(int n) {
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout <<  "fact = " <<  factorialN(4) << endl;
    cout <<  "fact = " <<  factorialN(5) << endl;
    return 0;
}


/* Calculate sum of digits of a numbers */

// int sumOfDigits(int num) {
//     int digSum = 0;

//     while(num > 0) {
//         int lastDig = num % 10;
//         num /= 10;

//         digSum += lastDig;
//     }

//     return digSum;
// }

// int main() {
//     cout << "sum = " << sumOfDigits(4539) << endl;
//     return 0;
// }


/* Calculte nCr binomial coefficient for n & r */

// int factorial(int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {
//         fact *= i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {
//     int fact_r = factorial(r);
//     int fact_n = factorial(n);
//     int fact_nmr = factorial(n-r);

//     return fact_n / (fact_r * fact_nmr);
// }

// int main() {
//     int n = 6, r = 3;
//     cout << nCr(n,r) << endl;
    
//     return 0;
// }