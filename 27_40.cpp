// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <numeric>
// #include <stack>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// #include <climits>
// using namespace std;

// class Solution
// {
// public:
//     void combination(vector<int> &arr, int index, int target, vector<vector<int>> &ans, vector<int> &ds)
//     {
//         if (index == arr.size())
//         {
//             if (target == 0)
//             {
//                 ans.push_back(ds);
//             }
//             return;
//         }
//         combination(arr, index + 1, target, ans, ds);
//         if (arr[index] <= target)
//         {
//             ds.push_back(arr[index]);
//             combination(arr, index, target - arr[index], ans, ds);
//             ds.pop_back();
//         }
//     }

// public:
//     vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
//     {

//         vector<vector<int>> ans;
//         vector<int> temp;

//         combination(candidates, 0, target, ans, temp);
//         return ans;
//     }
// };

// int main()
// {
//     vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
//     int target = 8;

//     Solution s;
//     vector<vector<int>> ans;
//      ans = s.combinationSum2(arr, target);
//     for (const auto &comb : ans)
//     {
//         for (int num : comb)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



 