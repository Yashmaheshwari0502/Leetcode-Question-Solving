/*
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


*/


// solution made according to the test cases 
// solution not optimized




// approach -2


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int> count(n+1);
       for(vector<int> &vec:trust){
        int u=vec[0];
        int v=vec[1];

        count[u]--;
        count[v]++;
       }
       for(int i=1;i<=n;i++){
        if(count[i]==n-1){
            return i;
        }
       }
       return -1;
    }
};




int main()
{
    int n=4;
    vector<vector<int>> trust={{1,3},{1,4},{2,3},{2,4},{4,3}};
    Solution sol;
    cout<<sol.findJudge(n,trust);
    return 0;
    return 0;
}



// This solution is provided by codestory with mil
// my solution is also correct but it is also good and better than mine