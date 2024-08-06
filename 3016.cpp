#include<iostream>
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
class Solution {
public:
    int minimumPushes(string word) {
        vector<int>mp(26,0);

        for(char &ch:word){
            mp[ch-'a']++;
        }
        int result=0;
        sort(mp.begin(),mp.end(),greater<int>());
        for(int i=0;i<26;i++){
            int freq=mp[i];
            int press=i/8+1;
            result+=freq*press;

        }
        return result;
    }
};
int main()
{
    string str="abcde";
    Solution s;
    cout<<s.minimumPushes(str);
    return 0;
}