class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int fives=0;
        int ten=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                fives++;
            }
            else if(bills[i]==10){
                if(fives==0){
                    return false;
                }
                ten++;
                fives--;
            }
            else{
                if(ten>0 && fives>0){
                fives--;
                ten--;}
                else if(fives>=3){
                    fives-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};