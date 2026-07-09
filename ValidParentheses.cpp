#include<bits/stdc++.h>
using namespace std;

bool Valid(string s){
    stack<char> st;
    for(int i =0; i<s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(s.empty()) return false;
            else st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s = "((()))";
    cout<<Valid(s);
    return 0;
}