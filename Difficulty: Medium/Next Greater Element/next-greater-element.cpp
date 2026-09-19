class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        //so to solve this problem first we need  a stack and an array , where we store all 
        // the next greater elements 
        
        //so in the stack we need to solve in such a way that 
        // if present elemts next are greatert than the current , then we change that 
        // elemnt with the next 
        
        //so to solve that first we need a stack -> for implementation
        // an array -> which is going to store all the elements in it 
        int n= arr.size();
        stack<int>st;
        vector<int>ans(n);
        
        for(int i=n-1; i>=0; i--) {
             while(!st.empty() && st.top()<= arr[i]) {
                st.pop();
            }
            if(st.empty()) {
                ans[i]=-1;
            }
            else{
                ans[i]= st.top();
            }
            st.push(arr[i]);
            
           
        }
        return ans;
        
    }
};