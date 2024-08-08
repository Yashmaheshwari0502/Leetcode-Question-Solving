#include <iostream>
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

class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart,
                                        int cStart)
    {
        vector<vector<int>> result;
        vector<vector<int>> direction = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        int dir = 0;
        int steps = 0;
        result.push_back({rStart, cStart});
        while (result.size() < rows * cols)
        {
            if (dir == 0 || dir == 2)
            {
                steps++;
            }

            for (int count = 0; count < steps; count++)
            {
                rStart += direction[dir][0];
                cStart += direction[dir][1];
                if (rStart >= 0 && rStart < rows && cStart >= 0 &&
                    cStart < cols)
                {
                    result.push_back({rStart, cStart});
                }
            }
            dir = (dir + 1) % 4;
        }
        return result;
    }
};

int main()
{
    int rows = 5;
    int cols = 6;
    int rStart = 1;
    int cStart = 4;
    Solution s;
    vector<vector<int>> value = s.spiralMatrixIII(rows, cols, rStart, cStart);
    for (vector<int> &it : value)
    {
        for(int &i:it){
            cout<<i<<" ";
        }

        cout<<endl;
    }
    return 0;
}