#include<bits/stdc++.h>
using namespace std;
//three times of traversal or array needed
int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> left(n);
        vector<int> right(n);
        for(int i =0; i<n; i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()] = n;
            st.pop();
        }
        for(int i =n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()] = -1;
            st.pop();
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans,heights[i]*(right[i]-left[i]-1));
        }
        return ans;
    }

    //with single pass----->
     int largestRectangleArea2(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int ans =0;
        for(int i =0; i<n; i++){
            while(!st.empty() && heights[st.top()]>heights[i] ){
                int index = st.top();
                st.pop();

                if(!st.empty()) ans = max(ans, heights[index]*(i-st.top()-1));
                else ans = max(ans,heights[index]*i);
            }
            st.push(i);
        }

        while(!st.empty()){
            int index = st.top();
            st.pop();
            if(!st.empty()) ans = max(ans, heights[index]*(n- st.top()-1));
            else ans = max(ans, heights[index]*n);
        }
        return ans;
    }
    int main(){
        vector<int> arr = {2,3,4,2,6,5,4,5,3};
        cout<<largestRectangleArea(arr)<<endl;
        cout<<largestRectangleArea2(arr);
        return 0;
    }
    //TC = O(n) and SC = O(n)