// Time complexity:o(n)
// space complexity : o(n)

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
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto &it:arr){
            mp[it]++;
        }
        for(auto &it:arr){
            if(mp[it]==1){
                k--;
                if(k==0){
                    return it;
                }
            }
        }


        return "";
    }
};

int main()
{
    vector<string>st={"aaa","aa","a"};
    int k=1;
    Solution s;
    cout<<s.kthDistinct(st,k);
    return 0;
}