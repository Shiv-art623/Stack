#include<bits/stdc++.h>
using namespace std;

string build(string s){
    stack<char> st;
    for(char ch : s){
        if(ch == '#'){
            if(!st.empty()) st.pop();
        }
        else{
            st.push(ch);
        }
    }

    string res = "";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
bool backspaceCompare(string s, string t){
    return build(s) == build(t);
}
int main(){
    string s = "ab#c";
    string t = "ad#c";
    cout<<backspaceCompare(s,t);
    return 0;
}