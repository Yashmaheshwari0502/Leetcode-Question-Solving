#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1){
            return 1;
        }
        if(trust.size()==0 && n==2){
            return -1;
        }
        unordered_map<int,int> m;
        int size =trust.size();
        for(int i=0;i<size;i++){
            m[trust[i][1]]++;
        }
        int value=n-1;
        int ans=-1;
        for(auto it :m){
            if(it.second==n-1){
               ans=it.first;
            }
        }
        for(int i=0;i<size;i++){
            if(trust[i][0]==ans){
                return -1;
            }
        }
        return ans;
    }
};



int main(){
    int n=4;
    vector<vector<int>> trust={{1,3},{1,4},{2,3},{2,4},{4,3}};
    Solution sol;
    cout<<sol.findJudge(n,trust);
    return 0;
}



// solution made according to the test cases 
// solution not optimized