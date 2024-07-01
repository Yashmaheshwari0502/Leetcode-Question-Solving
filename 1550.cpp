// time complexity - O(N)
// space complexity - O(1)

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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            if(arr[i]%2!=0 &&arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
            }
        }
        return false;
    }
};

int main()
{
    vector<int>arr={1,2,34,3,4,5,7,23,12};
    Solution s;
    cout<<boolalpha<<s.threeConsecutiveOdds(arr);
    return 0;
}