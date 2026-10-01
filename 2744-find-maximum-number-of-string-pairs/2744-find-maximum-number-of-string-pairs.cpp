class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string> word;
        int count =0;

        for(int i =0 ; i < n; i++){
           string rev  = words[i];
           reverse(rev.begin(),rev.end());
            if(words[i]==rev){
                continue;
            }else{
                if(word.find(rev)!=word.end()){
            count++;
            word.erase(rev);
           }else{
            word.insert(words[i]);
           }
            }
        }
        return count  ; 
    }
};