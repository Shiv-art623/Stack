#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(int arr[], int n){
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i =0; i<n; i++){
        while(!st.empty() && arr[i] < arr[st.top()] ){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main(){
    int arr[] = {7,9,12,10,14,8,3,6,9};
    vector<int> ans = nextSmaller(arr,9);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}