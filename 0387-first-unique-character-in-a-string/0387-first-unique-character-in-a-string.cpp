class Solution {
public:
    int firstUniqChar(string s) {
        const int Char =256;
        int Count[Char]={0};
        for(int i=0;i<s.length();i++){
            Count[s[i]]++;

        }
        for(int i = 0 ;i<s.length();i++){
            if(Count[s[i]]==1) return i;
        }
 return -1;
        
    }
};