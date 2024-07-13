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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low=0;
        int total=row*col;
        int high=total-1;
        while(low<=high){
            int mid=(low+high)/2;
            int value=matrix[mid/col][mid%col];
            if(value==target){
                return true;
            }
            else if(value>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>>mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    Solution s;
    cout<<boolalpha<<s.searchMatrix(mat, target);
    return 0;
}