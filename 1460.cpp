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
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
     unordered_map<int,int>mp;
     for(auto it: target){
        mp[it]++;
     }
     for(auto it: arr){
        mp[it]--;
     }
     for(auto it : mp){
        if(it.second!=0){
            return false;
        }
     }
     return true;
    }
};

int main()
{
    vector<int>target={1,2,3,4};
    vector<int>arr={2,4,1,3};
    Solution s;
    cout<<boolalpha<<s.canBeEqual(target,arr);

    return 0;
}