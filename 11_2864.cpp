// Approach 1

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class Solution
// {
// public:
//     string maximumOddBinaryNumber(string s)
//     {
//         sort(s.rbegin(), s.rend());
//         for (int i = s.size() - 1; i >= 0; i--)
//         {
//             if (s[i] == '1')
//             {
//                 swap(s[i], s[s.size() - 1]);
//             }
//         }
//         return s;
//     }
// };

// int main()
// {
//     string v = "010";
//     Solution s;
//     cout << s.maximumOddBinaryNumber(v) << endl;
// }

// time complexity-(nlogn)
// space complexity-o(1)

// Approach -2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int count1 = 0;
        int count0 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                count1++;
            else
            {
                count0++;
            }
        }
        string ans = string(count1 - 1, '1') + string(count0, '0') + '1';
        return ans;
    }
};

int main()
{

    string v = "0101";
    Solution s;
    cout << s.maximumOddBinaryNumber(v) << endl;
    return 0;
}



// both solution not by me 
// but try harder