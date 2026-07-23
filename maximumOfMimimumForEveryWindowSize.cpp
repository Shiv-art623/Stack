#include<bits/stdc++.h>
using namespace std;

//Brute Force-->
vector<int> maxOfMin(vector<int> &arr, int n){
    vector<int> ans(n,0);
    for(int i = 0; i<n; i++){
        for(int j =0; j<n-i; j++){
            int num = INT_MAX;
            for(int k = j; k<j+i+1; k++){
                num = min(num,arr[k]);
            }
            ans[i] = max(ans[i],num);
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {10,20,15,50,10,70,30};
    vector<int> ans = maxOfMin(arr,7);
    for(int i : ans){
        cout<<i<<" ";
    }
return 0;
} 
//has time complexity O(n^3) and SC O(n)
