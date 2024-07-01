// time complexity o(logn)
// space complexity o(1)
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
    int search(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[low]<=arr[mid]){
                if(arr[low]<=k && k<=arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(arr[mid]<=k && k<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }

        }
        return -1;
    }
};

int main()
{
    vector<int>arr={4,5,6,7,0,1,2};
    Solution s;
    int ans=0;
    ans=s.search(arr,9);
    cout<<ans;
    return 0;
}