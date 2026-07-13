#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(int arr[], int n){
    stack<int> st;
    vector<int> ans(n,1);
    for(int i = n-1; i>=0; i--){
        while(!st.empty() && arr[i]> arr[st.top()]){
            ans[st.top()] = st.top()-i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()] = st.top()+1;
        st.pop();
    }
    return ans;
}
int main(){
    int arr[] = {100,80,55,70,60,75,85};
    vector<int>ans = stockSpan(arr,7);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//TC = O(n) and sc = O(n)