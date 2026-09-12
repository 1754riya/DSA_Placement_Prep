class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int sum=0;
            int val=queries[i][0];
            int index=queries[i][1];
            nums[index]=nums[index]+val;
            for(int i=0;i<nums.size();i++){
                if(abs(nums[i])%2==0){
                sum+=nums[i];}
            }
            ans.push_back(sum);
        }
        return ans;
    }
};