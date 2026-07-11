#include<bits/stdc++.h>
using namespace std;

vector<int> GreaterNOLeft(int arr[], int n){
   vector<int> ans(n, -1);
   stack<int> st;
   for(int i = n-1; i>=0; i--){
    while(!st.empty() && arr[i] > arr[st.top()]){
         ans[st.top()]= arr[i] ;
        st.pop();
    }
    st.push(i);
   }
   return ans;
}
int main(){
    int arr[] = {4,13,11,5,9,7,8,6};
    vector<int> ans = GreaterNOLeft(arr,8);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}