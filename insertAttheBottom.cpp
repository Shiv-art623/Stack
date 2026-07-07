#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int x = 25;
    stack<int> ans;
    while(!st.empty()){
        ans.push(st.top());
        st.pop();
    }
    st.push(x);
    while(!ans.empty()){
        st.push(ans.top());
        ans.pop();
    }
     while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;

}//SC= TC = O(n)