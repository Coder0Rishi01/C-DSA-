#include <iostream>
#include <vector>   
using namespace std;


    // VECTOR SYNTEX 

// int main() {
//     vector<int> vec(5, 0);
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     cout << vec[3] << endl;
//     cout << vec[4] << endl;
//     return 0;
// }

// int main() {
//     vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

//     for(char val : vec) {  // for each loop 
//         cout << val << endl;
//     }

//     return 0;
// }



/* VECTOR FUNCTION */

 //     1. Size 

//  int main() {
//     vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

//     cout << "size = " << vec.size() << endl;
    
//     for(char val : vec) {
//         cout << val << endl;
//     }

//     return 0;
//  }


//         2. push - back 

//  int main() {
//     vector<int> vec;

    
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);

//     cout << "after puch_back size = " << vec.size() << endl;

//     // vec.pop_back(); // 3. pop_back 
    
//     // for(int val : vec) {
//     //     cout << val << endl;
//     // }

//     // cout << vec.front() << endl; // 4. front 
//     // cout << vec.back() << endl; // 5. back 
//     cout << vec.at(0) << endl; // 6. at

//     return 0;
//  }

/* static or dynamic allocation */

// int main() {
//     vector<int> vec;

//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);

//     cout << vec.size() << endl; // 5
//     cout << vec.capacity() << endl; // 8

//     return 0;
// }


/* Qs 1. single number */

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    int ans = 0;

    for(int val : nums ) {
        ans = ans ^ val;
    }

    return ans;
}