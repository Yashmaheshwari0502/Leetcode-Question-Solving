#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{

public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int left = 0;
        int right = arr.size() - 1;
        int mid = (left + right) / 2;
        while (left < right)
        {
            if (arr[mid] < arr[mid + 1])
            {
                left = mid + 1;
            }
            else if (arr[mid] > arr[mid + 1])
            {
                right = mid;
            }
            mid = (left + right) / 2;
        }
        return left;
    }
};

int main()
{
    vector<int> v = {1, 3, 1};
    Solution s;
    cout << s.peakIndexInMountainArray(v) << endl;
    return 0;
}


// i solved that code   in 21 november 2023 
// now i solved it in 9 march 2024
// without looking at the code 
// time complexity :- o(logn)
// space complexity :- o(1)