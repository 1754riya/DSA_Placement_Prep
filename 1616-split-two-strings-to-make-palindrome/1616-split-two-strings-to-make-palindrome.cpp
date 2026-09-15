class Solution {
public:

    bool solve(string &s, int i, int j) {

        while(i < j) {
            if(s[i] != s[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }

    bool check(string &a, string &b){
        int i=0;
        int j=b.size()-1;
        while(i<j){
            if(a[i]!=b[j]){
                return solve(a,i,j) || solve(b,i,j);
            }
            i++;
            j--;
        }
        return true;
    }

    bool checkPalindromeFormation(string a, string b) {
      return check(a, b) || check(b, a);
        
    }
};