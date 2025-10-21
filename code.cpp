#include <iostream>
#include <string>
#include <vector>
using namespace std;

                                    // String (character Array)

// int main() {
//     // char str[] = {'a', 'b', 'c', '\0'};
//     // char str[] =  "hello"; // string literals 

//     // cout << strlen(str) << endl; // constant pointers

//     char str[12];

//     cout << "enter char array : ";
//     // cin >> str;
//     cin.getline(str, 12); // de-limiter -> '$';

//     // cout << "output : " << str << endl;

//     for(char ch : str) {
//         cout << ch << " ";
//     }

//     cout << endl;
    
//     return 0;
// }


                                // String 



// int main() {

//     string str1 = "collage";
//     string str2 = "collage";

//     // cout << (str1 == str2) << endl;
//     cout << str1.length() << endl;

//     // string str3 = str1 + str2; // concatenation
//     // cout << str3 << endl;
 
//     // string str = "apna collage"; // dynamic => runtime resize
//     // cout << str << endl;

//     // str = "hello";
//     // cout << str << endl;

//     // char chArr[] = "apna collage";

//     return 0;

// }




                                    // Loop on a String


// int main() {
//     string str = "apna collage.";

//     for(int i=0; i<str.length(); i++) {
//         cout << str[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }



                                    // Reverse a String 


int main() {
    string str = "apna collage.";

    reverse_iterator(str.begin(), str.end());

    cout << str << endl;

    return 0;
}
