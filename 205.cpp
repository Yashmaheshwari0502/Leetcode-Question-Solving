// Not Solved by me 
// only thought how to solve 
// time complexity:O(n)
// space complexity:O(1)

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
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        int m = s.size();
        for (int i = 0; i < m; i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];

            if (mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 || 
            mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)
            {
                return false;
            }
            mp1[ch1]=ch2;
            mp2[ch2]=ch1;
        }
        return true;
    }
};

int main()
{
    string v = "foo";
    string t = "bar";
    Solution s;
    cout << boolalpha << s.isIsomorphic(v, t) << endl;
    return 0;
}