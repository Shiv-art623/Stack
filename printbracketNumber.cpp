#include<bits/stdc++.h>
using namespace std;

vector<int> PrintBracketNo(string &s){
    stack<int> st;
    vector<int> ans;
    int count = 0;

    for(int i =0; i<s.size(); i++){
        if(s[i] == '('){
            count++;
            st.push(count);
            ans.push_back(count);
        }
        else if(s[i] == ')'){
          ans.push_back(st.top());
          st.pop();
        }
    }
    return ans;
}
int main(){
    string s = "(aa(bdc))p(de)";
    vector<int> ans = PrintBracketNo(s);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}