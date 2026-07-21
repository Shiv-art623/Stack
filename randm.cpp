#include<bits/stdc++.h>
using namespace std;

int maxActiveSectionsAfterTrade(string s) {
        int onesCnt = 0;
        for(char c : s){
            if(c == '1') onesCnt++;
        }
        string t = "1"+s+"1";
        vector<pair<char,int>> ans;
        for(char c : t){
            if(ans.empty() || ans.back().first!=c) ans.push_back({c,1});
            else ans.back().second++;
        }
        int gain = 0;
        for(int i =1; i+1<ans.size(); i++){
            if(ans[i].first == '1' && ans[i-1].first=='0' && ans[i+1].first=='0'){
                gain = max(gain,ans[i-1].second+ans[i+1].second);
            }
        }
        return onesCnt+gain;
    }
    int main(){
        string s = "0100";
        cout<<maxActiveSectionsAfterTrade(s);
        return 0;
    }
    //TC = O(n) 