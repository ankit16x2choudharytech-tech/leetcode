class Solution {
public:
    int squresum(int x){
        long long  digit,ans =0;
       while(x>0 ){
            digit = x%10;
            ans = ans + digit*digit;
            x/=10; }
            return ans;
    }
    bool isHappy(int n) {
         unordered_set<int> check;

        while (n != 1) {
            if (check.find(n) != check.end()) {
                return false;
            }

            check.insert(n);
            n = squresum(n);
        }

        return true;
    }
};