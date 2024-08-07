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

    unordered_map<int, string> belowTen = {{0, ""}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    unordered_map<int, string> belowTwenty = {{10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}};
    unordered_map<int, string> belowHundered = {{2, "Twenty"}, {3, "Thirty"}, {4, "Forty"}, {5, "Fifty"}, {6, "Sixty"}, {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}};

    string solve(int num) {
        if (num < 10) {
            return belowTen[num];
        }

        if (num < 20) {
            return belowTwenty[num];
        }

        if (num < 100) {
            return belowHundered[num / 10] + ((num % 10 != 0) ? " " + belowTen[num % 10] : "");
        }

        if (num < 1000) {
            return belowTen[num / 100] + " Hundred" + ((num % 100 != 0) ? " " + solve(num % 100) : "");
        }

        if (num < 1000000) {
            return solve(num / 1000) + " Thousand" + ((num % 1000 != 0) ? " " + solve(num % 1000) : "");
        }

        if (num < 1000000000) {
            return solve(num / 1000000) + " Million" + ((num % 1000000 != 0) ? " " + solve(num % 1000000) : "");
        }

        return solve(num / 1000000000) + " Billion" + ((num % 1000000000 != 0) ? " " + solve(num % 1000000000) : "");
    }

public:
    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        return solve(num);
    }
};


int main()
{
    long long int numer =123;
    Solution s;

    cout<<s.numberToWords(numer);
    return 0;
}