// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution
// {
// public:
//     vector<int> sortedSquares(vector<int> &nums)
//     {
//         vector<int> ans;
//         ans = nums;
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             ans[i] = ans[i] * nums[i];
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };

// int main()
// {
//     vector<int> v = {-4, -1, 0, 3, 10};
//     Solution s;
//     vector<int> ans = s.sortedSquares(v);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// time complexity nlogn
// not good need to be fixed
// now working on optimized solution

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size() - 1;
        vector<int> ans1;
        vector<int> ans2;

        int start = 0;
        int end = n;
        while (start <= end)
        {
            int startsq = nums[start] * nums[start];
            int endsq = nums[end] * nums[end];
            if (startsq > endsq)
            {
                ans1.push_back(startsq);
                start++;
            }
            else if (startsq < endsq)
            {
                ans1.push_back(endsq);
                end--;
            }
            else if ((startsq == endsq) && (start != end))
            {

                ans1.push_back(startsq);
                ans1.push_back(endsq);
                start++;
                end--;
            }
            else if ((startsq == endsq) && (start == end))
            {

                ans1.push_back(startsq);
                break;
            }
        }

        for (int i = n; i >= 0; i--)
        {
            ans2.push_back(ans1[i]);
        }
        return ans2;
    }
};

int main()
{
    vector<int> v = {-4, -1, 0, 3, 10};
    Solution s;
    vector<int> ans = s.sortedSquares(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}



// Approach 2 also thought by me 
// time complexity o(n)
// space complexity o(n)



// and first question to solve without seeing topic or hint