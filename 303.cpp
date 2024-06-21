// #include <iostream>
// #include <vector>
// using namespace std;

// class NumArray {
// public:
//     vector<int> arr;
//     NumArray(vector<int>& nums) {
//         arr = nums;
//     }
    
//     int sumRange(int left, int right) {
//         int sum = 0;
//         while (left <= right) {
//             sum += arr[left];
//             left++;
//         }
//         return sum;
//     }
// };

// int main() {
//     // Test case input
//     vector<int> nums = {-2, 0, 3, -5, 2, -1};
//     NumArray* obj = new NumArray(nums);
    
//     // Expected function calls and their arguments
//     vector<pair<int, int>> queries = {{0, 2}, {2, 5}, {0, 5}};
    
//     // Performing the queries and printing results
//     for (auto& query : queries) {
//         int left = query.first;
//         int right = query.second;
//         int result = obj->sumRange(left, right);
//         cout << result << endl;
//     }
    
//     delete obj; // Clean up the dynamically allocated object
//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr = nums;
        for(int i=1;i<nums.size();i++){
            arr[i]=arr[i-1]+nums[i];
        }

    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        if(left==0){
            return arr[right];
        }
        return arr[right]-arr[left-1];
    }
};

int main() {
    // Test case input
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray* obj = new NumArray(nums);
    
    // Expected function calls and their arguments
    vector<pair<int, int>> queries = {{0, 2}, {2, 5}, {0, 5}};
    
    // Performing the queries and printing results
    for (auto& query : queries) {
        int left = query.first;
        int right = query.second;
        int result = obj->sumRange(left, right);
        cout << result << endl;
    }
    
    delete obj; // Clean up the dynamically allocated object
    return 0;
}
