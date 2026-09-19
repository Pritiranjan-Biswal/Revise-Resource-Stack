class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // so to solve this problem first we need to create a stack and array
        //the array is used for implementation
        //and the array is used to staore all the next greater eleements
        int n= arr.size();
        stack<int>st;
        vector<int>ans(n);
        for(int i=2*n -1; i>=0; i--) {
            int idx= i%n;
            if(st.empty()) {
                ans[idx]= -1;
            }
            else {
                while(!st.empty() && st.top()<= arr[idx]) {
                    st.pop();
                }
                ans[idx]= st.empty() ? -1:st.top();
            }
            st.push(arr[idx]);
        }
        return ans;
    }
};