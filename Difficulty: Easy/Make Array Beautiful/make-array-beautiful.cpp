class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        
        //so for this problem first i need to make sure that push all eleemnts into the stack
        //after push that we need to check that if top of the stack and the current element are 
        //different , so for that we pop out those elemets
        
        //here one thing is to remember that we can't return the stack directly 
        //so store all elememnts in the vector from back
        
        stack<int>st;
        int n= arr.size();
        for(int i=0; i<n; i++) {
            if(st.empty()) {
                st.push(arr[i]);
            }
            else if(st.top()>=0 && arr[i]<0  || st.top()<0 && arr[i]>=0) {
                st.pop();
            }
            else {
                st.push(arr[i]);
            }
        }
        
        vector<int>v(st.size());
        int index= st.size()-1;
        while(!st.empty()) 
        {
            v[index]= st.top();
            index--;
            st.pop();
        }
        return v;
        
    }
};