#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int a = x;
        long int b = 0;
        while (a > 0) {
            int ans = a % 10;
            b = (b * 10) + ans;
            a = a / 10;
        }
        if (b == x) {
            return true;
        }
        return false;
    }
};


int main() {
    Solution s;
    cout << s.isPalindrome(121) << endl;
    return 0;
}


