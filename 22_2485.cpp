// Approach -1 
// Thought by mee and i didn't look any code
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// using namespace std;

// class Solution
// {
// public:
//     int pivotInteger(int n)
//     {
//         int left = 1;
//         int right = n;
//         int mid = 1;

//         while (mid <= right)
//         {
//             int rightsum = 0;
//             int leftsum = 0;

//             for (int i = 1; i <= mid; i++)
//             {

//                 leftsum = leftsum + i;
//             }
//             for (int i = n; i >= mid; i--)
//             {
//                 rightsum += i;
//             }
//             if (leftsum == rightsum)
//             {
//                 return mid;
//             }

//             mid++;
//         }
//         return -1;
//     }
// };

// int main()
// {
//     int n = 8;
//     Solution s;
//     cout << s.pivotInteger(n) << endl;

//     return 0;
// }



// approach 2 also by me 
// 100 percnet


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
using namespace std;



class Solution
{
public:
    int pivotInteger(int n)
    {
        int left =1;
        int right=n;
        int rightsum=0;
        int leftsum=0;
        int mid =1;
        for(int i=1;i<=n;i=i+1){
            rightsum=rightsum+i;
        }

        for(int i=left;i<=mid;i++){
            if(mid>right){
                break;
            }
            leftsum+=i;
            if(leftsum==rightsum){
                return mid;
            }
            rightsum-=i;
            mid++;
        }
        return -1;
    }
};

int main()
{
    int n = 1;
    Solution s;
    cout << s.pivotInteger(n) << endl;

    return 0;
}