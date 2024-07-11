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
        int r=matrix.size();
        int c=matrix[0].size();
        int start=0;
        int end=c-1;
        while(start<r && end>=0){
            if(matrix[start][end]==target){
                return true;
            }
            if(matrix[start][end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>>matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    Solution s;
    cout<<boolalpha<<s.searchMatrix(matrix,18);

    return 0;
}

