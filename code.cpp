#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

                            // C++ STL(Standard Template Library)

// int main() {
//     vector<int> vec;// 0

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6);

//     vec.pop_back();
//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "val at idx 2 " << vec[2] << " or " << vec.at(2) << endl;

//     cout << "front " << vec.front() << endl;
//     cout << "back " << vec.back() << endl;

//     return 0;
// }


                        // Erase 

// int main() {
//     //vector<int> vec = {1, 2, 3, 4, 5};
//     // vector<int> vec(10, -1); // dynamic programing - tabulation DP[][]

//     vector<int> vec = {1, 2, 3, 4, 5};
//     // vector<int> vec2(vec1);
//     // vec.erase(vec.begin() + 2);
//     vec.erase(vec.begin() + 1, vec.begin() + 3);

//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return  0;
// }

                        // Insert 

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     //vec.insert(vec.begin() + 2, 100);
//     //vec.clear();

//     for(int val : vec) {
//         cout << val << " ";
//     }

//     cout << endl;

//     cout << "size : " << vec.size() << endl;
//     cout << "cap : " << vec.capacity() << endl;
//     cout << "is empty : " << vec.empty() << endl;

//      return 0;
// }



                                // Vector(Iterators)


// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << "vec.begin : " << *(vec.begin()) << endl;
//     cout << "vec.end : " << *(vec.end()) << endl; // not give it is 5 ,it is give it 0

//     return 0;
// }



                                // Iterators 


// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5};


//     // vector<int>:: iterator it;
//     // for(it = vec.begin(); it != vec.end(); it++) {
//     //     cout << *(it) << " ";
//     // }
//     // cout << endl;

//                 // Reverse Iterators  

//     //vector<int>::reverse_iterator it;

//     for(auto it = vec.rbegin(); it != vec.rend(); it++) {
//         cout << *(it) << " ";
//     }

//     cout << endl;


//     return 0;
// }




                                    // List 

// int main() {
//     list<int> l = {1, 2, 3, 4, 5};

//     // l.push_back(1);
//     // l.push_back(2);
//     // l.push_front(3);
//     // l.push_front(5);

//     // l.pop_back();
//     // l.pop_front();

//     for(int val : l) {
//         cout << val << " ";
//     }

//     cout << endl;
//     return 0;
// }



                                // Deque (double ended queue)


// int main() {
//     deque<int> d = {1, 2, 3, 4, 5};

//     for(int val : d) {
//         cout << val << " ";
//     }

//     cout << endl; 
//     cout << d[2] << endl;

//     return 0;
// }



                            // Pair 


// int main() {
//     //pair<int,int> p = {3, 5};
//     //pair<string, int> p = {"Rishi", 4};
//     // pair<int, pair<char, int>> p  = {1, {'a', 3}};
//     // cout << p.first << endl;// 1
//     // cout << p.second.first << endl; // a
//     // cout << p.second.second << endl; // 3

//     vector<pair<int, int>> vec = {{1,3}, {2, 3}, {3, 4}};

//     vec.push_back({4,5}); // insert
//     vec.emplace_back(4,5); // in place objects create

//     for(auto p : vec) {
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }



                                // Stack 

// int main() {
//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     stack<int> s2;
//     s2.swap(s);
//     cout << "s size : " << s.size() << endl; // 0
//     cout << "s2 size : " << s2.size() << endl; // 3

//     //cout << "top = " << s.top() << endl;

//     // while(!s.empty()) {
//     //     cout << s.top() << " ";
//     //     s.pop(); 
//     // }

//     // cout << endl; 

//     return 0;
// }




                                // Queue

// int main() {
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     while(!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;

//     return 0;
// } 


                                // Priority Queue 


// int main() {
//     // priority_queue<int> q;
//     priority_queue<int, vector<int>, greater<int>> q;

//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

//     while(!q.empty()) {
//         cout << q.top() << " ";
//         q.pop();
//     }
//     cout << endl;

//     return 0;
// } 



                                // Map 


// int main() {
//     map<string,int> m;

//     m["tv"] = 100;
//     m["laptop"] = 100;
//     m["headphones"] = 50;
//     m["tablets"] = 120;
//     m["watch"] = 50; 

//     // m.insert{"Camera", 25}; 
//     m.emplace("watch", 50);

//     m.erase("tv");

//     for(auto p : m) {
//         cout << p.first << " " << p.second << endl;
//     }

//     if(m.find("camera") != m.end()) {
//         cout << "found\n";
//     } else {
//         cout << "not found\n";
//     }
//     return 0;
// }



                            // Unordered Map 


// int main() {
//     unordered_map<string, int> m;

//     m.emplace("tv", 100);
//     m.emplace("leptop", 100);
//     m.emplace("watch", 100);
//     m.emplace("fridge", 100);

//     for(auto p : m) {
//         cout << p.first << " " << p.second << endl;
//     }


//     return 0;
// }




                                // Set 


// int main() {
//     // set<int> s;
//     // multiset<int> s;
//     unordered_set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);


//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);

//     // cout << "lower bound = " << *(s.lower_bound(4)) << endl; // 4

//     for(auto val : s) {
//         cout << val << " ";
//     }

//     cout << endl;
    
//     return 0;
// }



                                    // Algorithms 


// 1. Sorting

// bool comparator(pair<int, int> p1, pair<int, int > p2) {
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;

//     if(p1.first < p2.first) return true;
//     else return false;
// }

// int main() {
//     // int arr[5] = {3, 5, 1, 8, 2};
//     // vector<int> vec = {3, 5, 1, 8, 2};
//     vector<pair<int, int>> vec = {{3,1},  {2,1}, {7,1}, {5,2}};


//     // sort_heap(arr, arr + 5);?
//     //sort_heap(vec.begin(), vec.end(), greater<int>());
//     sort_heap(vec.begin(),vec.end(), comparator);

//     for(auto p : vec) {
//        // cout <<  val << " ";
//        cout << p.first << " " << p.second << endl;
//     }

//     // cout << endl;

//     return 0;
// }




                            // Reverse 


int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    reverse(vec.begin(), vec.end());

    for(int val : vec) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
