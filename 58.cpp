// solved by me and not saw the topics 
// time complexity : o(n)
// space complexity : o(1)

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
    int lengthOfLastWord(string s)
    {
        int n = s.size()-1;
        int count =0;
        while(n>=0){
            if(s[n]!= ' '){
                count++;
                n--;
            }
            else if(count == 0 && s[n]==' '){
                n--;
            }
            else{
                break;
            }
        }
        return count;
    }
};

int main()
{
    string v = "luffy is still joyboy";
    Solution s;
    cout << s.lengthOfLastWord(v) << endl;
    return 0;
}