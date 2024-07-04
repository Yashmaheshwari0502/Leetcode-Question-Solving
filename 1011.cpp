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
    int check(int mid, vector<int>&weights,int days){
        int totalweight=0;
        int totalday=1;
        for(int i=0;i<weights.size();i++){
            if(totalweight+weights[i]<=mid){
                totalweight+=weights[i];
            }
            else{
                totalday+=1;
                totalweight=weights[i];
            }
        }
        return totalday;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN;
        int high=0;
        int ans=0;
        for(int i=0;i<weights.size();i++){
            high=high+weights[i];
            low=max(low,weights[i]);
        }

        while(low<=high){
            int mid=(high+low)/2;
            int value=check(mid,weights,days);
            if(value<=days){
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
    vector<int>weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    Solution s;
    int ans=0;
    ans=s.shipWithinDays(weights,days);
    cout<<ans;
    return 0;
}