#include<bits/stdc++.h>
using namespace std;
//Brute force
vector<int> nextGreater(int arr[], int n){
     vector<int> ans(n,-1);
     for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[j]>arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
     }
     return ans;
}//TC = O(n^2)


//Optimal
vector<int> nextGreater2(int arr[], int n){
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i =0; i<n; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}//TC = O(n) and SC = O(n)
int main(){
    int arr[] = {8,6,4,7,4,9,10,8,12};
    vector<int> ans = nextGreater2(arr,9);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
