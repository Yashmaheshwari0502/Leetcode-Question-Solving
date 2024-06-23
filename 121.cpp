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
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int lowest=0;
        int highest=0;
        for(int i=1;i<n;i++){
            if(prices[i]-prices[lowest]>highest){
                highest=prices[i]-prices[lowest];
            }
            else if(prices[i]<prices[lowest]){
                lowest=i;
            }
        }
        return highest;
    }
};

int main()
{
    vector<int>prices={7,1,5,3,6,4};
    Solution s;
    int value=s.maxProfit(prices);
    cout<<value;
    return 0;
}