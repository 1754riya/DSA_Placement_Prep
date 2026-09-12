class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=1;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            int sum=digits[i]+carry;
            ans[i]=sum%10;
            carry=sum/10;
        }
        if(carry==1){
            ans.insert(ans.begin(),1);
        }
        return ans;
    }
};