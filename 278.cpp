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

bool isBadVersion(int value){
    if(value>=4){
        return true;
    }
    return false;
}

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool value=isBadVersion(mid);
            if(value){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

int main()
{
    int n=10;
    Solution s;
    cout<<s.firstBadVersion(n);
    return 0;
}