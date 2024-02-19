#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{

public:
    bool isPowerOfTwo(int n)
    {
        return (n>0 && ((n&(n-1)))==0);
    }
};

int main(){
    int value=16;
    Solution sol;
    cout<<sol.isPowerOfTwo(value)<<endl;
    return 0;
}


// code logic from codehelpwithmilk

// every power of 2 in bit - just less then the number n gives 0 