#include <iostream>
using namespace std;

// square pattern 

// int main() {
//     int n = 4;

//     for(int i=0; i<n; i++) { // outer 
//         char ch = 'A';

//         for(int j=0; j<n; j++) { // inner
//             cout << ch << " ";
//             ch = ch+1;
//         }

//         cout << endl;
//     }
//     return 0;
// }

// 2. 

// int main() {
//     int n = 3;
//     int num = 1;
//     for(int i=0; i<n; i++) {

//         for(int j=0; j<n; j++) {
//             cout << num << " ";
//             num++;
//         }

//         cout << endl;
//     }
//     cout << "after patterns = " << num << endl;

//     return 0;
// }

/* Square pattern with character */

    // int main() {
    //     int n = 3;
    //     char ch = 'A';

    //     for(int i=0; i<n; i++) {

    //         for(int j=0; j<n; j++) {
    //             cout << ch << " ";
    //             ch++;
    //         }

    //         cout << endl;
    //     }

    //     return 0; 
    // }


    /* Triangle Pattern    * 
                           * *
                           * * * 
                           * * * *     */

    // int main() {
    //     int n = 4;

    //     for(int i=0; i<n; i++) {

    //         for(int j=0; j<i+1; j++) {
    //             cout << "* ";
    //         }

    //         cout << endl;
    //     }
    //     return 0; 
    // }

    /*  1 
        2 2 
        3 3 3 
        4 4 4 4   */



    // int main() {
    //     int n = 4;
        
    //     for(int i=0; i<n; i++) {
            
    //         for(int j=0; j<i+1; j++) {
    //             cout << (i+1) << " ";
                
                
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    // }


    /*  A 
        B B 
        C C C 
        D D D D  */


    // int main() {
    //     int n = 4;

    //     for(int i=0; i<n; i++) {

    //         for(int j=0; j<i+1; j++) {
    //             cout << char('A' + i) << " ";
    //         }

    //         cout << endl;
    //     }

    //     return 0;
    // }


    /* 1 
       1 2 
       1 2 3 
       1 2 3 4  */


    //     int main() {
    //     int n = 4;
        
    //     for(int i=0; i<n; i++) {
    //         // int num = 1; rule 1
    //         for(int j=1; j<=i+1; j++) { // rule 2
    //            cout << j << " ";
    //         //    num++;
    //         }

    //         cout << endl;
    //     }

    //     return 0;
    // }


    /* Reverse Triangle Pattern 
                                        1 
                                        2 1 
                                        3 2 1 
                                        4 3 2 1   */


    // int main() {
    //     int n = 4;

    //     for(int i=0; i<n; i++) {
            
    //         for(int j=i+1; j>0; j--) {
    //             cout << j << " ";
                
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    // }

  /*  A
      B A
      C B A
      D C B A */

    //   int main() {
    //     int n = 4;

    //     for(int i=0; i<n; i++) {

    //         for(int j=i; j>=0; j--) {
    //             cout << char('A' + j) << " ";
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    //   }


    /* Floyd's Triangle pattern  
          1 
          2 3 
          4 5 6 
          7 8 9 10  */
     
    //  int main() {
    //     int n = 4;
    //     int num = 1;
        
    //     for(int i=0; i<n; i++) {

    //         for(int j=0; j<i+1; j++) {
    //             cout << num << " ";
    //             num++;
    //         }

    //         cout << endl;
    //     }
        
    //     return 0;
    //  }


    /* A  
       B C 
       D E F 
       G H I J */


    // int main() {
    //     int n = 4;
    //     char ch = 'A';

    //     for(int i=0; i<n; i++) {

    //         for(int j=0; j<i+1; j++) {
    //             cout << ch << " ";
    //             ch++;
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    // }


    /* Inverted Triangle Pattern  
            
            1 1 1 1 
              2 2 2
                3 3 
                  4 */

    // int main() {
    //     int n = 4;

    //     for(int i=0; i<n; i++) {
    //         // spaces
    //         for(int j=0; j<i; j++) {
    //             cout << " ";
    //         }
    //         // nums
    //         for(int j=0; j<n-i; j++) {
    //             cout << (i+1);
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    // }

    /* AAAA
        BBB
         CC
          D  */


    // int main() {
    //     int n = 4;

    //     for(int i=0; i<n; i++) {
    //         // spaces 
    //         for(int j=0; j<i; j++) {
    //             cout << " ";
    //         }
    //         // nums 
    //         for(int j=0; j<n-i; j++) {
    //             cout << char('A' + i) ;
    //         }

    //         cout << endl;
    //     }
    //     return 0;
    // }


    /* Pyramid Pattern   

            1   
           121  
          12321 
         1234321  */


    //     int main() {
    //         int n = 4;
        
    //     for(int i=0; i<n; i++) {
    //         // spaces = n-i-1;
    //         for(int j=0; j<n-i-1; j++){
    //             cout << " ";
    //         }
    //         // nums = i+1;
    //         for(int j=1; j<=i+1; j++) {
    //             cout << j;
    //         }

    //         // nums2;
    //         for(int j=i; j>0; j--) {
    //             cout << j;
    //         }

    //         cout << endl;
    //     }
    //     return 0;

    // }


    /* Hollow Diamond Pattern */

    // int main() {
    //     int n = 4;
    //     // top 
    //     for(int i=0; i<n; i++){
    //         //spaces
    //         for(int j=0; j<n-i-1; j++) {
    //             cout << " ";
    //         }
    //         cout << "*";

    //         if(i != 0) {
    //             // spaces 
    //             for(int j=0; j<2*i-1; j++) {
    //                 cout << " ";
    //             }

    //             cout << "*";
    //         }
    //         cout << endl;
    //     }

    //     // bottom 
    //     for(int i=0; i<n-1; i++) {
    //         //spaces 
    //         for(int j=0; j<i+1; j++) {
    //             cout << " ";
    //         }
    //         cout << "*";

    //         // 

    //         if(i != n-2) {
    //             // spaces 
    //             for(int j=0; j<2*(n-i)-5; j++) {
    //                 cout << " ";
    //             }
                 
    //              cout << "*";
    //         }

    //         cout << endl;
    //     }
        
    //     return 0;
    // }



    // Betterfly Pattern 

  // *      *
  // **    **
  // ***  ***
  // ********
  // ********
  // ***  ***
  // **    **
  // *      *

    int main()  {
      int n = 4;

      // top 
      for(int i=1; i<=n; i++) {
         // stars 
         for(int j=1; j<=i; j++) {
            cout << "*";
         }

         // spaces 
         for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
         }

         // stars 
         for(int j=1; j<=i; j++) {
            cout << "*";
         }

         cout << endl;

      }

      // bottom 

      for(int i=n; i>=1; i--) {
          // stars 
          for(int j=1; j<=i; j++) {
            cout << "*";
          }

          // spaces 
          for(int j=1; j<=2*(n-i); j++) {
              cout << " ";
          }

          // stars 
          for(int j=1; j<=i; j++) {
              cout << "*";
          }

          cout << endl;
      }
      return 0;
    }