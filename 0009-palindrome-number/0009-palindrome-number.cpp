class Solution {
public:
    bool isPalindrome(int x) {
        long long power = 0;
        int digit;
        int n = x;
        if(x<0) return false;
        while(x>0){
          digit =  x%10;
          power = digit + power*10;
          x/=10;

        }
        if(power==n) return true;
        
        return false;
    }
};