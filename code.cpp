#include <iostream>
#include <vector>
using namespace std;

                                // Merge 2 Sorted Arrays 

void merge(vector<int> & A, int m, vector<int>& B, int n) {
    int idx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }
    while(j>= 0) {
        A[idx--] = B[j--];
    }
}


                                // Next Permutation 

void nextPermutation(vector<int>& arr) { // O(n)
        // Find The  pivot
            int pivot = -1, n = arr.size();

            for(int i= n-2; i>=0; i--) {
                if(arr[i] < arr[i+1]) {
                    pivot = i;
                    break;
                }
            }

             if(pivot == -1) {
                reverse(arr.begin(), arr.end()); // in place changes 
                return;
            }

            //  2nd step : Fint right most element 

            for(int i=n-1; i>pivot; i--)  {
           
                if(arr[i] > arr[pivot]) {
                    swap(arr[i], arr[pivot]);
                    break;
                }
            }

            // 3rd step : reverse order element (piv+1 to n-1)
            // reverse(arr.begin() +  piv + 1,  arr.end());

            int i = pivot + 1;
            int j = n-1;

            while(i<=j) {
                swap(arr[i++], arr[j--]);
                //i++;
                //j--;
            }
    }




// int main() { // merge sort 
//    vector<int> A = {1, 2, 3, 0, 0, 0};
//    vector<int> B = {2, 5, 6};
//    int n = 3, m = 3;

//    merge(A, m, B, n);

    
//     cout << "Merged array: ";
//     for (int x : A) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }


// next permutation

int main() { // this not solve proper in vs code (solve it leedcode)
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    cout << nextPermutation(arr) << endl;

    return 0;
}