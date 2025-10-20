#include <iostream>
#include <vector> 
using namespace std;

// This is PairSum 

vector<int>pariSum(vector<int>nums, int target) {
    vector<int> ans;
    int n = nums.size();

    // Brut Froce Approch O(n2)

    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         if(nums[i] + nums[j] == target) {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }


    // 2 Pointer Approch O(n)

    int i =  0, j= n-1;

    while(i < j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum > target) {
            j--;
        } else if(pairSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }


    return ans;
}

    // int main() {
    //      // vector<int> nums = {2, 7, 11, 15};
    //     // int target = 9;

    //     // vector<int> ans = pariSum(nums, target);
    //      // cout << ans[0] << ", " << ans[1] << endl;

    //      retrun 0;
    // }


    // This question is Majority Element 

    int majorityElement(vector<int> nums) {
      int n = nums.size();

    // for (int val : nums) {
    //     int freq = 0;
    //     for (int el : nums) {
    //         if (el == val) {
    //             freq++;
    //         }
    //     }
    //     if (freq > n / 2) {
    //         return val; // Majority element found
    //     }
    // }
    // return -1; // No majority element


        // using sorting solve this question

        
        // sort 
        vector<int> sort(nums.begin(), nums.end());
        // freq count
         int freq = 1, ans = nums[0];
        for(int i=1; i<n; i++) {
            if(nums[i] == nums[i-1]) {
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }
        }
        if(freq > n/2) {
            return ans;
      }
      return ans;
    }


int main() {
   

    vector<int> nums = {1, 2, 2, 1, 1};

    int result = majorityElement(nums);

    if (result != -1)
        cout << "Majority element = " << result << endl;
    else
        cout << "No majority element found" << endl;


    return 0;
}