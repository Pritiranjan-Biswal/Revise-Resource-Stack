class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i=0; i<arr.size(); i++) {
            if(st.empty()) {
                st.push(arr[i]); 
            }
            else if(st.top()>=0 && arr[i]<0 || st.top()<0 && arr[i]>=0) {
                st.pop();
            }
            else {
                st.push(arr[i]);
            }
        }
            
        vector<int> ans(st.size());
        int index=st.size()-1;
        while(!st.empty()) {
            ans[index]=st.top();
            index--;
            st.pop();
        }
        return ans;
    }
};