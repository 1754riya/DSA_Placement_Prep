class Solution {
public:
    bool valid(string ch){
        int i=0;
        int j=ch.size()-1;
        while(i<j){
        if(ch[i]!=ch[j]){
            return false;
        }
        i++;
        j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string s="";
        for(int i=0;i<words.size();i++){
            s=words[i];
            if(valid(s)){
                return s;
                break;
            }
        }
        return "";
    }
};