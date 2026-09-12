class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       int ct=0;
       int n=nums.size();
       set<pair<int,int>>st;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(nums[j]-nums[i])==k){
                int a=max(nums[i],nums[j]);
                int b=min(nums[i],nums[j]);
                st.insert({a,b});
            }
        }
       }
       return st.size();
        
    }
};