
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class Solution
// {
// public:
//     int maxArea(vector<int> &height)
//     {
//         int start = 0;
//         int end = height.size() - 1;
//         int mostmax = -1;
//         while (start < end)
//         {
//             int maxi = min(height[start], height[end]) * (end - start);
//             if (maxi > mostmax)
//             {
//                 mostmax = maxi;
//             }
//             if (start < end)
//             {
//                 start++;
//             }
//             else
//             {
//                 end--;
//             }
//         }
//         return mostmax;
//     }
// };

// int main()
// {
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     Solution s;
//     cout << s.maxArea(height) << endl;
//     return 0;
// }


// though by myself
// time complexity-o(n)
// space complexity-o(1)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_value=0;
        int value=0;
        int index=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            if(height[l]>height[r]){
                value=height[r];
            }
            else {
                value=height[l];
            }
            int area=(r-l)*value;
            max_value=max(area,max_value);
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return max_value;
    }
};

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout << s.maxArea(height) << endl;
    return 0;
}

