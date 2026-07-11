#include<bits/stdc++.h>
using namespace std;

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
}
int main(){
    int arr[] = {8,6,4,7,4,9,10,8,12};
    vector<int> ans = nextGreater(arr,9);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//TC = O(n^2)