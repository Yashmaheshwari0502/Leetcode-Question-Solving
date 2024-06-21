#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        int ans[27]={0};
        for(int i=0;i<n;i++){
          ans[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
          ans[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(ans[i]!=0){
                return 0;
            }
        }
        return 1;
    }
};

int main(){
    string s="anagram";
    string t="nagaram";
    Solution sol;
    cout<<sol.isAnagram(s,t)<<endl;
    return 0;
}