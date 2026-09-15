class Solution {
public:
bool areSame(int * CS,int * CP){
     const int CHAR = 256;
     
    for(int i=0;i<CHAR;i++){
        if(CS[i]!=CP[i]){
            return false;
        }
    }
     
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        const int CHAR = 256;
        int CS[CHAR]={0};
        int CP[CHAR]={0};
        vector<int> anagram;
        for(int i=0;i<p.length();i++){
            CS[s[i]]++;
            CP[p[i]]++;
        }
        for(int i = p.length();i<=s.length();i++){
            if(areSame(CS,CP))
            {
                anagram.push_back(i-p.length());
            }

            CS[s[i]]++;
            CS[s[i-p.length()]]--;
        }
         

        return anagram;
    }
};