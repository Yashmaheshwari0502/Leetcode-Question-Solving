// Time complexity :-o(nlogn)
// Space complexity:-o(n)

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
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> ans;
        map<int, int> mp;
        for (int i = 0; i < heights.size(); i++)
        {
            mp[heights[i]] = i;
        }
        for (auto it : mp)
        {
            ans.push_back(names[it.second]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<string> ans = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};
    Solution s;
    vector<string> arr;

    arr = s.sortPeople(ans, heights);
    for (auto it : arr)
    {
        cout << it<<" " ;
    }
    return 0;
}