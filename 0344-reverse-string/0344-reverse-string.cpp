class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int  idx=0;
        int  j=n-1-idx;
         while(!(idx>=j)){
            swap(s.at(idx),s.at(j));
        idx++;
        j--;
         }

    }
};