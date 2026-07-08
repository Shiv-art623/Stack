#include<bits/stdc++.h>
using namespace std;

 int removeConsecutiveSame(vector<string>& arr) {
        // code here
        stack<string> st;
        for(int i =0; i<arr.size(); i++){
        if(st.empty()) st.push(arr[i]);
        else if(st.top() != arr[i]) st.push(arr[i]);
        else st.pop();
    }
    return st.size();
    }
    int main(){
        vector<string> v = {"ab", "ac", "da", "da", "ac", "ea"};
        cout<<removeConsecutiveSame(v);
        return 0;
    }