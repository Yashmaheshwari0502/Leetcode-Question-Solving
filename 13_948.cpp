#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());
        int start = 0;
        int end = tokens.size() - 1;
        int score = 0;
        int max_score = 0;

        while (start <= end)
        {
            if (power >= tokens[start])
            {
                power = power - tokens[start];
                score += 1;
                start += 1;
                max_score = max(max_score, score);
            }
            else if (score > 0)
            {
                power = power + tokens[end];
                score -= 1;
                end -= 1;

            }
            else{
                break;
            }

        }
        return max_score;
    }
};

int main()
{
    vector<int> v = {200,100,300,400};
    int power = 200;
    Solution s;
    cout << s.bagOfTokensScore(v, power) << endl;
    return 0;
}