class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;
        int currentEnd = 0;
        int ct = 0;

        for(int i = 0; i < n - 1; i++) {
            maxlen = max(maxlen, i + nums[i]);

            if(i == currentEnd) {
                ct++;
                currentEnd = maxlen;
            }
        }

        return ct;
    }
};