#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <numeric>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &t)
    {
        int n = t.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (st.empty() == false && t[i] >= t[st.top()])
            {
                st.pop();
            }
            if (st.empty())
            {
                ans[i] = 0;
            }
            else if (t[i] < t[st.top()])
            {
                ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};

int main()
{
    vector<int> ans = {73, 74, 75, 71, 69, 72, 76, 73};
    Solution s;
    vector<int> arr;

    arr = s.dailyTemperatures(ans);
    for (int &it : arr)
    {
        cout << it << " ";
    }
    return 0;
}