#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {9,8,7,7,2};

    stack<int> st;
    int i =0;
    while(i<5){
        st.push(arr[i]);
        i++;
    }
    int j =0;
    while(!st.empty()){
        arr[j] = st.top();
        st.pop();
        j++;
    }

     i =0;
    while(i<5){
    cout<<arr[i]<<" ";
    i++;
    }
    
    
    return 0;
}
//TC = O(n)
//SC = O(n)