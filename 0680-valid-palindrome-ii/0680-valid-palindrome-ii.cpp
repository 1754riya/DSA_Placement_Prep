class Solution {
public:
    bool valid(string s , int i, int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        int n=s.size();
        while(i<j){
            if(s[i]!=s[j]){
                return valid(s, i+1,j) || valid(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
        
    }
};