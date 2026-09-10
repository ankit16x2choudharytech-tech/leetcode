class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length())return false;
        if(s.length()==0 ) return true;
        int j=0;
        int count = 0;
        for(int i =0;i<t.length();i++ && j<s.length()){
            if(t[i]==s[j]){
                count ++;
                j++;
            }
        }
        if(count == s.length())return true;
        return false;
    }
};