class Solution {
public:
    int addDigits(int num) {
        int digit= 0;
        if(num<9) return num;
         
        while(num>0){
            digit = digit + num%10;
            num/=10;
            if(num==0 && digit > 9){
                num = digit;
                digit = 0;
            }
        }

        return digit ;
    }
};