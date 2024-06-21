// #include <iostream>
// #include <algorithm>
// using namespace std;

// class Solution
// {
// public:
//     int minimumLength(string s)
//     {
//         int end = s.size() - 1;
//         int start = 0;
//         while (start <= end)
//         {

//             if (s[start] != s[end])
//             {
//                 break;
//             }
//             else if (s[start] == s[start + 1] && start <= end)
//             {
//                 start++;
//             }
//             else if (s[end] == s[end - 1] && start <= end)
//             {
//                 end--;
//             }
//             else if(s[start] == s[end]  )
//             {
//                 start++;
//                 end--;
//             }
//         }

//         return end - start + 1;
//     }
// };

// int main()
// {
//     string word = "cabaabac";
//     Solution s;
//     cout << s.minimumLength(word) << endl;
// }




// above code was thought be me and it didnt work
// sanskar told i didnt understand the concept of while loop
// need to do three sum for understand concept of while loop

// below code correct




#include <iostream>
#include <algorithm>
using namespace std;

int speedup = []
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();
class Solution
{
public:
    int minimumLength(string s)
    {
        int start = 0;
        int end = s.size() - 1;

        while (start < end && s[start]==s[end])
        {
            char ch = s[start];
            while (start < end && s[start] == ch)
            {
                start++;
            }
            while (end >= start && s[end] == ch)
            {
                end--;
            }
        }
            return end - start + 1;
    }
};

int main()
{
    string word = "aa";
    Solution s;
    cout << s.minimumLength(word) << endl;
}


// time complexity -o(n)
// space complexity -o(1)