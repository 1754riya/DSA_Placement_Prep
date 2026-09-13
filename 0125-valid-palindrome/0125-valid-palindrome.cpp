class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                s1+=tolower(s[i]);
            }
        }
        string reversed=s1;
        reverse(s1.begin(),s1.end());
        return reversed==s1;
    }
};