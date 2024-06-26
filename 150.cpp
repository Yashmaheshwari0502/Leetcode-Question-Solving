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
    int evalRPN(vector<string> &tokens)
    {
        int n = tokens.size();

        stack<int> st;
        for (string s : tokens)
        {
            if (s == "+" || s == "-" || s == "*" || s == "/")
            {
                int value1 = st.top();
                st.pop();
                int value2 = st.top();
                st.pop();
                if (s == "+")
                {
                    st.push(value2 + value1);
                }
                else if (s == "-")
                {
                    st.push(value2 - value1);
                }
                else if (s == "*")
                {
                    st.push(value2 * value1);
                }
                else if (s == "/")
                {
                    st.push(value2 / value1);
                }
            }
            else
            {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};

int main()
{
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    Solution s;
    int ans = 0;
    ans = s.evalRPN(tokens);
    cout
        << ans;
    return 0;
}